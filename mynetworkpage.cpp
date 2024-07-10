#include<QString>
using namespace std;
#include "page2.h"
#include "mynetworkpage.h"
#include "messagingpage.h"
#include "home.h"
#include "jobspage.h"
#include "mepage.h"
#include "ui_mynetworkpage.h"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

extern QString l1;

mynetworkpage::mynetworkpage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mynetworkpage)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\catin.db");
    database.open();
    QSqlQuery q;
    q.exec("SELECT username2 FROM connections WHERE username='"+l1+"'");
    QSqlQueryModel *m= new QSqlQueryModel;
    m->setQuery(q);
    ui->tableView->setModel(m);

}

mynetworkpage::~mynetworkpage()
{
    delete ui;
}

void mynetworkpage::on_home_pushButton_clicked()
{
    home *w8 = new home;
    w8->show();
}


void mynetworkpage::on_jobs_pushButton_clicked()
{
    jobspage *w8 = new jobspage;
    w8->show();
}


void mynetworkpage::on_mess_pushButton_clicked()
{
    messagingpage *w8 = new messagingpage;
    w8->show();
}


void mynetworkpage::on_me_pushButton_clicked()
{
    mepage *w8 = new mepage;
    w8->show();
}

