#ifndef MYNETWORKPAGE_H
#define MYNETWORKPAGE_H

#include <QMainWindow>

namespace Ui {
class mynetworkpage;
}

class mynetworkpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit mynetworkpage(QWidget *parent = nullptr);
    ~mynetworkpage();

private slots:
    void on_home_pushButton_clicked();

    void on_jobs_pushButton_clicked();

    void on_mess_pushButton_clicked();

    void on_me_pushButton_clicked();

private:
    Ui::mynetworkpage *ui;
};

#endif // MYNETWORKPAGE_H
