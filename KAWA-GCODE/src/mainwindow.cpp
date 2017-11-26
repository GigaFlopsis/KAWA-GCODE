/* @DEVITT DMITRY 12.03.2017
*  "KAWASAKI-GCODE" the parser for indastrial robots KAWASAKI D series;
*
*
*
*
*
* */


#include "include/mainwindow.h"
#include "include/ui_mainwindow.h"
#include <QFileDialog>
#include <QList>
#include <QMetaType>
#include <QDebug>
#include <QThread>
#include "include/gparser.h"
#include "include/programrun.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // init obj and create thread
    GParser *gparse = new GParser();
    Port *PortNew = new Port();                     //creat object class Port
    ProgramRun *RunMove = new ProgramRun();         //creat object class
    QThread *thread_Port = new QThread;             //Create new thead for COM port
    QThread *thread_Move = new QThread;             //Create new thead for Move
    PortNew->moveToThread(thread_Port);             //moved class to tread
    PortNew->thisPort.moveToThread(thread_Port);    //moved port to tread
    RunMove->moveToThread(thread_Move);

    qRegisterMetaType<QList<paramPoint>>("QList<paramPoint>");

    //thread_Move
      // start move
    connect(ui->pushButton_play,SIGNAL(pressed()),gparse,SLOT(SetList()));                              //get list point
    connect(gparse,SIGNAL(filePos(QList<paramPoint>)),RunMove,SLOT(StartProgram(QList<paramPoint>)));   //run programm

    connect(ui->pushButton_pause,SIGNAL(pressed()),RunMove,SLOT(PauseProgram()),Qt::DirectConnection);  // pause move
    connect(gparse,SIGNAL(cmdError()),RunMove,SLOT(PauseProgram()),Qt::DirectConnection);               // ERROR
    connect(ui->pushButton_Stop,SIGNAL(pressed()),RunMove,SLOT(StopProgram()),Qt::DirectConnection);    // stop move
    connect(gparse,SIGNAL(cmdComplite()),RunMove,SLOT(PlayMove()),Qt::DirectConnection);                //next pos if complide movement

    //Stop move
    connect(RunMove,SIGNAL(FinishMove()),RunMove,SLOT(StopProgram()),Qt::DirectConnection);             //stoping program

    //load t file
    connect(ui->loadTofileButton,SIGNAL(pressed()),gparse,SLOT(SetListforFile()));                              //get list point
    connect(gparse,SIGNAL(filePosforLoad(QList<paramPoint>)),RunMove,SLOT(WriteToFile(QList<paramPoint>)),Qt::DirectConnection);

    connect(ui->setOrigin,SIGNAL(pressed()),RunMove,SLOT(SetOrigin()));                                 // set origin
    connect(PortNew, SIGNAL(GetStart()), RunMove, SLOT(setResporse()),Qt::DirectConnection);            // if resive in port
    connect(ui->pushButton_pause,SIGNAL(pressed()),RunMove,SLOT(setResporse()),Qt::DirectConnection);   // for test move

    connect(RunMove,SIGNAL(Move(QByteArray)),PortNew,SLOT(WriteToPort(QByteArray)));                    //print movement to port
    connect(RunMove,SIGNAL(MovePrint(QString)),this,SLOT(printToTerminal(QString)));                    //print movement to terminal

    connect(this, SIGNAL(writeData(QByteArray)), PortNew, SLOT(WriteToPort(QByteArray)));               //print to port
    connect(this, SIGNAL(writeData(QByteArray)), this, SLOT(printToTerminal(QString)) );                //print to terminal

    //port settings
    connect(thread_Port, SIGNAL(started()), PortNew, SLOT(process_Port()));                             //reinit function run
    connect(this,SIGNAL(savesettings(QString,int,int,int,int,int)),PortNew,
            SLOT(Write_Settings_Port(QString,int,int,int,int,int)));                                    //set param port
    connect(PortNew, SIGNAL(finished_Port()), thread_Port, SLOT(quit()));                               //reinit function quit
    connect(thread_Port, SIGNAL(finished()), PortNew, SLOT(deleteLater()));                             //delite tread
    connect(PortNew, SIGNAL(finished_Port()), thread_Port, SLOT(deleteLater()));                        //delite tread
    connect(PortNew, SIGNAL(error_(QString)), this, SLOT(printToTerminal(QString)));                    //Log errors
    connect(this, SIGNAL(Connect()),PortNew,SLOT(ConnectPort()));                                       //connect to port
    connect(this, SIGNAL(Disconect()),PortNew,SLOT(DisconnectPort()));                                  //disconnect

    connect(PortNew, SIGNAL(outPort(QString)),this,SLOT(printToTerminal(QString)));                     //print to terminal
    connect(PortNew, SIGNAL(disconnect()),this,SLOT(off_connectButton_state()));                        //state connect button
    //parsing data
    connect(PortNew, SIGNAL(outPort(QString)),gparse,SLOT(ParseCmd(QString)));                          //parsig send data
    connect(this, SIGNAL(FileData(QStringList)),gparse,SLOT(ParsingFile(QStringList)));                 //send file to parsing
    connect(gparse, SIGNAL(CoutList(QString)),this,SLOT(on_textOpenFile_textEdited(QString)));          //send file to parsing

    //start treads
    thread_Port->start();
    thread_Move->start();

    //progress bar
    connect(gparse, SIGNAL(fileLengt(int)),ui->progressBar,SLOT(setMaximum(int)));                      //set maximum in progress bar
    connect(RunMove, SIGNAL(getStep(int)),ui->progressBar,SLOT(setValue(int)));                         //set maximum in progress bar
    connect(gparse, SIGNAL(fileLengt(int)),RunMove,SLOT(LengtCmd(int)));                                //set maximum in progress bar

    //move button
    connect(ui->pushButton_nextStep, SIGNAL(pressed()),RunMove,SLOT(nextStep()));                       //set stap to right
    connect(ui->pushButton_prevStep, SIGNAL(pressed()),RunMove,SLOT(prevStep()));                       //set stap to right


}

MainWindow::~MainWindow()
{
    delete ui;
}

//print to termiinal
void MainWindow::printToTerminal(const QString &arg1)
{
    ui->terminal->append(arg1);
}

//change speed moved
void MainWindow::on_SPEED_editingFinished()
{
    qDebug() << ui->SPEED->text();

}

//open file
void MainWindow::on_openFile_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
           tr("Open G-code file"), "",
           tr("G-code (*.gcode);;All Files (*)"));
    ui->textOpenFile->setText(fileName);
    ui->listCommand->clear();

    QFile inputFile(fileName);
         inputFile.open(QIODevice::ReadOnly);
         QTextStream in(&inputFile);
         QString file = in.readAll();
         inputFile.close();
         QStringList fileToline = file.split('\n');

         // set line for later parsing
         emit FileData(fileToline);
}

//cout file path
void MainWindow::on_textOpenFile_textEdited(const QString &arg1)
{
    ui->listCommand->append(arg1);

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

/*** buttons ***/
//move Y+
void MainWindow::on_pushButton_YUp_clicked()
{
    QString cmd = "DO LMOVE SHIFT(HERE BY 0,10,0)";
    emit writeData(cmd.toLocal8Bit());
    printToTerminal(cmd);
}
//move Y+
void MainWindow::on_pushButton_YDown_clicked()
{
    QString cmd = "DO LMOVE SHIFT(HERE BY 0,-10,0)";
    emit writeData(cmd.toLocal8Bit());
    printToTerminal(cmd);
}

//move X-
void MainWindow::on_pushButton_XDown_clicked()
{
    QString cmd = "DO LMOVE SHIFT(HERE BY -10,0,0)";
    emit writeData(cmd.toLocal8Bit());
    printToTerminal(cmd);
}

//move X+
void MainWindow::on_pushButton_XUp_clicked()
{
    QString cmd = "DO LMOVE SHIFT(HERE BY 10,0,0)";
    emit writeData(cmd.toLocal8Bit());
    printToTerminal(cmd);
}

//move Z-
void MainWindow::on_pushButton_ZDown_clicked()
{
    QString cmd = "DO LMOVE SHIFT(HERE BY 0,0,-10)";
    emit writeData(cmd.toLocal8Bit());
    printToTerminal(cmd);
}
//move Z+
void MainWindow::on_pushButton_ZUp_clicked()
{
    QString cmd = "DO LMOVE SHIFT(HERE BY 0,0,10)";
    emit writeData(cmd.toLocal8Bit());
    printToTerminal(cmd);
}

//reset
void MainWindow::on_reset_clicked()
{
    QString cmd = "reset";
    printToTerminal(cmd);
    emit writeData(cmd.toLocal8Bit());
}

//error reset
void MainWindow::on_resetError_clicked()
{
    QString cmd = "ereset";
    printToTerminal(cmd);
    emit writeData(cmd.toLocal8Bit());
}

/*** joits move ****/
void MainWindow::on_j1_up_clicked()
{
    QString cmd = "DO DRIVE 1,10," + ui->SPEED->text();
    printToTerminal(cmd);
    emit writeData(cmd.toLocal8Bit());
}

void MainWindow::on_j1_down_clicked()
{
    QString cmd = "DO DRIVE 1,-10," + ui->SPEED->text();
    printToTerminal(cmd);
    emit writeData(cmd.toLocal8Bit());
}

void MainWindow::on_j2_up_clicked()
{
    QString cmd = "DO DRIVE 2,10," + ui->SPEED->text();
    printToTerminal(cmd);
    emit writeData(cmd.toLocal8Bit());
}

void MainWindow::on_j2_down_clicked()
{
    QString cmd = "DO DRIVE 2,-10," + ui->SPEED->text();
    printToTerminal(cmd);
    emit writeData(cmd.toLocal8Bit());
}

void MainWindow::on_j3_up_clicked()
{
    QString cmd = "DO DRIVE 3,10," + ui->SPEED->text();
    printToTerminal(cmd);
    emit writeData(cmd.toLocal8Bit());
}

void MainWindow::on_j3_down_clicked()
{
    QString cmd = "DO DRIVE 3,-10," + ui->SPEED->text();
    printToTerminal(cmd);
    emit writeData(cmd.toLocal8Bit());
}

void MainWindow::on_j4_up_clicked()
{
    QString cmd = "DO DRIVE 4,10," + ui->SPEED->text();
    printToTerminal(cmd);
    emit writeData(cmd.toLocal8Bit());
}

void MainWindow::on_j4_down_clicked()
{
    QString cmd = "DO DRIVE 4,-10," + ui->SPEED->text();
    printToTerminal(cmd);
    emit writeData(cmd.toLocal8Bit());
}

void MainWindow::on_j5_up_clicked()
{
    QString cmd = "DO DRIVE 5,10," + ui->SPEED->text();
    printToTerminal(cmd);
    emit writeData(cmd.toLocal8Bit());
}

void MainWindow::on_j5_down_clicked()
{
    QString cmd = "DO DRIVE 5,-10," + ui->SPEED->text();
    printToTerminal(cmd);
    emit writeData(cmd.toLocal8Bit());
}

void MainWindow::on_j6_up_clicked()
{
    QString cmd = "DO DRIVE 6,10," + ui->SPEED->text();
    printToTerminal(cmd);
    emit writeData(cmd.toLocal8Bit());
}

void MainWindow::on_j6_down_clicked()
{
    QString cmd = "DO DRIVE 6,-10," + ui->SPEED->text();
    printToTerminal(cmd);
    emit writeData(cmd.toLocal8Bit());
}

//keyboard event
void MainWindow::keyPressEvent(QKeyEvent *event) {
 int key=event->key();//event->key() - целочисленный код клавиши
 if (key== Qt::Key_Enter || key== Qt::Key_Return) { //send if put ENTER
     on_sendToTerminalButton_clicked();
 }

}
