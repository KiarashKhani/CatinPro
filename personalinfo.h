#ifndef PERSONALINFO_H
#define PERSONALINFO_H

#include <QMainWindow>

namespace Ui {
class personalinfo;
}

class personalinfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit personalinfo(QWidget *parent = nullptr);
    ~personalinfo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::personalinfo *ui;
};

#endif // PERSONALINFO_H
