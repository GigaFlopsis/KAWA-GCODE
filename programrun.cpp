#include "programrun.h"

ProgramRun::ProgramRun(QObject *parent) : QObject(parent)
{
    qDebug() << "Start ProgramRun";
}
ProgramRun::~ProgramRun()
{
    qDebug() << "Stop ProgramRun";
}

int step = 0;
//get list
void ProgramRun::GetList(const QList<paramPoint> &pos)
{
 //   posList = pos;
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

void ProgramRun::PlayMove()
{
    continueMove = true;
}

void ProgramRun::StopProgram()
{
    play = false;
}
void ProgramRun::StartProgram(const QList<paramPoint> &posList)
{
    qDebug() << "Program run" << posList.length() << "step: " << step;
    play = true;
    continueMove = true;
    while(play)
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
            qDebug() << "Program run" << posList.length() << "step: " << step;
            qDebug() << "Set Move" << posList.at(step).x;
            continueMove = false;

            emit Move(SendMove(posList.at(step)));
            nextStep();
        }
    }
    qDebug() << "FinishMove";
    emit FinishMove();
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
