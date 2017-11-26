#include "include/programrun.h"

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
    getStep(step+1);
}

void ProgramRun::LengtCmd(int i)
{
    stepMax = i;
    step = 0;
    getStep(0+1);
}

void ProgramRun::nextStep()
{
    step++;
    if(step >= stepMax)
    {
        play = false;
        step = stepMax;
    }
    getStep(step+1);

}
void ProgramRun::prevStep()
{
    step--;
    if(step < 0)
        step = 0;
    getStep(step+1);
}
void ProgramRun::PlayMove()
{
    continueMove = true;
    pause = false;
}
void ProgramRun::PauseProgram()
{
    pause = true;
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
        if(continueMove && !pause)
        {
            if(posList.isEmpty())
            {
                qDebug() << "Empty list";
                play = false;
                break;
            }
            continueMove = false;

            // get linear mboe
            if(posList.at(step).g <= 1){
                QByteArray cmd = GetLMove(posList.at(step),true);
                emit Move(cmd);
                emit MovePrint(cmd);
            }
            //get circular move
            if(posList.at(step).g == 2 || posList.at(step).g == 3){
                if(step > 0)
                {
                    QByteArray cmd = GetLMove(posList.at(step),true);
                    emit Move(cmd);
                    emit MovePrint(cmd);
                }
            }
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
QByteArray ProgramRun::GetLMove(paramPoint data, bool realTime)
{
    QString cmd;
    if(realTime)
    {
        cmd = "DO ";
    }
    else {
        cmd = "";
    }
    cmd += "LMOVE SHIFT(a BY ";
    cmd += QString::number(data.x,'f',3) + ",";
    cmd += QString::number(data.y,'f',3) + ",";
    cmd += QString::number(data.z,'f',3) + ")";
    return cmd.toLocal8Bit();

        if(data.g == 2 || data.g == 3) //join move
        {
            QString cmd;
            if(realTime)
            {
                cmd = "DO ";
            }
            else {
                cmd = "";
            }
            cmd += "JMOVE SHIFT(a BY ";
            cmd += QString::number(data.x,'f',3) + ",";
            cmd += QString::number(data.y,'f',3) + ",";
            cmd += QString::number(data.z,'f',3) + ")";
            return cmd.toLocal8Bit();
        }
}

//C1MOVE and C2MOVE
QByteArray ProgramRun::GetJMove(paramPoint targetData,paramPoint prevData,bool realTime,int num = 0)
{

    QString cmd = "";
    //get C1MOVE
    if(num < 1) //join move
    {
        if(realTime)
        {
            cmd = "DO ";
        }
        if(!realTime) {
            cmd = "";
        }
        paramPoint newPoint = GetC1MovePoint(targetData,prevData);
        cmd += "C1MOVE SHIFT(a BY ";
        cmd += QString::number(newPoint.x,'f',3) + ",";
        cmd += QString::number(newPoint.y,'f',3) + ",";
        cmd += QString::number(newPoint.z,'f',3) + ")";
    }
    //get C2MOVE
    if(num >= 1) //join move
    {
        if(realTime)
        {
            cmd = "DO ";
        }
        if(!realTime) {
            cmd = "";
        }
        cmd += "C2MOVE SHIFT(a BY ";
        cmd += QString::number(targetData.x,'f',3) + ",";
        cmd += QString::number(targetData.y,'f',3) + ",";
        cmd += QString::number(targetData.z,'f',3) + ")";
    }
    return cmd.toLocal8Bit();
}

paramPoint ProgramRun::GetC1MovePoint(paramPoint targetData,paramPoint prevData)
{
    long double r = 0;
    long double cx, cy, chord, sagmin, sagmaj, midx, midy, dx, dy, ax, ay;

    //get cocordinates of arc centre

    cx = prevData.x + targetData.i;
    cy = prevData.y + targetData.j;

    //get radius
    r = sqrt(pow(targetData.i,2)+pow(targetData.j,2));

    //get chord length
    chord = sqrt((pow(targetData.x - prevData.x,2))+(pow(targetData.y - prevData.y,2)));

    //get sagitta minor
    sagmin = r - (sqrt((pow(r,2)-(pow(chord/2,2)))));

    //get sagitta major
    sagmaj = r - sagmin;

    //get mid point of chord x
    midx = (targetData.x + prevData.x)/2;

    //get mid point of chord y
    midy = (targetData.y + prevData.y)/2;

    //get sagitta major ratio to x
    dx = (cx - midx)/sagmaj;

    //get sagitta major ratio to y
    dy = (cy - midy)/sagmaj;


    //get arc midpoint x ax
    if((targetData.x > prevData.x)&& (targetData.y > prevData.y ))
        ax = midx + (abs(sagmin * dx));
    if((targetData.x < prevData.x)&& (targetData.y > prevData.y ))
        ax = midx + (abs(sagmin *dx));
    if((targetData.x < prevData.x)&& (targetData.y < prevData.y ))
        ax = midx - (abs(sagmin *dx));
    if((targetData.x > prevData.x)&& (targetData.y < prevData.y ))
        ax = midx - (abs(sagmin *dx));

    //get arc midpoint y ay
    if((targetData.y > prevData.y)&& (targetData.x > prevData.x))
        ay = midy - (abs(sagmin * dy));
    if((targetData.y > prevData.y)&& (targetData.x < prevData.x))
        ay = midy + (abs(sagmin * dy));
    if((targetData.y < prevData.y)&& (targetData.x < prevData.x))
        ay = midy + (abs(sagmin * dy));
    if((targetData.y < prevData.y)&& (targetData.x > prevData.x))
        ay = midy - (abs(sagmin * dy));

    //get x and y lying on the arc
    targetData.x = ax;
    targetData.y = ay;

    return targetData;
}


void ProgramRun::WriteToFile(const QList<paramPoint> &posList)
{
    qDebug() << "create file" << endl;
    play = true;
    QFile f("move.as");
    if (f.open(QIODevice::WriteOnly)) {
        f.write(".PROGRAM move()\n");
        while(play)
        {
            if(posList.isEmpty())
            {
                qDebug() << "Empty list";
                play = false;
                break;
            }

            if(posList.at(step).g <= 1){            //GET G1
                QByteArray cmd = GetLMove(posList.at(step),false);
                f.write(cmd + "\n");
            }
            if(posList.at(step).g >= 2){            //get G2
                if(posList.at(step).g == 2 || posList.at(step).g == 3){
                    if(step > 0)
                    {
                        QByteArray cmd = GetJMove(posList.at(step),posList.at(step-1),false,0);
                        f.write(cmd + "\n");
                        cmd = GetJMove(posList.at(step),posList.at(step-1),false,1);
                        f.write(cmd + "\n");
                    }
                }
            }
            nextStep();
        }
        f.write(".END");
        f.close();
        emit FinishMove();
    }
    qDebug() << "FinishMove";
}
