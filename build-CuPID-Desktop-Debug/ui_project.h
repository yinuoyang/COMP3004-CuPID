/********************************************************************************
** Form generated from reading UI file 'project.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT_H
#define UI_PROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Project
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *save;
    QPushButton *cancel;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *Name;
    QLineEdit *due;
    QTextEdit *textBrowser;

    void setupUi(QDialog *Project)
    {
        if (Project->objectName().isEmpty())
            Project->setObjectName(QStringLiteral("Project"));
        Project->resize(510, 386);
        label = new QLabel(Project);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 111, 17));
        label_2 = new QLabel(Project);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 80, 41, 17));
        save = new QPushButton(Project);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(290, 310, 99, 27));
        cancel = new QPushButton(Project);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(400, 310, 99, 27));
        label_4 = new QLabel(Project);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 140, 81, 17));
        label_5 = new QLabel(Project);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(320, 40, 131, 20));
        Name = new QLineEdit(Project);
        Name->setObjectName(QStringLiteral("Name"));
        Name->setGeometry(QRect(120, 80, 141, 27));
        due = new QLineEdit(Project);
        due->setObjectName(QStringLiteral("due"));
        due->setGeometry(QRect(120, 140, 141, 27));
        textBrowser = new QTextEdit(Project);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(300, 107, 181, 161));

        retranslateUi(Project);

        QMetaObject::connectSlotsByName(Project);
    } // setupUi

    void retranslateUi(QDialog *Project)
    {
        Project->setWindowTitle(QApplication::translate("Project", "Project Manager", 0));
        label->setText(QApplication::translate("Project", "Project Setting", 0));
        label_2->setText(QApplication::translate("Project", "Name", 0));
        save->setText(QApplication::translate("Project", "Save", 0));
        cancel->setText(QApplication::translate("Project", "Close", 0));
        label_4->setText(QApplication::translate("Project", "Due date", 0));
        label_5->setText(QApplication::translate("Project", "Project description", 0));
    } // retranslateUi

};

namespace Ui {
    class Project: public Ui_Project {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT_H
