#ifndef PORT_H
#define PORT_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

struct Settings {
    QString name;
    qint32 baudRate;
    QSerialPort::DataBits dataBits;
    QSerialPort::Parity parity;
    QSerialPort::StopBits stopBits;
    QSerialPort::FlowControl flowControl;
};

class Port : public QObject
{
    Q_OBJECT

public:

    explicit Port(QObject *parent = 0);

    ~Port();

    QSerialPort thisPort;

    Settings SettingsPort;

signals:

    void finished_Port();
    void error_(QString err);
    void outPort(QString data);

public slots:

    void DisconnectPort();
    void ConnectPort(void);
    void Write_Settings_Port(QString name, int baudrate, int DataBits, int Parity, int StopBits, int FlowControl);
    void process_Port();
    void WriteToPort(QByteArray data);
    void ReadInPort();

private slots:

    void handleError(QSerialPort::SerialPortError error);//

public:

};

#endif // PORT_H
