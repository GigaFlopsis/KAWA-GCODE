#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug.h"
#include "gparser.h"
#include "QFileDialog"
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
    GParser gparser;
    gparser.Debug(text);
}


void MainWindow::on_set_command_textChanged(const QString &arg1)
{
   // qDebug() << arg1;
}

void MainWindow::on_SPEED_editingFinished()
{
}


void MainWindow::on_pushButton_play_clicked()
{

}

void MainWindow::on_pushButton_8_clicked()
{
   qDebug() << "Y+";
}

void MainWindow::on_openFile_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
           tr("Open G-code file"), "",
           tr("G-code (*.gcode);;All Files (*)"));
    ui->textOpenFile->setText(fileName);

    QFile inputFile(fileName);
         inputFile.open(QIODevice::ReadOnly);
         QTextStream in(&inputFile);
         QString file = in.readAll();
         inputFile.close();
         QStringList line = file.split('\n');
         ui->terminal->append(QString::number(line.length()));
    on_textOpenFile_textEdited(file);
}

void MainWindow::on_textOpenFile_textEdited(const QString &arg1)
{
    ui->listCommand->setText(arg1);
}

