#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = new DbManager();
    db->connectToDataBase();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_contacts_clicked()
{
    ui->stackedWidget_shortinfo->setCurrentWidget(ui->page_contacts);
    ui->stackedWidget_main->setCurrentWidget(ui->page_send_contact);
    ui->pushButton_send_contact->show();
    ui->pushButton_send_msg->show();
}

void MainWindow::on_pushButton_chats_clicked()
{
    ui->stackedWidget_shortinfo->setCurrentWidget(ui->page_chats);
    ui->stackedWidget_main->setCurrentWidget(ui->page_send_msg);
    ui->pushButton_send_contact->show();
    ui->pushButton_send_msg->show();
    /*Заполнение листвиджета чатами*/ //куда перенести чтобы не повторялось при каждом нажатии на кнопку
    QPixmap pix("C:/projects QtCreator/TestAndroid/icons/chats.jpg");
    QStringList listwidget_items_chats;
    listwidget_items_chats = QStringList()<< "Chat 1" << "Chat 2" << "Chat 3";

    foreach (const QString& item, listwidget_items_chats) {
        QListWidgetItem *listitem = new QListWidgetItem(item);
        QPixmap pix("C:/projects QtCreator/TestAndroid/icons/chats.jpg");//аватар собеседника
        listitem->setIcon(pix);
        ui->listWidget_chats->addItem(listitem);
    }





}


void MainWindow::on_pushButton_about_User_clicked()
{
    ui->stackedWidget_shortinfo->setCurrentWidget(ui->page_show_user_info);
}

void MainWindow::on_pushButton_send_contact_clicked()
{

}

void MainWindow::on_pushButton_edit_user_info_clicked()
{
    ui->stackedWidget_main->setCurrentWidget(ui->page_edit_user_info);
    ui->pushButton_send_contact->hide();
    ui->pushButton_send_msg->hide();
}

void MainWindow::on_pushButton_save_new_user_info_clicked()
{

}


