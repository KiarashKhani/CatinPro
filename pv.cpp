#include<QString>
#include "dirctmessageclass.h"
using namespace std;
#include "pv.h"
#include "messagingpage.h"
#include "ui_pv.h"
#include "page2.h"
#include "messagingpage.h"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

extern QString towho;
extern QString l1;
extern int mID;

pv::pv(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pv)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\catin.db");
    database.open();
    ui->label_2->setText(towho);

}

pv::~pv()
{
    delete ui;
}

void pv::on_pushButton_clicked()
{
    QSqlQuery q;
    //int c=mID;
    QString txt=ui->lineEdit->text();
    //q.exec("INSERT INTO pv(messageid1,username,mtext,time1)VALUES('"+c+"', '"+l1+"', '"+txt+"', datetime('now'))");

}

