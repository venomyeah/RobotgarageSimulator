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

#pragma once

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private slots:
  void on_simulate_btn_clicked();

 private:
  Ui::MainWindow *ui_;
};
