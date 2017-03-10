#include "mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <QDesktopWidget>
#include <QDesktopWidget>
#include <QScreen>
#include <QMessageBox>
#include <QMetaEnum>
#include <unistd.h>
#include <errno.h>
#include "ui_mainwindow.h"
#include <QThread>
#include <QDebug>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QThread *thread_New = new QThread;//Создаем поток для порта платы
    Port *PortNew = new Port();//Создаем обьект по классу
    PortNew->moveToThread(thread_New);//помешаем класс  в поток
    PortNew->thisPort.moveToThread(thread_New);//Помещаем сам порт в поток

    connect(thread_New, SIGNAL(started()), PortNew, SLOT(process_Port()));//Переназначения метода run
    connect(this,SIGNAL(savesettings(QString,int,int,int,int,int)),PortNew,SLOT(Write_Settings_Port(QString,int,int,int,int,int)));//Слот - ввод настроек!
    connect(PortNew, SIGNAL(finished_Port()), thread_New, SLOT(quit()));//Переназначение метода выход
    connect(thread_New, SIGNAL(finished()), PortNew, SLOT(deleteLater()));//Удалить к чертям поток
    connect(PortNew, SIGNAL(finished_Port()), thread_New, SLOT(deleteLater()));//Удалить к чертям поток
    connect(PortNew, SIGNAL(error_(QString)), this, SLOT(printToTerminal(QString)));//Лог ошибок
    connect(this, SIGNAL(writeData(QByteArray)), PortNew, SLOT(WriteToPort(QByteArray))); //sent to port
    connect(this, SIGNAL(Connect()),PortNew,SLOT(ConnectPort()));
    connect(this, SIGNAL(Disconect()),PortNew,SLOT(DisconnectPort()));
    connect(PortNew, SIGNAL(outPort(QString)),this,SLOT(printToTerminal(QString)));

    thread_New->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::printToTerminal(const QString &arg1)
{
    ui->terminal->append(arg1);
   // QByteArray data = arg1.toLocal8Bit() + '\r'; // Присвоение "data" значения из EnterText
}



void MainWindow::on_SPEED_editingFinished()
{
    qDebug() << ui->SPEED->text();
}


void MainWindow::on_pushButton_play_clicked()
{

}

void MainWindow::on_pushButton_8_clicked()
{
   qDebug() << "Y+";
}

//open file
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

//cout file path
void MainWindow::on_textOpenFile_textEdited(const QString &arg1)
{
    ui->listCommand->setText(arg1);
}


// scaning COM port
void MainWindow::on_scanCom_clicked()
{
    ui->setCOM->clear();
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
        {
        ui->setCOM->addItem(info.portName());
        }
}

// connect and disconnect button
void MainWindow::on_connectButton_clicked()
{
    emit savesettings(ui->setCOM->currentText(),QSerialPort::Baud9600,QSerialPort::Data8,
                 QSerialPort::NoParity, QSerialPort::OneStop, QSerialPort::HardwareControl);

    if(ui->connectButton->text() == "Connect")
    {
       ui->connectButton->setText("Disconnect");
       emit Connect();
    }
    else
    {
       ui->connectButton->setText("Connect");
       emit Disconect();
    }
}

void MainWindow::on_SPEED_valueChanged(const QString &arg1)
{
    qDebug() << arg1;
}

void MainWindow::on_sendToTerminalButton_clicked()
{
    QString text = ui->set_command->text();
    printToTerminal(text);
    ui->set_command->clear();
    writeData(text.toLocal8Bit());
   // GParser gparser;
   // gparser.Debug(text);

}
