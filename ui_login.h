/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLineEdit *lineEdit_login;
    QLabel *label_login;
    QLineEdit *lineEdit_password;
    QLabel *label_password;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_login;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QLabel *label_forget_pass;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->setWindowModality(Qt::NonModal);
        Login->resize(256, 142);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 11, 241, 124));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetFixedSize);
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        lineEdit_login = new QLineEdit(layoutWidget);
        lineEdit_login->setObjectName(QStringLiteral("lineEdit_login"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_login);

        label_login = new QLabel(layoutWidget);
        label_login->setObjectName(QStringLiteral("label_login"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_login);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_password);

        label_password = new QLabel(layoutWidget);
        label_password->setObjectName(QStringLiteral("label_password"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_password);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_login = new QPushButton(layoutWidget);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setFlat(false);

        horizontalLayout->addWidget(pushButton_login);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font;
        font.setUnderline(true);
        pushButton->setFont(font);
        pushButton->setFlat(true);

        horizontalLayout_2->addWidget(pushButton);

        label_forget_pass = new QLabel(layoutWidget);
        label_forget_pass->setObjectName(QStringLiteral("label_forget_pass"));
        label_forget_pass->setStyleSheet(QLatin1String("font: 8pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        label_forget_pass->setTextFormat(Qt::AutoText);
        label_forget_pass->setAlignment(Qt::AlignCenter);
        label_forget_pass->setMargin(0);

        horizontalLayout_2->addWidget(label_forget_pass);


        verticalLayout->addLayout(horizontalLayout_2);

        Login->setCentralWidget(centralwidget);

        retranslateUi(Login);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "MainWindow", Q_NULLPTR));
        label_login->setText(QApplication::translate("Login", "\320\233\320\276\320\263\320\270\320\275", Q_NULLPTR));
        label_password->setText(QApplication::translate("Login", "\320\237\320\260\321\200\320\276\320\273\321\214", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_login->setToolTip(QApplication::translate("Login", "<html><head/><body><p>\320\222\320\276\320\271\321\202\320\270 \320\262 \320\273\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_login->setText(QApplication::translate("Login", "\320\222\320\276\320\271\321\202\320\270", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("Login", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("Login", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", Q_NULLPTR));
        label_forget_pass->setText(QApplication::translate("Login", "\320\227\320\260\320\261\321\213\320\273\320\270 \320\277\320\260\321\200\320\276\320\273\321\214?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
