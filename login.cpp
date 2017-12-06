#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_login_clicked()
{
    QString login, password;
    login = ui->lineEdit_login->text();
    password = ui->lineEdit_password->text();

    MainWindow *w_mainwindow = new MainWindow(this);

    w_mainwindow->show();
    this->hide();
}


void Login::on_pushButton_clicked()
{
    Registration *w_registration = new Registration(this);
    w_registration->show();
    this->hide();
}
