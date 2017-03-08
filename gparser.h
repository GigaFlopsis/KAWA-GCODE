#ifndef GPARSER_H
#define GPARSER_H
#include "QString"



struct paramPoint{
    paramPoint():
    x(99999), y(99999), z(99999),speed(99999), g(99999), i(99999), j(99999)
    {}
    double x;
    double y;
    double z;
    int speed;
    int g;
    double i;
    double j;
};



class GParser
{
public:
    GParser();
    void Debug(QString &arg1);
    paramPoint ParseParam(QStringList list);
private:

};




#endif // GPARSER_H
