#include<QString>
using namespace std;
#include "page2.h"
#include "personalinfo.h"
#include "mepage.h"
#include "home.h"
#include "ui_mepage.h"
#include<QMessageBox>
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"


extern QString l1;
extern QString l4;
extern QString l5;
extern QString l6;
extern QString l7;
extern QString l8;
extern QString l9;
extern QString searcheduser;


mepage::mepage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mepage)
{
    ui->setupUi(this);

    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\catin.db");
    database.open();
    if(searcheduser!=l1 && searcheduser!="u")
    {
        QSqlQuery q1;
        QSqlQuery q2;
        QSqlQuery q3;
        QSqlQuery q4;
        QSqlQuery q5;
        QSqlQuery q6;
        QString a1;
        QString a2;
        QString a3;
        QString a4;
        QString a5;
        QString a6;

        q1.exec("SELECT name FROM person WHERE username='"+searcheduser+"'");
        if(q1.first()){
           a1 = q1.value("name").toString();
        }
        q2.exec("SELECT lastname FROM person WHERE username='"+searcheduser+"'");
        if(q2.first()){
           a2 = q2.value("lastname").toString();
        }
        q3.exec("SELECT abilites FROM person WHERE username='"+searcheduser+"'");
        if(q3.first()){
           a3 = q3.value("abilites").toString();
        }
        q4.exec("SELECT bio FROM person WHERE username='"+searcheduser+"'");
        if(q4.first()){
           a4 = q4.value("bio").toString();
        }
        q5.exec("SELECT username FROM connections WHERE username='"+l1+"'");
        if(q5.first()){
           a5 = q5.value("username").toString();
        }
        q6.exec("SELECT username2 FROM connections WHERE username2='"+searcheduser+"'");
        if(q6.first()){
           a6 = q6.value("username2").toString();
        }
        if(a5==l1&&a6==searcheduser){
            ui->pushButton_2->hide();
        }
        else
            ui->pushButton_3->hide();

        ui->label_2->setText(searcheduser);
        ui->lineEdit->setText(a1);
        ui->lineEdit_2->setText(a2);
        ui->lineEdit_3->setText(a3);
        ui->lineEdit_4->setText(a4);
        ui->lineEdit_5->hide();
        ui->pushButton->hide();
    }
    else{
    QSqlQuery q1;
    QSqlQuery q2;
    QSqlQuery q3;
    QSqlQuery q4;
    QString a=l1;
    QString a1;
    QString a2;
    QString a3;
    QString a4;

    q1.exec("SELECT name FROM person WHERE username='"+a+"'");
    if(q1.first()){
       a1 = q1.value("name").toString();
    }
    q2.exec("SELECT lastname FROM person WHERE username='"+a+"'");
    if(q2.first()){
       a2 = q2.value("lastname").toString();
    }
    q3.exec("SELECT abilites FROM person WHERE username='"+a+"'");
    if(q3.first()){
       a3 = q3.value("abilites").toString();
    }
    q4.exec("SELECT bio FROM person WHERE username='"+a+"'");
    if(q4.first()){
       a4 = q4.value("bio").toString();
    }

    ui->label_2->setText(l1);
    ui->lineEdit->setText(a1);
    ui->lineEdit_2->setText(a2);
    ui->lineEdit_3->setText(a3);
    ui->lineEdit_4->setText(a4);
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    }
}

mepage::~mepage()
{
    delete ui;
}

void mepage::on_pushButton_clicked()
{
    l9=ui->lineEdit_5->text();
    ui->lineEdit_4->setText(l9);
    QSqlQuery q;
    q.exec("UPDATE person SET bio='"+l9+"' WHERE username='"+l1+"'");

}


void mepage::on_pushButton_2_clicked()
{
    QSqlQuery q;
    q.exec("INSERT INTO connections(username,username2,isfollow)VALUES('"+l1+"', '"+searcheduser+"', '1')");
}

