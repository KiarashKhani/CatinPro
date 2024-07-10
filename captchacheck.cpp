#include "captchacheck.h"
#include "ui_captchacheck.h"
#include<QMessageBox>
#include "verifycode.h"


captchacheck::captchacheck(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::captchacheck)
{
    ui->setupUi(this);
}
int a;
captchacheck::~captchacheck()
{
    delete ui;
}

void captchacheck::on_pushButton_clicked()
{
    a = rand()%10000+1000;
    ui->lineEdit->setText(QString::number(a));
}


void captchacheck::on_pushButton_2_clicked()
{
    int ans = ui->lineEdit_2->text().toInt();
    if(ans==a)
    {
        verifycode *w4 = new verifycode;
        w4->show();
    }
    else
    {
        QMessageBox::warning(this,"Meooooow!!!!!","Your captcha is incorrect meow!!","OK & try again meow!");
    }

}

