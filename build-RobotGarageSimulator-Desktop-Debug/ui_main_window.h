/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *motor_torque_spinbox;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QDoubleSpinBox *max_motor_speed_spinbox;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_5;
    QDoubleSpinBox *shaft_length_spinbox;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_6;
    QDoubleSpinBox *ball_weight_spinbox;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_7;
    QDoubleSpinBox *gravity_accel_spinbox;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_9;
    QDoubleSpinBox *start_angle_spinbox;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_10;
    QDoubleSpinBox *release_angle_spinbox;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_11;
    QDoubleSpinBox *simulation_time_step_spinbox;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_23;
    QSpacerItem *horizontalSpacer_12;
    QDoubleSpinBox *simulation_max_time_spinbox;
    QLabel *label_24;
    QPushButton *simulate_btn;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_8;
    QLCDNumber *traveled_distance_lcd;
    QLabel *label_16;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 508);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        motor_torque_spinbox = new QDoubleSpinBox(groupBox);
        motor_torque_spinbox->setObjectName(QString::fromUtf8("motor_torque_spinbox"));
        motor_torque_spinbox->setValue(2.000000000000000);

        horizontalLayout->addWidget(motor_torque_spinbox);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        max_motor_speed_spinbox = new QDoubleSpinBox(groupBox);
        max_motor_speed_spinbox->setObjectName(QString::fromUtf8("max_motor_speed_spinbox"));
        max_motor_speed_spinbox->setValue(20.000000000000000);

        horizontalLayout_2->addWidget(max_motor_speed_spinbox);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        shaft_length_spinbox = new QDoubleSpinBox(groupBox);
        shaft_length_spinbox->setObjectName(QString::fromUtf8("shaft_length_spinbox"));
        shaft_length_spinbox->setValue(1.000000000000000);

        horizontalLayout_5->addWidget(shaft_length_spinbox);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_5->addWidget(label_10);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_6->addWidget(label_11);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        ball_weight_spinbox = new QDoubleSpinBox(groupBox);
        ball_weight_spinbox->setObjectName(QString::fromUtf8("ball_weight_spinbox"));
        ball_weight_spinbox->setValue(10.000000000000000);

        horizontalLayout_6->addWidget(ball_weight_spinbox);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_6->addWidget(label_12);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_7->addWidget(label_13);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        gravity_accel_spinbox = new QDoubleSpinBox(groupBox);
        gravity_accel_spinbox->setObjectName(QString::fromUtf8("gravity_accel_spinbox"));
        gravity_accel_spinbox->setValue(9.800000000000001);

        horizontalLayout_7->addWidget(gravity_accel_spinbox);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_7->addWidget(label_14);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_9->addWidget(label_17);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        start_angle_spinbox = new QDoubleSpinBox(groupBox);
        start_angle_spinbox->setObjectName(QString::fromUtf8("start_angle_spinbox"));
        start_angle_spinbox->setValue(0.000000000000000);

        horizontalLayout_9->addWidget(start_angle_spinbox);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_9->addWidget(label_18);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_10->addWidget(label_19);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        release_angle_spinbox = new QDoubleSpinBox(groupBox);
        release_angle_spinbox->setObjectName(QString::fromUtf8("release_angle_spinbox"));
        release_angle_spinbox->setValue(90.000000000000000);

        horizontalLayout_10->addWidget(release_angle_spinbox);

        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_10->addWidget(label_20);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_11->addWidget(label_21);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);

        simulation_time_step_spinbox = new QDoubleSpinBox(groupBox);
        simulation_time_step_spinbox->setObjectName(QString::fromUtf8("simulation_time_step_spinbox"));
        simulation_time_step_spinbox->setDecimals(3);
        simulation_time_step_spinbox->setValue(0.010000000000000);

        horizontalLayout_11->addWidget(simulation_time_step_spinbox);

        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_11->addWidget(label_22);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_12->addWidget(label_23);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);

        simulation_max_time_spinbox = new QDoubleSpinBox(groupBox);
        simulation_max_time_spinbox->setObjectName(QString::fromUtf8("simulation_max_time_spinbox"));
        simulation_max_time_spinbox->setDecimals(3);
        simulation_max_time_spinbox->setValue(60.000000000000000);

        horizontalLayout_12->addWidget(simulation_max_time_spinbox);

        label_24 = new QLabel(groupBox);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_12->addWidget(label_24);


        verticalLayout->addLayout(horizontalLayout_12);


        verticalLayout_3->addWidget(groupBox);

        simulate_btn = new QPushButton(centralWidget);
        simulate_btn->setObjectName(QString::fromUtf8("simulate_btn"));

        verticalLayout_3->addWidget(simulate_btn);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_8->addWidget(label_15);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        traveled_distance_lcd = new QLCDNumber(groupBox_2);
        traveled_distance_lcd->setObjectName(QString::fromUtf8("traveled_distance_lcd"));

        horizontalLayout_8->addWidget(traveled_distance_lcd);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_8->addWidget(label_16);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout_3->addWidget(groupBox_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Parameters", nullptr));
        label->setText(QApplication::translate("MainWindow", "MotorTorque", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "[N*m]", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "MaxMotorSpeed", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "[rad/s]", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "ShaftLength", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "[m]", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "BallWeight", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "[kg]", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "GravityAccel", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "[m/s^2]", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "StartAngle", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "[deg]", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "ReleaseAngle", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "[deg]", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "Simulation Time Step", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "[s]", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "Simulation Max Time", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "[s]", nullptr));
        simulate_btn->setText(QApplication::translate("MainWindow", "Simulate", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Result", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Traveled Horizontal Distance", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "[m]", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
