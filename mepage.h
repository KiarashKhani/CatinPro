#ifndef MEPAGE_H
#define MEPAGE_H

#include <QMainWindow>

namespace Ui {
class mepage;
}

class mepage : public QMainWindow
{
    Q_OBJECT

public:
    explicit mepage(QWidget *parent = nullptr);
    ~mepage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::mepage *ui;
};

#endif // MEPAGE_H
