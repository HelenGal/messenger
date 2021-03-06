#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class Registration;
}

class Registration : public QMainWindow
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = 0);
    ~Registration();

private slots:
    void on_pushButton_registration_clicked();

private:
    Ui::Registration *ui;
};

#endif // REGISTRATION_H
