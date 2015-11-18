/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label_status;
    QLabel *label;
    QPushButton *login_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *username;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(533, 391);
        label_status = new QLabel(Login);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(60, 260, 371, 17));
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(106, 70, 181, 20));
        login_2 = new QPushButton(Login);
        login_2->setObjectName(QStringLiteral("login_2"));
        login_2->setGeometry(QRect(210, 180, 99, 27));
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 120, 223, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        username = new QLineEdit(layoutWidget);
        username->setObjectName(QStringLiteral("username"));

        horizontalLayout->addWidget(username);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "CUPID Login", 0));
        label_status->setText(QApplication::translate("Login", "Not Connected", 0));
        label->setText(QApplication::translate("Login", "Welcome to CUPID system", 0));
        login_2->setText(QApplication::translate("Login", "Login", 0));
        label_2->setText(QApplication::translate("Login", "Username", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
