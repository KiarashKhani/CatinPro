#include "personalinfo.h"
#include "home.h"
#include "page2.h"
#include "accountclass.h"
#include "ui_personalinfo.h"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

extern QString l1;
extern QString l2;
QString l3;
QString l4;
QString l5;
QString l6;
QString l7;
QString l8;
QString l9;

personalinfo::personalinfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::personalinfo)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\catin.db");
    database.open();
}

personalinfo::~personalinfo()
{
    delete ui;
}

void personalinfo::on_pushButton_clicked()
{
    accountclass A;
    A.Account_ID=l1;
     l3= ui->lineEdit->text();
     l4= ui->lineEdit_2->text();
     l5= ui->lineEdit_3->text();
     l6= ui->lineEdit_4->text();
     l7= ui->lineEdit_5->text();
     l8= ui->lineEdit_6->text();
     l9= ui->lineEdit_7->text();
    A.Name=l6;
    A.Lname=l7;
    A.Abilities=l8;
    QSqlQuery q;
    q.exec("INSERT INTO person(username,password,intentedjob,intentedcompany,uni,name,lastname,abilites,bio)VALUES('"+l1+"', '"+l2+"', '"+l3+"', '"+l4+"', '"+l5+"', '"+l6+"', '"+l7+"', '"+l8+"', '"+l9+"')");
    home *w6 = new home;
    w6->show();
}

