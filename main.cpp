#include "mainwindow.h"
#include <QApplication>
#include <gparser.h>
#include "QString"
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();



    return a.exec();
}
