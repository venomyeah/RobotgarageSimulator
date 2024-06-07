#include "main_window.h"

#include <QMessageBox>
#include <opencv4/opencv2/opencv.hpp>

#include "simulator.h"
#include "ui_main_window.h"
using namespace cv;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui_(new Ui::MainWindow) {
  ui_->setupUi(this);
}

MainWindow::~MainWindow() { delete ui_; }

void MainWindow::on_simulate_btn_clicked() {
  robotgarage::Simulator sim(
      ui_->motor_torque_spinbox->value(), ui_->max_motor_speed_spinbox->value(),
      ui_->shaft_length_spinbox->value(), ui_->ball_weight_spinbox->value(),
      ui_->gravity_accel_spinbox->value(),
      M_PI / 180 * ui_->start_angle_spinbox->value(),
      M_PI / 180 * ui_->release_angle_spinbox->value(),
      ui_->simulation_time_step_spinbox->value(),
      ui_->simulation_max_time_spinbox->value());

  Mat rgb(1000, 1000, CV_8UC3, Scalar(0, 0, 0));
  imshow("SIM", rgb);
  pollKey();

  auto ball_traveled_distance = sim.simulate();

  if (ball_traveled_distance > 0) {
    ui_->traveled_distance_lcd->display(ball_traveled_distance);
  } else {
    QMessageBox::warning(
        this, "Error",
        "Simulation Max Time was not sufficient! Please increase it!");
  }
}
