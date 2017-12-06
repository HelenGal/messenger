#include "mainwindow.h"
#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Login window_login;
    window_login.setFixedSize(window_login.size());
    window_login.show();

    return a.exec();
}
