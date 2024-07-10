#ifndef PV_H
#define PV_H

#include <QMainWindow>

namespace Ui {
class pv;
}

class pv : public QMainWindow
{
    Q_OBJECT

public:
    explicit pv(QWidget *parent = nullptr);
    ~pv();

private slots:
    void on_pushButton_clicked();

private:
    Ui::pv *ui;
};

#endif // PV_H
