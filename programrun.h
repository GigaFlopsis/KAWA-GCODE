#ifndef PROGRAMRUN_H
#define PROGRAMRUN_H

#include <QObject>
#include "gparser.h"
#include "QList"
#include "QString"
#include "QByteArray"
#include "QDebug"
//#include <QMetaType>

//Q_DECLARE_METATYPE(QList<paramPoint>)

class ProgramRun : public QObject
{
    Q_OBJECT
public:
    explicit ProgramRun(QObject *parent = 0);
    ~ProgramRun();

    int step = 0;
    bool play = true;
    bool continueMove = true;

protected:
   QList<paramPoint> posList;
signals:
    NextMove();
    StopMove();
    Move(QByteArray move);
    FinishMove();
    MovePrint(QString cmd);
public slots:
    void GetList(const QList<paramPoint> &pos);
    void setStep(int step);
    void nextStep();
    void prevStep();
    void PlayMove();
    void StopProgram();
    void StartProgram(const QList<paramPoint> &posList);

private:
    QByteArray SendMove(paramPoint data);
};

#endif // PROGRAMRUN_H
