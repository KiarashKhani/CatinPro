#include<QString>
using namespace std;
#include "addpost.h"
#include "page2.h"
#include "home.h"
#include "ui_addpost.h"
#include<QMessageBox>
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "postclass.h"

extern QString l1;

addpost::addpost(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addpost)
{
    ui->setupUi(this);
    ui->label->setText(l1);
    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\catin.db");
    database.open();
}

addpost::~addpost()
{
    delete ui;
}

void addpost::on_pushButton_clicked()
{
    QSqlQuery q;
    postclass p;
    p.sender_ID=l1;
    p.Content_text=ui->lineEdit->text();
    QString c= p.Content_text;
    q.exec("INSERT INTO post(username,caption,time1)VALUES('"+l1+"', '"+c+"', datetime('now'))");
    home *w8 = new home;
    w8->show();
}

