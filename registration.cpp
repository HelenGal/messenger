#include "registration.h"
#include "ui_registration.h"

Registration::Registration(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);
}

Registration::~Registration()
{
    delete ui;
}

void Registration::on_pushButton_registration_clicked()
{
    MainWindow *w_mainwindow = new MainWindow(this);

    w_mainwindow->show();
    this->hide();
}
