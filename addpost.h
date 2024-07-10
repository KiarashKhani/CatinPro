#ifndef ADDPOST_H
#define ADDPOST_H

#include <QMainWindow>

namespace Ui {
class addpost;
}

class addpost : public QMainWindow
{
    Q_OBJECT

public:
    explicit addpost(QWidget *parent = nullptr);
    ~addpost();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addpost *ui;
};

#endif // ADDPOST_H
