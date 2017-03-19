#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "port.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QStringList>
#include <QKeyEvent>

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
    void on_openFile_clicked();
    void on_scanCom_clicked();
    void on_connectButton_clicked();
    void on_SPEED_valueChanged(const QString &arg1);
    void on_pushButton_YUp_clicked();

    void on_pushButton_YDown_clicked();

    void on_pushButton_XDown_clicked();

    void on_pushButton_XUp_clicked();

    void on_pushButton_ZDown_clicked();

    void on_pushButton_ZUp_clicked();

    void on_reset_clicked();

    void on_resetError_clicked();


    void on_j1_up_clicked();

    void on_j1_down_clicked();

    void on_j2_up_clicked();

    void on_j2_down_clicked();

    void on_j3_up_clicked();

    void on_j3_down_clicked();

    void on_j4_up_clicked();

    void on_j4_down_clicked();

    void on_j5_up_clicked();

    void on_j5_down_clicked();

    void on_j6_up_clicked();

    void on_j6_down_clicked();

signals:
    void savesettings(QString name, int baudrate, int DataBits, int Parity, int StopBits, int FlowControl);
    void writeData(QByteArray data);
    void Connect();
    void Disconect();
    void FileData(const QStringList &data);
public slots:
    void on_textOpenFile_textEdited(const QString &arg1);
    void on_sendToTerminalButton_clicked();
    void printToTerminal(const QString &arg1);
    void off_connectButton_state();
private:
    Ui::MainWindow *ui;
    Port PortNew;
protected:
   virtual void keyPressEvent(QKeyEvent *event);
};

#endif // MAINWINDOW_H
