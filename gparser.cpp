/****
 * 07.03.2017 by Devitt Dmitry
 * 0    1   2     3       4     5   6
 * x    Y   z   F(sped)    G    I   J
 *
 *
 *
 * */
#include "gparser.h"
#include "qdebug.h"

GParser::GParser()
{

}

QStringList list;

double* param = new double[4];

struct paramPoint{
    double x;
    double y;
    double z;
    int speed;
    int g;
    double i;
    double j;
};

void GParser::Debug(QString &text)
{
    char* ch = text.toLatin1().data();
    if(ch[0] == '(')
    {
        qDebug() << "This comment";
        return;
    }

    list = text.split(" ");
    //qDebug() << list;
   paramPoint point =  ParseParam(list);//, &param);
qDebug() << "X: " << point.x << "Y: " << point.y << "Z: " << point.z;
}

paramPoint GParser::ParseParam(QStringList line) //,double &param)
{
    paramPoint point;
    for(int i=0;i < line.size();i++) {
    if(line[i].startsWith('X'))
      {
        point.x = line[i].split('X')[1].toDouble();
        qDebug() << "X cmd:" << point.x;

      }
    if(line[i].startsWith('Y'))
      {
        point.y = line[i].split('Y')[1].toDouble();
        qDebug() << "Y cmd:" << point.y;
      }
    if(line[i].startsWith('Z'))
      {
        point.z = line[i].split('Z')[1].toDouble();
        qDebug() << "Z cmd:" << point.z;
      }
    if(line[i].startsWith('G'))
      {
        point.g = line[i].split('G')[1].toInt();
        qDebug() << "G cmd:" << point.g;
      }
    if(line[i].startsWith('F'))
      {
        point.speed = line[i].split('F')[1].toInt();
        qDebug() << "F cmd:" << point.speed;
      }
    if(line[i].startsWith('I'))
      {
        point.i = line[i].split('I')[1].toDouble();
        qDebug() << "I cmd:" << point.i;
      }
    if(line[i].startsWith('J'))
      {
        point.j = line[i].split('J')[1].toDouble();
        qDebug() << "J cmd:" << point.j;
      }
    }
    return point;

}
