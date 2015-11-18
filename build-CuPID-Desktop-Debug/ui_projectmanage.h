/********************************************************************************
** Form generated from reading UI file 'projectmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTMANAGE_H
#define UI_PROJECTMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ProjectManage
{
public:
    QLabel *label;
    QLabel *label_status;
    QLabel *label_2;
    QPushButton *Edit;
    QPushButton *Create;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *teamsize;
    QLineEdit *teamscore;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QListView *ProjList;
    QPushButton *back;
    QPushButton *Save;
    QPushButton *pushButton;
    QLabel *label_6;
    QLineEdit *maxSize;

    void setupUi(QDialog *ProjectManage)
    {
        if (ProjectManage->objectName().isEmpty())
            ProjectManage->setObjectName(QStringLiteral("ProjectManage"));
        ProjectManage->resize(568, 556);
        label = new QLabel(ProjectManage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 381, 41));
        label_status = new QLabel(ProjectManage);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(20, 490, 101, 31));
        label_2 = new QLabel(ProjectManage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 110, 101, 17));
        Edit = new QPushButton(ProjectManage);
        Edit->setObjectName(QStringLiteral("Edit"));
        Edit->setGeometry(QRect(10, 400, 61, 27));
        Create = new QPushButton(ProjectManage);
        Create->setObjectName(QStringLiteral("Create"));
        Create->setGeometry(QRect(80, 400, 61, 27));
        pushButton_3 = new QPushButton(ProjectManage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 400, 61, 27));
        label_3 = new QLabel(ProjectManage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 80, 151, 20));
        label_4 = new QLabel(ProjectManage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 120, 141, 20));
        label_5 = new QLabel(ProjectManage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(320, 150, 141, 20));
        teamsize = new QLineEdit(ProjectManage);
        teamsize->setObjectName(QStringLiteral("teamsize"));
        teamsize->setGeometry(QRect(480, 120, 61, 21));
        teamscore = new QLineEdit(ProjectManage);
        teamscore->setObjectName(QStringLiteral("teamscore"));
        teamscore->setGeometry(QRect(480, 150, 61, 21));
        pushButton_4 = new QPushButton(ProjectManage);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(320, 220, 99, 27));
        pushButton_5 = new QPushButton(ProjectManage);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 450, 171, 27));
        ProjList = new QListView(ProjectManage);
        ProjList->setObjectName(QStringLiteral("ProjList"));
        ProjList->setGeometry(QRect(10, 140, 291, 251));
        back = new QPushButton(ProjectManage);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(20, 10, 99, 27));
        Save = new QPushButton(ProjectManage);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setGeometry(QRect(450, 220, 99, 27));
        pushButton = new QPushButton(ProjectManage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 110, 99, 27));
        label_6 = new QLabel(ProjectManage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(330, 180, 131, 20));
        maxSize = new QLineEdit(ProjectManage);
        maxSize->setObjectName(QStringLiteral("maxSize"));
        maxSize->setGeometry(QRect(480, 180, 61, 27));

        retranslateUi(ProjectManage);

        QMetaObject::connectSlotsByName(ProjectManage);
    } // setupUi

    void retranslateUi(QDialog *ProjectManage)
    {
        ProjectManage->setWindowTitle(QApplication::translate("ProjectManage", "Dialog", 0));
        label->setText(QApplication::translate("ProjectManage", "Welcome to Project Manager, Administrator", 0));
        label_status->setText(QApplication::translate("ProjectManage", "status", 0));
        label_2->setText(QApplication::translate("ProjectManage", "Projects list", 0));
        Edit->setText(QApplication::translate("ProjectManage", "Edit", 0));
        Create->setText(QApplication::translate("ProjectManage", "Create", 0));
        pushButton_3->setText(QApplication::translate("ProjectManage", "Delete", 0));
        label_3->setText(QApplication::translate("ProjectManage", "PPID Configuration", 0));
        label_4->setText(QApplication::translate("ProjectManage", "Minimum team size", 0));
        label_5->setText(QApplication::translate("ProjectManage", "Average team score", 0));
        pushButton_4->setText(QApplication::translate("ProjectManage", "Run PPID", 0));
        pushButton_5->setText(QApplication::translate("ProjectManage", "View team list", 0));
        back->setText(QApplication::translate("ProjectManage", "Logout", 0));
        Save->setText(QApplication::translate("ProjectManage", "Save", 0));
        pushButton->setText(QApplication::translate("ProjectManage", "Refresh", 0));
        label_6->setText(QApplication::translate("ProjectManage", "MaxTeamSize", 0));
    } // retranslateUi

};

namespace Ui {
    class ProjectManage: public Ui_ProjectManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTMANAGE_H
