#ifndef HOME_H
#define HOME_H

#include <QMainWindow>

namespace Ui {
class home;
}

class home : public QMainWindow
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = nullptr);
    ~home();

private slots:
    void on_addpost_pushButton_clicked();

    void on_me_pushButton_clicked();

    void on_go_pushButton_clicked();

    void on_myn_pushButton_clicked();

    void on_mess_pushButton_clicked();

    void on_jobs_pushButton_clicked();

private:
    Ui::home *ui;
};

#endif // HOME_H
