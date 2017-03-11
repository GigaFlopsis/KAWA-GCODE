#ifndef PROGRAMRUN_H
#define PROGRAMRUN_H

#include <QObject>
#include "gparser.h"
#include "QList"
#include "QString"
#include "QByteArray"
#include "QDebug"

class ProgramRun : public QObject
{
    Q_OBJECT
public:
    explicit ProgramRun(QObject *parent = 0);
    ~ProgramRun();

    int step = 0;
    bool play = true;
    bool continueMove = true;
signals:
    NextMove();
    StopMove();
    Move(QByteArray move);
    FinishMove();
public slots:
    void SetProgram(const QList<paramPoint> &pos);
    void setStep(int step);
    void nextStep();
    void prevStep();
    void PlayMove(bool state);
    void StopProgram();
    void StartProgram();

private:
    QByteArray SendMove(paramPoint data);
};

#endif // PROGRAMRUN_H
