#ifndef DIRCTMESSAGECLASS_H
#define DIRCTMESSAGECLASS_H

#include<QString>
using namespace std;
#include "contentclass.h"

class dirctmessageclass : public contentclass
{
public:
    dirctmessageclass();
    QString To_who;
};

#endif // DIRCTMESSAGECLASS_H
