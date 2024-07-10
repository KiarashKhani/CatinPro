#ifndef CAPTCHACHECK_H
#define CAPTCHAChECK_H

#include <QMainWindow>

namespace Ui {
class captchacheck;
}

class captchacheck : public QMainWindow
{
    Q_OBJECT

public:
    explicit captchacheck(QWidget *parent = nullptr);
    ~captchacheck();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::captchacheck *ui;
};

#endif // CAPTCHACECK_H
