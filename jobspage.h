#ifndef JOBSPAGE_H
#define JOBSPAGE_H

#include <QMainWindow>

namespace Ui {
class jobspage;
}

class jobspage : public QMainWindow
{
    Q_OBJECT

public:
    explicit jobspage(QWidget *parent = nullptr);
    ~jobspage();

private slots:
    void on_pushButton_clicked();

    void on_home_pushButton_clicked();

    void on_myn_pushButton_clicked();

    void on_mess_pushButton_clicked();

    void on_me_pushButton_clicked();

private:
    Ui::jobspage *ui;
};

#endif // JOBSPAGE_H
