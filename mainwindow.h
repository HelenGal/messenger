#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dbmanager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    DbManager *db;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_contacts_clicked();

    void on_pushButton_chats_clicked();

    void on_pushButton_send_contact_clicked();

   void on_pushButton_save_new_user_info_clicked();

    void on_pushButton_about_User_clicked();

    void on_pushButton_edit_user_info_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
