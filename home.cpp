#include<QString>
using namespace std;
#include "home.h"
#include "addpost.h"
#include "ui_home.h"
#include "mepage.h"
#include "mynetworkpage.h"
#include "messagingpage.h"
#include "jobspage.h"
#include<QMessageBox>
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

QString searcheduser;

home::home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\catin.db");
    database.open();
    searcheduser="u";
    QSqlQuery q;
    q.exec("SELECT * FROM post ORDER BY time1 DESC");
    QSqlQueryModel *m= new QSqlQueryModel;
    m->setQuery(q);
    ui->tableView->setModel(m);

}

home::~home()
{
    delete ui;
}

void home::on_addpost_pushButton_clicked()
{
    addpost *w8 = new addpost;
    w8->show();
}


void home::on_me_pushButton_clicked()
{
    mepage *w8 = new mepage;
    w8->show();
}


void home::on_go_pushButton_clicked()
{
    searcheduser=ui->lineEdit->text();
    QSqlQuery q1;
    QString a1;
    q1.exec("SELECT username FROM person WHERE username='"+searcheduser+"'");
    if(q1.first()){
       a1 = q1.value("username").toString();
    }
    if(a1==searcheduser){
        mepage *w8 = new mepage;
        w8->show();
    }
    else if(ui->lineEdit->text()==""){
        QMessageBox::warning(this,"Meooooow!!!!!","Your search text is empty meow!!","OK & try again meow!");
    }
    else
        QMessageBox::warning(this,"Meooooow!!!!!","This Username is not exist meow!!","OK & try again meow!");
}


void home::on_myn_pushButton_clicked()
{
    mynetworkpage *w8 = new mynetworkpage;
    w8->show();
}


void home::on_mess_pushButton_clicked()
{
    messagingpage *w8 = new messagingpage;
    w8->show();
}


void home::on_jobs_pushButton_clicked()
{
    jobspage *w8 = new jobspage;
    w8->show();
}

