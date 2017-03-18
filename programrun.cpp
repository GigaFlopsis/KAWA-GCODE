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

void ProgramRun::LengtCmd(int i)
{
    stepMax = i;
    step = 0;
    getStep(0);
}

void ProgramRun::nextStep()
{
    step++;
    if(step > stepMax)
    {
        play = false;
        step = stepMax;
    }
    getStep(step);
}
void ProgramRun::prevStep()
{
    step--;
    if(step < 0)
        step = 0;
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
    getStep(step);
}

//start movement
void ProgramRun::StartProgram(const QList<paramPoint> &posList)
{
    play = true;
    continueMove = true;
    while(play)
    {
        //wait until the response
        if(continueMove)
        {
            if(posList.isEmpty())
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

void ProgramRun::setResporse()
{
   response = true;
}

//set origin pos
void ProgramRun::SetOrigin()
{
  bool exit = false;
  setOriginStep stage = setOriginStep::reset;
  QString cmd = "";
  emit MovePrint("Set origin init:");
  while(!exit)
  {
    if(response){
      switch (stage) {
      case  setOriginStep::reset:
          cmd ="reset";
          response = false;
          emit Move(cmd.toLocal8Bit());
          emit MovePrint(cmd);
          stage = setOriginStep::here_pose;
          break;
      case  setOriginStep::here_pose:
          cmd ="here a";
          response = false;
          emit Move(cmd.toLocal8Bit());
          emit MovePrint(cmd);
         stage = setOriginStep::enter_pos1;
          break;
      case  setOriginStep::enter_pos1:
          cmd =",,,0,0,0";
          response = false;
          emit Move(cmd.toLocal8Bit());
          emit MovePrint(cmd);
          stage = setOriginStep::enter_pos2;
          break;
      case  setOriginStep::enter_pos2:
          cmd ="";
          response = false;
          emit Move(cmd.toLocal8Bit());
          emit MovePrint(cmd);
          stage = setOriginStep::set_base;
          break;
      case  setOriginStep::set_base:
          cmd ="base a";
          response = false;
          emit Move(cmd.toLocal8Bit());
          emit MovePrint(cmd);
          stage = setOriginStep::enter_base1;
          break;
      case  setOriginStep::enter_base1:
          cmd ="";
          response = false;
          emit Move(cmd.toLocal8Bit());
          emit MovePrint(cmd);
          stage = setOriginStep::enter_base2;
          break;
      case  setOriginStep::enter_base2:
          cmd ="here a";
          response = false;
          emit Move(cmd.toLocal8Bit());
          emit MovePrint(cmd);
          stage = setOriginStep::enter_pos3;
          break;
      case  setOriginStep::enter_pos3:
          cmd ="";
          exit = true;
          emit Move(cmd.toLocal8Bit());
          emit MovePrint(cmd);
          emit MovePrint("Set origin complited");
          break;
      }
    }
  }
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
