#ifndef POSTCLASS_H
#define POSTCLASS_H

#include<QString>
using namespace std;
#include "contentclass.h"

class postclass : public contentclass
{
public:
    postclass();
    int Repost_counter;
    int Likes;
    QString Comment_text;
};

#endif // POSTCLASS_H
