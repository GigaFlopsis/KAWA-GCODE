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
#include <gparser.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    GParser *gparse = new GParser;
    QThread *thread_New = new QThread;//Create new thead for COM port
    Port *PortNew = new Port();//creat object class Port
    PortNew->moveToThread(thread_New);//moved class to tread
    PortNew->thisPort.moveToThread(thread_New);//moved port to tread
    connect(thread_New, SIGNAL(started()), PortNew, SLOT(process_Port()));//Переназначения метода run
    connect(this,SIGNAL(savesettings(QString,int,int,int,int,int)),PortNew,SLOT(Write_Settings_Port(QString,int,int,int,int,int)));//set param port
    connect(PortNew, SIGNAL(finished_Port()), thread_New, SLOT(quit()));//Переназначение метода выход
    connect(thread_New, SIGNAL(finished()), PortNew, SLOT(deleteLater()));//delite tread
    connect(PortNew, SIGNAL(finished_Port()), thread_New, SLOT(deleteLater()));//Удалить к чертям поток
    connect(PortNew, SIGNAL(error_(QString)), this, SLOT(printToTerminal(QString)));//Log errors
    connect(this, SIGNAL(writeData(QByteArray)), PortNew, SLOT(WriteToPort(QByteArray))); //sent to port
    connect(this, SIGNAL(Connect()),PortNew,SLOT(ConnectPort())); //connect to port
    connect(this, SIGNAL(Disconect()),PortNew,SLOT(DisconnectPort())); //disconnect
    connect(PortNew, SIGNAL(outPort(QString)),this,SLOT(printToTerminal(QString))); //print to terminal
    connect(PortNew, SIGNAL(disconnect()),this,SLOT(off_connectButton_state())); //state connect button

    connect(this, SIGNAL(outPort(QString)),gparse,SLOT(ParseCmd(QString))); //print to terminal
    connect(this, SIGNAL(FileData(QStringList)),gparse,SLOT(ParsingFile(QStringList))); //send file to parsing

    thread_New->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

//print to termiinal
void MainWindow::printToTerminal(const QString &arg1)
{
    ui->terminal->append(arg1);
    qDebug() << arg1;

}



void MainWindow::on_SPEED_editingFinished()
{
    qDebug() << ui->SPEED->text();

}


//put button play
void MainWindow::on_pushButton_play_clicked()
{
//    filePos(QList<paramPoint> posList);
//start treads
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
         QStringList fileToline = file.split('\n');

         // file ыутв in the line for later parsing
         emit FileData(fileToline);
         ui->terminal->append(QString::number(fileToline.length()));
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
// disconnect state
void MainWindow::off_connectButton_state()
{
    ui->connectButton->setText("Disconnect");
    emit Disconect();
}



void MainWindow::on_SPEED_valueChanged(const QString &arg1)
{
    qDebug() << arg1;
}

//put button terminal
void MainWindow::on_sendToTerminalButton_clicked()
{
    QString text = ui->set_command->text();
    printToTerminal(text);
    ui->set_command->clear();
    emit writeData(text.toLocal8Bit());
   // GParser gparser;
   // gparser.Debug(text);
}

//move buttons
void MainWindow::on_pushButton_YUp_clicked()
{
    QString cmd = "DO LMOVE SHIFT(HERE BY 0,10,0)";
    emit writeData(cmd.toLocal8Bit());
}
