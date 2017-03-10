#-------------------------------------------------
#
# Project created by QtCreator 2017-03-07T19:18:29
#
#-------------------------------------------------

QT       += core gui
QT      += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = KAWA-GCODE
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gparser.cpp \
    port.cpp

HEADERS  += mainwindow.h \
    gparser.h \
    port.h

FORMS    += mainwindow.ui
