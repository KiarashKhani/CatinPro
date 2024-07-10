#ifndef MESSAGINGPAGE_H
#define MESSAGINGPAGE_H

#include <QMainWindow>

namespace Ui {
class messagingpage;
}

class messagingpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit messagingpage(QWidget *parent = nullptr);
    ~messagingpage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_home_pushButton_clicked();

    void on_myn_pushButton_clicked();

    void on_jobs_pushButton_clicked();

    void on_me_pushButton_clicked();

private:
    Ui::messagingpage *ui;
};

#endif // MESSAGINGPAGE_H
