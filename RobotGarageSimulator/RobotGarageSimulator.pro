#-------------------------------------------------
#
# Project created by QtCreator 2024-06-07T18:47:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RobotGarageSimulator
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++17

# INCLUDES
INCLUDEPATH += /usr/local/include/opencv4

# OPENCV LIBS
LIBS += "/usr/local/lib/libopencv_core.so"
LIBS += "/usr/local/lib/libopencv_highgui.so"
LIBS += "/usr/local/lib/libopencv_text.so"
LIBS += "/usr/local/lib/libopencv_imgproc.so"
LIBS += "/usr/local/lib/libopencv_imgcodecs.so"

SOURCES += \
        main.cpp \
        main_window.cpp \
        simulator.cpp

HEADERS += \
        main_window.h \
        simulator.h

FORMS += \
        main_window.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
 ../README.md
