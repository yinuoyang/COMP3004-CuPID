/********************************************************************************
** Form generated from reading UI file 'projectmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTMANAGER_H
#define UI_PROJECTMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ProjectManager
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ProjectManager)
    {
        if (ProjectManager->objectName().isEmpty())
            ProjectManager->setObjectName(QStringLiteral("ProjectManager"));
        ProjectManager->resize(400, 300);
        buttonBox = new QDialogButtonBox(ProjectManager);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(ProjectManager);
        QObject::connect(buttonBox, SIGNAL(accepted()), ProjectManager, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ProjectManager, SLOT(reject()));

        QMetaObject::connectSlotsByName(ProjectManager);
    } // setupUi

    void retranslateUi(QDialog *ProjectManager)
    {
        ProjectManager->setWindowTitle(QApplication::translate("ProjectManager", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class ProjectManager: public Ui_ProjectManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTMANAGER_H
