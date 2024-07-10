#include<QString>
using namespace std;
#include "page2.h"
#include "ui_page2.h"
#include<QLineEdit>
#include "captchacheck.h"
#include "home.h"
#include<QMessageBox>
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

QString l1;
QString l2;

page2::page2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page2)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\catin.db");
    database.open();
}

page2::~page2()
{
    delete ui;
}

void page2::on_checkBox_clicked(bool checked)
{
    if(checked==false)
    {
        ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
        ui->checkBox->setText("Hide");

    }
    if(checked== true)
    {
        ui->lineEdit_2->setEchoMode(QLineEdit::Password);
        ui->checkBox->setText("Show");

    }
}


void page2::on_pushButton_clicked()
{
    l1= ui->lineEdit->text();
    l2= ui->lineEdit_2->text();
    QSqlQuery q;
    QSqlQuery q2;
    QString u;
    QString p;
    q.exec("SELECT password FROM person WHERE username='"+l1+"'");
    if(q.first()){
       p = q.value("password").toString();
    }
    q2.exec("SELECT username FROM person WHERE username='"+l1+"'");
    if(q.first()){
       u = q.value("username").toString();
    }
    if(p==ui->lineEdit_2->text()&&p!=""){
        home *w7 = new home;
        w7->show();
    }
    else if(p!=ui->lineEdit_2->text()&&u==ui->lineEdit->text()){
        QMessageBox::warning(this,"Meooooow!!!!!","Your Username is already exist or your Password is incorrect meow!!","OK & try again meow!");
    }
    else if(ui->lineEdit->text()=="" || ui->lineEdit_2->text()==""){
        QMessageBox::warning(this,"Meooooow!!!!!","Your Username or Password is empty meow!!","OK & try again meow!");
    }
   else if(ui->lineEdit->text()!="" && ui->lineEdit_2->text()!=""&&u==""){
       captchacheck *w3 = new captchacheck;
       w3->show();
   }
}

