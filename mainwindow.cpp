#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug.h"
#include "gparser.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString text = ui->set_command->text();
    ui->terminal->append(text);
    ui->set_command->clear();
    GParser::Debug(text);
}


void MainWindow::on_set_command_textChanged(const QString &arg1)
{
   // qDebug() << arg1;
}

void MainWindow::on_SPEED_editingFinished()
{
}

