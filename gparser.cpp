#include "gparser.h"
#include "qdebug.h"
#include <QFile>
#include <QTextStream>
#include "port.h"
#include "QStringList"
#include "QString"


GParser::GParser(QObject *parent) : QObject(parent)
{
}

void GParser::Debug(QString &text)
{
    char* ch = text.toLatin1().data();
    if(ch[0] == '(')
    {
        qDebug() << "This comment";
        return;
    }

    QStringList list = text.split(" ");
    //qDebug() << list;
   paramPoint point =  ParseParam(list);
    qDebug() << "X: " << point.x << "Y: " << point.y << "Z: " << point.z;
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
    qDebug() << "clear: " <<posList.length();
}


void GParser::ParsingFile(QStringList data)
{
    ClearList();
    int sizeLine = data.length();
    for(int i = 0; i < sizeLine; i ++)
    {
        //if comment
        if(data.at(i).startsWith("("))
        {
            k++;
            continue;
        }
       QStringList splitLine = data.at(i).split(" ");
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

       posList.append(currentPoint);
     }

k = 0;
qDebug() << "list size" << posList.length();
}

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

void GParser::SetList()
{
   qDebug() << "setList";
   if(posList.length() != 0)
   emit filePos(posList);
}
