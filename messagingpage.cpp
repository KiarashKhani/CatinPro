#include<QString>
#include "dirctmessageclass.h"
using namespace std;
#include "page2.h"
#include "messagingpage.h"
#include "home.h"
#include "mynetworkpage.h"
#include "jobspage.h"
#include "mepage.h"
#include "pv.h"
#include "ui_messagingpage.h"
#include<QMessageBox>
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

extern QString l1;
QString towho;
int mID=0;

messagingpage::messagingpage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::messagingpage)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\catin.db");
    database.open();
    dirctmessageclass d;
    d.sender_ID=l1;
    d.To_who=ui->lineEdit_2->text();
    QSqlQuery q1;
    q1.exec("SELECT towho,messageid FROM directmessage WHERE username='"+l1+"'");
}

messagingpage::~messagingpage()
{
    delete ui;
}

void messagingpage::on_pushButton_clicked()
{
    QSqlQuery q1;
    towho=ui->lineEdit_2->text();
    QString a;
    int c=1;
    q1.exec("SELECT username FROM person WHERE username='"+towho+"'");
    if(q1.first()){
        a = q1.value("username").toString();
    }

    if(a==towho){
        QSqlQuery q;
        q.exec("SELECT messageid FROM directmessage");
        while(q.next())
        {
            c++;
            c=c/2;
        }
        q.exec("INSERT INTO directmessage(username,towho,messageid)VALUES('"+l1+"', '"+towho+"', '"+c+"')");
        q.exec("INSERT INTO directmessage(username,towho,messageid)VALUES('"+towho+"', '"+l1+"', '"+c+"')");

    }
    else if(ui->lineEdit_2->text()==""||a!=towho)
        QMessageBox::warning(this,"Meooooow!!!!!","This Username is not exist meow!!","OK & try again meow!");
}


void messagingpage::on_pushButton_2_clicked()
{
    mID=ui->lineEdit_3->text().toInt();
    pv *w8 = new pv;
    w8->show();
}


void messagingpage::on_home_pushButton_clicked()
{
    home *w8 = new home;
    w8->show();
}


void messagingpage::on_myn_pushButton_clicked()
{
    mynetworkpage *w8 = new mynetworkpage;
    w8->show();
}


void messagingpage::on_jobs_pushButton_clicked()
{
    jobspage *w8 = new jobspage;
    w8->show();
}


void messagingpage::on_me_pushButton_clicked()
{
    mepage *w8 = new mepage;
    w8->show();
}

