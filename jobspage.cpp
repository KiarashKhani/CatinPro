#include "jobclass.h"
#include<QString>
using namespace std;
#include "ui_jobspage.h"
#include "home.h"
#include "messagingpage.h"
#include "mynetworkpage.h"
#include "jobspage.h"
#include "mepage.h"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

QString j1;
QString j2;
QString j3;
QString j4;
QString j5;
extern QString l1;

jobspage::jobspage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::jobspage)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\catin.db");
    database.open();
    QSqlQuery q;
    q.exec("SELECT * FROM job");
    QSqlQueryModel *m= new QSqlQueryModel;
    m->setQuery(q);
    ui->tableView->setModel(m);
}

jobspage::~jobspage()
{
    delete ui;
}

void jobspage::on_pushButton_clicked()
{
    jobclass j;
    j.job_name=ui->lineEdit_2->text();
    j.Company_name=ui->lineEdit_3->text();
    j.Location=ui->lineEdit_4->text();
    j.Salary=ui->lineEdit_5->text();
    j.WorkPlace_type=ui->lineEdit_6->text();
    j1=j.job_name;
    j2=j.Company_name;
    j3=j.Location;
    j4=j.Salary;
    j5=j.WorkPlace_type;
    QSqlQuery q;
    q.exec("INSERT INTO job(username,jobtitle,company,location,salary,workplacetype)VALUES('"+l1+"', '"+j1+"', '"+j2+"', '"+j3+"', '"+j4+"', '"+j5+"')");
}


void jobspage::on_home_pushButton_clicked()
{
    home *w8 = new home;
    w8->show();
}


void jobspage::on_myn_pushButton_clicked()
{
    mynetworkpage *w8 = new mynetworkpage;
    w8->show();
}


void jobspage::on_mess_pushButton_clicked()
{
    messagingpage *w8 = new messagingpage;
    w8->show();
}


void jobspage::on_me_pushButton_clicked()
{
    mepage *w8 = new mepage;
    w8->show();
}

