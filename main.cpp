#include "mainwindow.h"

#include <QApplication>

extern QString l1;
extern QString l2;
extern QString l3;
extern QString l4;
extern QString l5;
extern QString l6;
extern QString l7;
extern QString l8;
extern QString l9;
extern QString searcheduser;
extern QString towho;
extern int mID;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
