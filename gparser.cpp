#include "gparser.h"
#include "qdebug.h"
#include <QFile>
#include <QTextStream>
#include "port.h"
#include "QStringList"
#include <QList>


GParser::GParser(QObject *parent) : QObject(parent)
{
}



//parsing line of file to paramPoint
paramPoint GParser::ParseParam(QStringList line)
{
    paramPoint point;
    for(int i=0;i < line.size();i++) {
        if(line[i].startsWith('X'))
        {
            point.x = line[i].split('X')[1].toDouble();
        }
        if(line[i].startsWith('Y'))
        {
            point.y = line[i].split('Y')[1].toDouble();
        }
        if(line[i].startsWith('Z'))
        {
            point.z = line[i].split('Z')[1].toDouble();
        }
        if(line[i].startsWith('G'))
        {
            point.g = line[i].split('G')[1].toInt();
        }
        if(line[i].startsWith('F'))
        {
            point.speed = line[i].split('F')[1].toInt();
        }
        if(line[i].startsWith('I'))
        {
            point.i = line[i].split('I')[1].toDouble();
        }
        if(line[i].startsWith('J'))
        {
            point.j = line[i].split('J')[1].toDouble();
        }
    }
    return point;
}

void GParser::ParseCmd(const QString &arg1)
{
    qDebug() << "Start ParseCmd";
    //move complite
    if(arg1.startsWith("DO motion completed."))
    {
        qDebug() << "move complite!";
        emit cmdComplite();
    }
    //
    if(arg1.startsWith("("))
    {
        qDebug() << "comment";
        emit cmdComment();
    }
    if(arg1.contains("error"))
    {
        qDebug() << "ERROR";
        emit cmdError();
    }
}

//clear list pos
void GParser::ClearList()
{
    posList.clear();
}


void GParser::ParsingFile(QStringList dataLine)
{
    ClearList();

    int sizeLine = dataLine.length();
    QString data;
    for(int i = 0; i < sizeLine; i ++)
    {
        data = dataLine.at(i);
        //if comments
        if(data.startsWith("(") ||
                data.startsWith("M") ||
                data.startsWith("%") ||
                (data.length() < 2))
        {
            k++;
            qDebug() << "continue" << endl;
            continue;
        }
        QStringList splitLine = dataLine.at(i).split(" ");
        paramPoint currentPoint =  ParseParam(splitLine);
        if(i-k == 0)
        {
            paramPoint zeroPos;
            zeroPos.g = 0;
            zeroPos.i = 0;
            zeroPos.j = 0;
            zeroPos.speed = 0;
            zeroPos.x = 0;
            zeroPos.y = 0;
            zeroPos.z = 0;
            ChangeEmpyParam(currentPoint, zeroPos);
        }
        else
        {
            ChangeEmpyParam(currentPoint, posList.at(i-k-1));
        }

        // cout in command window
        QString cmd = QString::number(posList.length())+": ";
                cmd += "     G:" + QString::number(currentPoint.g,'d');
                cmd += "    X:" + QString::number(currentPoint.x,'f',3);
                cmd += "    Y:" + QString::number(currentPoint.y,'f',3);
                cmd += "    Z:" + QString::number(currentPoint.z,'f',3);
                cmd += "    J:" + QString::number(currentPoint.j,'f',3);
                cmd += "    I:" + QString::number(currentPoint.i,'f',3);
        emit CoutList(cmd);
        posList.append(currentPoint);
    }
    k = 0;
    //cout lenght
    emit fileLengt(posList.length());
}

// changing empty pram to prev param
void GParser::ChangeEmpyParam(paramPoint &targerPos,paramPoint prevPos)
{
    if(targerPos.x == 99999)
        targerPos.x = prevPos.x;
    if(targerPos.y == 99999)
        targerPos.y = prevPos.y;
    if(targerPos.z == 99999)
        targerPos.z = prevPos.z;
    if(targerPos.speed == 99999)
        targerPos.speed = prevPos.speed;
    if(targerPos.g == 99999)
        targerPos.g = prevPos.g;
    if(targerPos.i == 99999)
        targerPos.i = prevPos.i;
    if(targerPos.j == 99999)
        targerPos.j = prevPos.j;
}

//moved list pos
void GParser::SetList()
{
    if(posList.length() != 0)
    {
        qDebug() << "send list\n";
        emit filePos(posList);
    }
    else
    {
        qDebug() << "zero cmd";
    }
}

void GParser::SetListforFile()
{
    if(posList.length() != 0)
    {
        qDebug() << "send list\n";
        emit filePosforLoad(posList);
    }
    else
    {
        qDebug() << "zero cmd";
    }
}
