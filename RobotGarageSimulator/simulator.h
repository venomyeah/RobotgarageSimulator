#pragma once

namespace robotgarage {
class Simulator {
 public:
  Simulator(const double motor_torque, const double max_motor_speed,
            const double shaft_length, const double ball_weight,
            const double gravity_accel, double start_angle,
            double release_angle, double time_sim_step, double max_sim_time);

  double simulate();

  double simulateShaftRotation(double alpha, double beta, double r, double mb,
                               double g, double tm, double max_omega,
                               double &output_x, double &output_y,
                               double &output_vx, double &output_vy);

  double simulateBallFlight(double x0, double vx0, double y0, double vy0,
                            double g, double &output_x, double &output_y);

 private:
  double motor_torque_ = 0;     // [Nm]
  double max_motor_speed_ = 0;  // [rad/s]
  double shaft_length_ = 0;     // [m]
  double ball_weight_ = 0;      // [kg]
  double gravity_accel_ = 0;    // [m/s^2]
  double start_angle_ = 0;      // [rad]
  double release_angle_ = 0;    // [rad]

  double angle_sim_step_ = 0.1;  // [rad]
  double time_sim_step_ = 0.01;  // [s]
  double max_sim_time_ = 60;     // [s]

  double fulcrum_x_ = 8;  // [m]
  double fulcrum_y_ = 0;  // [m]
};
}  // namespace robotgarage
