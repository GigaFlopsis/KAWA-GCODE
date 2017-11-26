/* @DEVITT DMITRY 12.03.2017
*  "KAWASAKI-GCODE" the parser for indastrial robots KAWASAKI D series;
*
*
*
*
*
* */


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QList>
#include <QMetaType>
#include <QDebug>
#include <QThread>
#include "gparser.h"
#include "programrun.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // init obj and create thread
    GParser *gparse = new GParser();
    ProgramRun *RunMove = new ProgramRun();         //creat object class
    QThread *thread_Port = new QThread;             //Create new thead for COM port
    QThread *thread_Move = new QThread;             //Create new thead for Move

    RunMove->moveToThread(thread_Move);

    qRegisterMetaType<QList<paramPoint>>("QList<paramPoint>");

    connect(this,SIGNAL(Save(QString)),gparse,SLOT(SetList()));                              //get list point
    connect(gparse,SIGNAL(filePos(QList<paramPoint>)),RunMove,SLOT(StartProgram(QList<paramPoint>)));   //run programm


    //Stop move
    connect(RunMove,SIGNAL(FinishMove()),RunMove,SLOT(StopProgram()),Qt::DirectConnection);             //stoping program

    //save
    connect(this,SIGNAL(Save(QString)),gparse,SLOT(SetListforFile(QString)));                              //get list point
    connect(gparse,SIGNAL(filePosforLoad(QList<paramPoint>,QString)),RunMove,SLOT(WriteToFile(QList<paramPoint>,QString)),Qt::DirectConnection);

    connect(ui->setOrigin,SIGNAL(pressed()),RunMove,SLOT(SetOrigin()));                                 // set origin
    connect(this, SIGNAL(writeData(QByteArray)), this, SLOT(printToTerminal(QString)) );                //print to terminal

    connect(this, SIGNAL(FileData(QStringList)),gparse,SLOT(ParsingFile(QStringList)));                 //send file to parsing
    connect(gparse, SIGNAL(CoutList(QString)),this,SLOT(on_textOpenFile_textEdited(QString)));          //send file to parsing

    //start treads
    thread_Port->start();
    thread_Move->start();

    connect(gparse, SIGNAL(fileLengt(int)),RunMove,SLOT(LengtCmd(int)));                                //set maximum in progress bar



}

MainWindow::~MainWindow()
{
    delete ui;
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


//save to AS file
void MainWindow::on_loadTofileButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                                                    "",
                                                    tr("AS (*.AS);;NG (*.ng)"));
    emit Save(fileName);
}
