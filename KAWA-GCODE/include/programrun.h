#ifndef PROGRAMRUN_H
#define PROGRAMRUN_H

#include <QObject>
#include "gparser.h"
#include "QList"
#include "QString"
#include "QByteArray"
#include "QDebug"
#include <QFile>
#include <QFileDialog>

//Q_DECLARE_METATYPE(QList<paramPoint>)

class ProgramRun : public QObject
{
    Q_OBJECT
public:
    explicit ProgramRun(QObject *parent = 0);
    ~ProgramRun();

    enum setOriginStep {reset, here_pose, enter_pos1,enter_pos2, set_base, change_base, enter_base1,enter_base2,enter_pos3};
    int step = 0;     //spets cmd
    int stepMax = 0;

    //flags
    bool play = true;
    bool continueMove = true;
    bool response = true;
    bool pause = false;

protected:
   QList<paramPoint> posList;

signals:
    NextMove();
    StopMove();
    Move(QByteArray move);
    FinishMove();
    MovePrint(QString cmd);
    getStep(int step);

public slots:
    void setStep(int step);
    void nextStep();
    void prevStep();
    void PlayMove();
    void PauseProgram();
    void StopProgram();
    void StartProgram(const QList<paramPoint> &posList);
    void SetOrigin();
    void setResporse();
    void LengtCmd(int i);
    void WriteToFile(const QList<paramPoint> &posList, QString path);
private:
    QByteArray GetLMove(paramPoint data,bool realTime);
    QByteArray GetJMove(paramPoint targetData,paramPoint prevData,bool realTime,int num);
    paramPoint GetC1MovePoint(paramPoint targetData,paramPoint prevData);
};

#endif // PROGRAMRUN_H
