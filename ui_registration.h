/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registration
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_registration;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QLabel *label_login;
    QLineEdit *lineEdit_login;
    QLabel *label_email;
    QLineEdit *lineEdit_email;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QLabel *label_sirname;
    QLineEdit *lineEdit_sirname;
    QLabel *label_phone;
    QLineEdit *lineEdit_phone_number;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_repeat_pass;
    QLabel *label_repeat_pass;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Registration)
    {
        if (Registration->objectName().isEmpty())
            Registration->setObjectName(QStringLiteral("Registration"));
        Registration->resize(332, 356);
        centralwidget = new QWidget(Registration);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 281, 291));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_registration = new QPushButton(gridLayoutWidget);
        pushButton_registration->setObjectName(QStringLiteral("pushButton_registration"));

        horizontalLayout->addWidget(pushButton_registration);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_login = new QLabel(gridLayoutWidget);
        label_login->setObjectName(QStringLiteral("label_login"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_login);

        lineEdit_login = new QLineEdit(gridLayoutWidget);
        lineEdit_login->setObjectName(QStringLiteral("lineEdit_login"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_login);

        label_email = new QLabel(gridLayoutWidget);
        label_email->setObjectName(QStringLiteral("label_email"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_email);

        lineEdit_email = new QLineEdit(gridLayoutWidget);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_email);

        label_name = new QLabel(gridLayoutWidget);
        label_name->setObjectName(QStringLiteral("label_name"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_name);

        lineEdit_name = new QLineEdit(gridLayoutWidget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_name);

        label_sirname = new QLabel(gridLayoutWidget);
        label_sirname->setObjectName(QStringLiteral("label_sirname"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_sirname);

        lineEdit_sirname = new QLineEdit(gridLayoutWidget);
        lineEdit_sirname->setObjectName(QStringLiteral("lineEdit_sirname"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEdit_sirname);

        label_phone = new QLabel(gridLayoutWidget);
        label_phone->setObjectName(QStringLiteral("label_phone"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_phone);

        lineEdit_phone_number = new QLineEdit(gridLayoutWidget);
        lineEdit_phone_number->setObjectName(QStringLiteral("lineEdit_phone_number"));

        formLayout->setWidget(9, QFormLayout::FieldRole, lineEdit_phone_number);

        label_password = new QLabel(gridLayoutWidget);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(12, QFormLayout::LabelRole, label_password);

        lineEdit_password = new QLineEdit(gridLayoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));

        formLayout->setWidget(12, QFormLayout::FieldRole, lineEdit_password);

        lineEdit_repeat_pass = new QLineEdit(gridLayoutWidget);
        lineEdit_repeat_pass->setObjectName(QStringLiteral("lineEdit_repeat_pass"));

        formLayout->setWidget(14, QFormLayout::FieldRole, lineEdit_repeat_pass);

        label_repeat_pass = new QLabel(gridLayoutWidget);
        label_repeat_pass->setObjectName(QStringLiteral("label_repeat_pass"));
        label_repeat_pass->setWordWrap(true);

        formLayout->setWidget(14, QFormLayout::LabelRole, label_repeat_pass);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        Registration->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Registration);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 332, 20));
        Registration->setMenuBar(menubar);
        statusbar = new QStatusBar(Registration);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Registration->setStatusBar(statusbar);

        retranslateUi(Registration);

        QMetaObject::connectSlotsByName(Registration);
    } // setupUi

    void retranslateUi(QMainWindow *Registration)
    {
        Registration->setWindowTitle(QApplication::translate("Registration", "MainWindow", Q_NULLPTR));
        pushButton_registration->setText(QApplication::translate("Registration", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", Q_NULLPTR));
        label_login->setText(QApplication::translate("Registration", "\320\233\320\276\320\263\320\270\320\275", Q_NULLPTR));
        label_email->setText(QApplication::translate("Registration", "e-mail", Q_NULLPTR));
        label_name->setText(QApplication::translate("Registration", "\320\230\320\274\321\217", Q_NULLPTR));
        label_sirname->setText(QApplication::translate("Registration", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", Q_NULLPTR));
        label_phone->setText(QApplication::translate("Registration", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", Q_NULLPTR));
        label_password->setText(QApplication::translate("Registration", "\320\237\320\260\321\200\320\276\320\273\321\214", Q_NULLPTR));
        label_repeat_pass->setText(QApplication::translate("Registration", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Registration: public Ui_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
