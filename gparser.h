#ifndef GPARSER_H
#define GPARSER_H
#include "QString"

class GParser
{
public:
    GParser();
    static void Debug(QString &arg1);
    struct paramPoint;
    paramPoint ParseParam(QStringList list);

private:

};




#endif // GPARSER_H
