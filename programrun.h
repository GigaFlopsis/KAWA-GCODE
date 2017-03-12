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

    enum setOriginStep {reset, here_pose, enter_pos1,enter_pos2, set_base, change_base, enter_base1,enter_base2};
    int step = 0;
    int stepMax = 0;
    bool play = true;
    bool continueMove = true;
    bool response = true;

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

private:
    QByteArray SendMove(paramPoint data);


};

#endif // PROGRAMRUN_H
