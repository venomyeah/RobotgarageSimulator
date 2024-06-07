/**
 * This file is part of RobotGarageSimulator.

RobotGarageSimulator is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the Free
Software Foundation, either version 3 of the License, or (at your option) any
later version.

RobotGarageSimulator is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
details.

You should have received a copy of the GNU General Public License along with
RobotGarageSimulator. If not, see <https://www.gnu.org/licenses/>.
*/

/**
   “Copyright 2024 Vittorio Lumare - robotgarage.org”
*/

#include "simulator.h"

#include <math.h>
#include <unistd.h>

#include <opencv4/opencv2/opencv.hpp>

namespace robotgarage {
Simulator::Simulator(const double motor_torque, const double max_motor_speed,
                     const double shaft_length, const double ball_weight,
                     const double gravity_accel, double start_angle,
                     double release_angle, double time_sim_step,
                     double max_sim_time)
    : motor_torque_(motor_torque),
      max_motor_speed_(max_motor_speed),
      shaft_length_(shaft_length),
      ball_weight_(ball_weight),
      gravity_accel_(gravity_accel),
      start_angle_(start_angle),
      release_angle_(release_angle),
      time_sim_step_(time_sim_step),
      max_sim_time_(max_sim_time) {}

using namespace cv;

static int xToCv(double x) { return x * 100; }
static int yToCv(double y) { return 1000 - (y * 100); }

double Simulator::simulate() {
  double ball_x = 0;
  double ball_y = 0;
  double ball_vx = 0;
  double ball_vy = 0;
  auto elapsed_time = simulateShaftRotation(
      start_angle_, release_angle_, shaft_length_, ball_weight_, gravity_accel_,
      motor_torque_, max_motor_speed_, ball_x, ball_y, ball_vx, ball_vy);

  if (elapsed_time > max_sim_time_) {
    return -1;
  }

  double final_ball_x = 0;
  double final_ball_y = 0;
  simulateBallFlight(ball_x, ball_vx, ball_y, ball_vy, gravity_accel_,
                     final_ball_x, final_ball_y);

  if (elapsed_time > max_sim_time_) {
    return -1;
  }

  return fabs(final_ball_x - ball_x);
}

double Simulator::simulateShaftRotation(double alpha, double beta, double r,
                                        double mb, double g, double tm,
                                        double max_omega, double &output_x,
                                        double &output_y, double &output_vx,
                                        double &output_vy) {
  double theta = alpha;
  double omega = 0;  // initial angular velocity is assumed to be zero
  double time = 0;
  // for (theta = alpha; theta <= beta; theta += angle_sim_step_) {
  for (time = 0; time < max_sim_time_; time += time_sim_step_) {
    output_x = fulcrum_x_ + r * cos(theta);
    output_y = fulcrum_y_ + r * sin(theta);

    double tangent_ball_speed = r * omega;
    double ball_traj_angle = theta + M_PI_2;

    output_vx = tangent_ball_speed * cos(ball_traj_angle);
    output_vy = tangent_ball_speed * sin(ball_traj_angle);

    // OpenCv show ball and shaft
    Mat rgb(1000, 1000, CV_8UC3, Scalar(0, 0, 0));
    line(rgb, Point(xToCv(fulcrum_x_), yToCv(fulcrum_y_)),
         Point(xToCv(output_x), yToCv(output_y)), Scalar(0, 255, 255), 3);
    circle(rgb, Point(xToCv(output_x), yToCv(output_y)), 3, Scalar(0, 255, 0),
           3);
    imshow("SIM", rgb);
    pollKey();

    // Calculations
    double ang_acc = (tm / (mb * r * r)) + 1 + ((g * cos(theta)) / mb);

    theta += omega * time_sim_step_;
    omega += ang_acc * time_sim_step_;
    omega = fmin(omega, max_omega);  // limit max motor speed
    if (theta > beta) {
      break;
    };
    usleep(time_sim_step_ * 1000000);
  }
  return time;
}

double Simulator::simulateBallFlight(double x0, double vx0, double y0,
                                     double vy0, double g, double &output_x,
                                     double &output_y) {
  double x = 0;
  double y = 0;
  double t = 0;
  for (t = 0; t < max_sim_time_; t += time_sim_step_) {
    x = x0 + vx0 * t;
    y = y0 + vy0 * t - 0.5 * g * t * t;

    if (y < 0) {
      break;
    }

    // OpenCv show ball and shaft
    Mat rgb(1000, 1000, CV_8UC3, Scalar(0, 0, 0));
    circle(rgb, Point(xToCv(x), yToCv(y)), 3, Scalar(0, 255, 0), 3);
    imshow("SIM", rgb);
    pollKey();

    usleep(time_sim_step_ * 1000000);
  }

  output_x = x;
  output_y = y;

  return t;
}

}  // namespace robotgarage
