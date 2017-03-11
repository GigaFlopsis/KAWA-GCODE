#include "programrun.h"

ProgramRun::ProgramRun(QObject *parent) : QObject(parent)
{

}
ProgramRun::~ProgramRun()
{
    emit StopMove();
}

//run movement
void ProgramRun::SetProgram(const QList<paramPoint> &pos)
{
    if(play)
    {
      //wait until the response
      if(continueMove)
      {
      continueMove = false;
      nextStep();
      emit Move(SendMove(pos.at(step)));
      qDebug() << "Set Move" << pos.at(step).x;
      }
    }
    emit FinishMove();
}


void ProgramRun::setStep(int num)
{
step = num;
}

void ProgramRun::nextStep()
{
step++;
}

void ProgramRun::prevStep()
{
step--;
}

void ProgramRun::PlayMove(bool state)
{
continueMove = state;
}
void ProgramRun::StopProgram()
{
play = false;
}
void ProgramRun::StartProgram()
{
play = true;
}

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
    if(data.g == 2 || data.g == 3) //line move
    {
        QString cmd;
        cmd = "DO JMOVE SHIFT(a BY ";
        cmd += QString::number(data.x,'f',3) + ",";
        cmd += QString::number(data.y,'f',3) + ",";
        cmd += QString::number(data.z,'f',3) + ")";
        return cmd.toLocal8Bit();
    }
}
