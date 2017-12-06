/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget_shortinfo;
    QWidget *page_contacts;
    QWidget *page_chats;
    QListWidget *listWidget_chats;
    QWidget *page_show_user_info;
    QPushButton *pushButton_edit_user_info;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_nick;
    QLabel *label_surname;
    QLabel *label_name;
    QLabel *label_patronymic;
    QLabel *label_email;
    QLabel *label_phone;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_contacts;
    QPushButton *pushButton_chats;
    QPushButton *pushButton_about_User;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget_main;
    QWidget *page_send_msg;
    QTextEdit *textEdit_message;
    QWidget *page_send_contact;
    QWidget *page_edit_user_info;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_nick;
    QLineEdit *lineEdit_surname;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_patronymic;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_phone;
    QLineEdit *lineEdit_pass;
    QLineEdit *lineEdit_pass_2;
    QPushButton *pushButton_save_new_user_info;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_send_msg;
    QPushButton *pushButton_send_contact;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(503, 481);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setAutoFillBackground(false);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 481, 461));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        stackedWidget_shortinfo = new QStackedWidget(layoutWidget);
        stackedWidget_shortinfo->setObjectName(QStringLiteral("stackedWidget_shortinfo"));
        stackedWidget_shortinfo->setBaseSize(QSize(0, 0));
        stackedWidget_shortinfo->setFrameShape(QFrame::StyledPanel);
        stackedWidget_shortinfo->setFrameShadow(QFrame::Sunken);
        page_contacts = new QWidget();
        page_contacts->setObjectName(QStringLiteral("page_contacts"));
        page_contacts->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
        stackedWidget_shortinfo->addWidget(page_contacts);
        page_chats = new QWidget();
        page_chats->setObjectName(QStringLiteral("page_chats"));
        listWidget_chats = new QListWidget(page_chats);
        listWidget_chats->setObjectName(QStringLiteral("listWidget_chats"));
        listWidget_chats->setGeometry(QRect(0, 0, 231, 381));
        QFont font;
        font.setPointSize(10);
        listWidget_chats->setFont(font);
        listWidget_chats->setFrameShape(QFrame::HLine);
        listWidget_chats->setMidLineWidth(1);
        listWidget_chats->setIconSize(QSize(32, 32));
        listWidget_chats->setViewMode(QListView::ListMode);
        stackedWidget_shortinfo->addWidget(page_chats);
        page_show_user_info = new QWidget();
        page_show_user_info->setObjectName(QStringLiteral("page_show_user_info"));
        pushButton_edit_user_info = new QPushButton(page_show_user_info);
        pushButton_edit_user_info->setObjectName(QStringLiteral("pushButton_edit_user_info"));
        pushButton_edit_user_info->setGeometry(QRect(20, 240, 131, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons/\321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_edit_user_info->setIcon(icon);
        pushButton_edit_user_info->setIconSize(QSize(64, 64));
        layoutWidget1 = new QWidget(page_show_user_info);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 20, 131, 221));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_nick = new QLabel(layoutWidget1);
        label_nick->setObjectName(QStringLiteral("label_nick"));
        QFont font1;
        font1.setPointSize(15);
        label_nick->setFont(font1);

        verticalLayout_4->addWidget(label_nick);

        label_surname = new QLabel(layoutWidget1);
        label_surname->setObjectName(QStringLiteral("label_surname"));

        verticalLayout_4->addWidget(label_surname);

        label_name = new QLabel(layoutWidget1);
        label_name->setObjectName(QStringLiteral("label_name"));

        verticalLayout_4->addWidget(label_name);

        label_patronymic = new QLabel(layoutWidget1);
        label_patronymic->setObjectName(QStringLiteral("label_patronymic"));

        verticalLayout_4->addWidget(label_patronymic);

        label_email = new QLabel(layoutWidget1);
        label_email->setObjectName(QStringLiteral("label_email"));

        verticalLayout_4->addWidget(label_email);

        label_phone = new QLabel(layoutWidget1);
        label_phone->setObjectName(QStringLiteral("label_phone"));

        verticalLayout_4->addWidget(label_phone);

        stackedWidget_shortinfo->addWidget(page_show_user_info);

        verticalLayout->addWidget(stackedWidget_shortinfo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_contacts = new QPushButton(layoutWidget);
        pushButton_contacts->setObjectName(QStringLiteral("pushButton_contacts"));
        sizePolicy.setHeightForWidth(pushButton_contacts->sizePolicy().hasHeightForWidth());
        pushButton_contacts->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons/\320\272\320\276\320\275\321\202\320\260\320\272\321\202\321\213.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_contacts->setIcon(icon1);
        pushButton_contacts->setIconSize(QSize(64, 64));

        horizontalLayout->addWidget(pushButton_contacts);

        pushButton_chats = new QPushButton(layoutWidget);
        pushButton_chats->setObjectName(QStringLiteral("pushButton_chats"));
        sizePolicy.setHeightForWidth(pushButton_chats->sizePolicy().hasHeightForWidth());
        pushButton_chats->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral("icons/chats.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_chats->setIcon(icon2);
        pushButton_chats->setIconSize(QSize(64, 64));

        horizontalLayout->addWidget(pushButton_chats);

        pushButton_about_User = new QPushButton(layoutWidget);
        pushButton_about_User->setObjectName(QStringLiteral("pushButton_about_User"));
        sizePolicy.setHeightForWidth(pushButton_about_User->sizePolicy().hasHeightForWidth());
        pushButton_about_User->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons/\320\276 \321\201\320\265\320\261\320\265.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_about_User->setIcon(icon3);
        pushButton_about_User->setIconSize(QSize(64, 64));

        horizontalLayout->addWidget(pushButton_about_User);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        stackedWidget_main = new QStackedWidget(layoutWidget);
        stackedWidget_main->setObjectName(QStringLiteral("stackedWidget_main"));
        stackedWidget_main->setFrameShape(QFrame::StyledPanel);
        stackedWidget_main->setFrameShadow(QFrame::Sunken);
        page_send_msg = new QWidget();
        page_send_msg->setObjectName(QStringLiteral("page_send_msg"));
        textEdit_message = new QTextEdit(page_send_msg);
        textEdit_message->setObjectName(QStringLiteral("textEdit_message"));
        textEdit_message->setGeometry(QRect(0, 270, 251, 91));
        textEdit_message->setLayoutDirection(Qt::LeftToRight);
        stackedWidget_main->addWidget(page_send_msg);
        page_send_contact = new QWidget();
        page_send_contact->setObjectName(QStringLiteral("page_send_contact"));
        stackedWidget_main->addWidget(page_send_contact);
        page_edit_user_info = new QWidget();
        page_edit_user_info->setObjectName(QStringLiteral("page_edit_user_info"));
        layoutWidget2 = new QWidget(page_edit_user_info);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 211, 331));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lineEdit_nick = new QLineEdit(layoutWidget2);
        lineEdit_nick->setObjectName(QStringLiteral("lineEdit_nick"));
        lineEdit_nick->setFocusPolicy(Qt::StrongFocus);
        lineEdit_nick->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_nick->setClearButtonEnabled(false);

        verticalLayout_3->addWidget(lineEdit_nick);

        lineEdit_surname = new QLineEdit(layoutWidget2);
        lineEdit_surname->setObjectName(QStringLiteral("lineEdit_surname"));

        verticalLayout_3->addWidget(lineEdit_surname);

        lineEdit_name = new QLineEdit(layoutWidget2);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        verticalLayout_3->addWidget(lineEdit_name);

        lineEdit_patronymic = new QLineEdit(layoutWidget2);
        lineEdit_patronymic->setObjectName(QStringLiteral("lineEdit_patronymic"));

        verticalLayout_3->addWidget(lineEdit_patronymic);

        lineEdit_email = new QLineEdit(layoutWidget2);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));

        verticalLayout_3->addWidget(lineEdit_email);

        lineEdit_phone = new QLineEdit(layoutWidget2);
        lineEdit_phone->setObjectName(QStringLiteral("lineEdit_phone"));

        verticalLayout_3->addWidget(lineEdit_phone);

        lineEdit_pass = new QLineEdit(layoutWidget2);
        lineEdit_pass->setObjectName(QStringLiteral("lineEdit_pass"));
        lineEdit_pass->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(lineEdit_pass);

        lineEdit_pass_2 = new QLineEdit(layoutWidget2);
        lineEdit_pass_2->setObjectName(QStringLiteral("lineEdit_pass_2"));
        lineEdit_pass_2->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(lineEdit_pass_2);


        verticalLayout_5->addLayout(verticalLayout_3);

        pushButton_save_new_user_info = new QPushButton(layoutWidget2);
        pushButton_save_new_user_info->setObjectName(QStringLiteral("pushButton_save_new_user_info"));

        verticalLayout_5->addWidget(pushButton_save_new_user_info);

        stackedWidget_main->addWidget(page_edit_user_info);

        verticalLayout_2->addWidget(stackedWidget_main);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_send_msg = new QPushButton(layoutWidget);
        pushButton_send_msg->setObjectName(QStringLiteral("pushButton_send_msg"));
        sizePolicy.setHeightForWidth(pushButton_send_msg->sizePolicy().hasHeightForWidth());
        pushButton_send_msg->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icons/\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_send_msg->setIcon(icon4);
        pushButton_send_msg->setIconSize(QSize(64, 64));
        pushButton_send_msg->setAutoDefault(false);
        pushButton_send_msg->setFlat(false);

        horizontalLayout_2->addWidget(pushButton_send_msg);

        pushButton_send_contact = new QPushButton(layoutWidget);
        pushButton_send_contact->setObjectName(QStringLiteral("pushButton_send_contact"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_send_contact->sizePolicy().hasHeightForWidth());
        pushButton_send_contact->setSizePolicy(sizePolicy1);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("icons/\320\276\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\272\320\276\320\275\321\202\320\260\320\272\321\202.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_send_contact->setIcon(icon5);
        pushButton_send_contact->setIconSize(QSize(64, 64));

        horizontalLayout_2->addWidget(pushButton_send_contact);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget_shortinfo->setCurrentIndex(1);
        stackedWidget_main->setCurrentIndex(2);
        pushButton_send_msg->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_edit_user_info->setText(QString());
        label_nick->setText(QApplication::translate("MainWindow", "NICK", Q_NULLPTR));
        label_surname->setText(QApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", Q_NULLPTR));
        label_name->setText(QApplication::translate("MainWindow", "\320\230\320\274\321\217", Q_NULLPTR));
        label_patronymic->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", Q_NULLPTR));
        label_email->setText(QApplication::translate("MainWindow", "e-mail", Q_NULLPTR));
        label_phone->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", Q_NULLPTR));
        pushButton_contacts->setText(QString());
        pushButton_chats->setText(QString());
        pushButton_about_User->setText(QString());
        textEdit_message->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\235\320\260\320\277\320\270\321\210\320\270\321\202\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265...</p></body></html>", Q_NULLPTR));
        lineEdit_nick->setInputMask(QString());
        lineEdit_nick->setText(QString());
        lineEdit_nick->setPlaceholderText(QApplication::translate("MainWindow", "\320\235\320\270\320\272", Q_NULLPTR));
        lineEdit_surname->setText(QString());
        lineEdit_surname->setPlaceholderText(QApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", Q_NULLPTR));
        lineEdit_name->setText(QString());
        lineEdit_name->setPlaceholderText(QApplication::translate("MainWindow", "\320\230\320\274\321\217", Q_NULLPTR));
        lineEdit_patronymic->setText(QString());
        lineEdit_patronymic->setPlaceholderText(QApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", Q_NULLPTR));
        lineEdit_email->setText(QString());
        lineEdit_email->setPlaceholderText(QApplication::translate("MainWindow", "e-mail", Q_NULLPTR));
        lineEdit_phone->setText(QString());
        lineEdit_phone->setPlaceholderText(QApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", Q_NULLPTR));
        lineEdit_pass->setText(QString());
        lineEdit_pass->setPlaceholderText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", Q_NULLPTR));
        lineEdit_pass_2->setText(QString());
        lineEdit_pass_2->setPlaceholderText(QApplication::translate("MainWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", Q_NULLPTR));
        pushButton_save_new_user_info->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", Q_NULLPTR));
        pushButton_send_msg->setText(QString());
        pushButton_send_contact->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
