#-------------------------------------------------
#
# Project created by QtCreator 2017-03-07T19:18:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = KAWA-GCODE
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gparser.cpp

HEADERS  += mainwindow.h \
    gparser.h

FORMS    += mainwindow.ui
