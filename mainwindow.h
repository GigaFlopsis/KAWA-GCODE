#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "port.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QStringList>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_SPEED_editingFinished();
    void on_pushButton_play_clicked();
    void on_pushButton_8_clicked();
    void on_openFile_clicked();
    void on_scanCom_clicked();
    void on_connectButton_clicked();
    void on_SPEED_valueChanged(const QString &arg1);
    void on_pushButton_YUp_clicked();

signals:
    void savesettings(QString name, int baudrate, int DataBits, int Parity, int StopBits, int FlowControl);
    void writeData(QByteArray data);
    void Connect();
    void Disconect();
    void FileData(const QStringList &data);
public slots:
    void on_textOpenFile_textEdited(const QString &arg1);
    void on_sendToTerminalButton_clicked();
    void on_pushButton_clicked();
    void printToTerminal(const QString &arg1);
    void off_connectButton_state();
private:
    Ui::MainWindow *ui;
    Port PortNew;

};

#endif // MAINWINDOW_H
