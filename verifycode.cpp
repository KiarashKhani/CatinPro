#include "verifycode.h"
#include "ui_verifycode.h"
#include<QMessageBox>
#include "personalinfo.h"
int d;
QString c;
verifycode::verifycode(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::verifycode)
{
    ui->setupUi(this);
    d = rand()%10000+100;
    QString b = QString::number(d);
    c="Your verify code is : "+b;
    QMessageBox::information(this,"Verify code window",c);



}

verifycode::~verifycode()
{
    delete ui;

}

void verifycode::on_pushButton_clicked()
{
    int ans = ui->lineEdit->text().toInt();
    if (ans==d)
    {
        personalinfo *w5 = new personalinfo;
        w5->show();
    }
    else
        QMessageBox::information(this,"Verify code",c);

}

