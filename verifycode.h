#ifndef VERIFYCODE_H
#define VERIFYCODE_H

#include <QMainWindow>

namespace Ui {
class verifycode;
}

class verifycode : public QMainWindow
{
    Q_OBJECT

public:
    explicit verifycode(QWidget *parent = nullptr);
    ~verifycode();

private slots:
    void on_pushButton_clicked();

private:
    Ui::verifycode *ui;
};

#endif // VERIFYCODE_H
