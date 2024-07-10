#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "page2.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    page2 *w2 = new page2;
    w2->show();
}

