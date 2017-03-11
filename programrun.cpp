#include "programrun.h"

ProgramRun::ProgramRun(QObject *parent) : QObject(parent)
{
    qDebug() << "Start ProgramRun";
}
ProgramRun::~ProgramRun()
{
    qDebug() << "Stop ProgramRun";
}

void ProgramRun::setStep(int num)
{
    step = num;
    getStep(step);
}
void ProgramRun::nextStep()
{
    step++;
    getStep(step);
}
void ProgramRun::prevStep()
{
    step--;
    getStep(step);
}
void ProgramRun::PlayMove()
{
    continueMove = true;
}
void ProgramRun::PauseProgram()
{
    continueMove = false;
}
void ProgramRun::StopProgram()
{
    step = 0;
    play = false;
}

//start movement
void ProgramRun::StartProgram(const QList<paramPoint> &posList)
{
    play = true;
    continueMove = true;
    while(play && step <= posList.length())
    {
        //wait until the response
        if(continueMove)
        {
            if(posList.isEmpty() || step > posList.length())
            {
               qDebug() << "Empty list";
               play = false;
               break;
            }
            continueMove = false;
            QByteArray cmd = SendMove(posList.at(step));
            emit Move(cmd);
            emit MovePrint(cmd);
            nextStep();
        }
    }
    qDebug() << "FinishMove";
    emit FinishMove();
}

//parsing cmd to port
QByteArray ProgramRun::SendMove(paramPoint data)
{
    if(data.g == 0 || data.g == 1) //line move
    {
        QString cmd;
        cmd = "DO LMOVE SHIFT(a BY ";
        cmd += QString::number(data.x,'f',3) + ",";
        cmd += QString::number(data.y,'f',3) + ",";
        cmd += QString::number(data.z,'f',3) + ")";
        return cmd.toLocal8Bit();
    }
    if(data.g == 2 || data.g == 3) //join move
    {
        QString cmd;
        cmd = "DO JMOVE SHIFT(a BY ";
        cmd += QString::number(data.x,'f',3) + ",";
        cmd += QString::number(data.y,'f',3) + ",";
        cmd += QString::number(data.z,'f',3) + ")";
        return cmd.toLocal8Bit();
    }
}
