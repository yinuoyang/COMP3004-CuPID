/********************************************************************************
** Form generated from reading UI file 'stuprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUPROFILE_H
#define UI_STUPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StuProfile
{
public:
    QPushButton *join;
    QPushButton *pushButton_3;
    QPushButton *quit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_47;
    QLabel *label_5;
    QLineEdit *name_2;
    QLabel *label_8;
    QLineEdit *id_2;
    QLabel *label;
    QLabel *stuname;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_48;
    QLabel *label_11;
    QLineEdit *gcode_2;
    QCheckBox *checkBox_43;
    QHBoxLayout *horizontalLayout_49;
    QLabel *label_59;
    QLineEdit *pcode_2;
    QCheckBox *checkBox_44;
    QHBoxLayout *horizontalLayout_50;
    QLabel *label_60;
    QLineEdit *write_2;
    QCheckBox *checkBox_45;
    QHBoxLayout *horizontalLayout_51;
    QLabel *label_61;
    QLineEdit *punc_2;
    QCheckBox *checkBox_46;
    QHBoxLayout *horizontalLayout_52;
    QLabel *label_62;
    QLineEdit *lead_2;
    QCheckBox *checkBox_47;
    QHBoxLayout *horizontalLayout_53;
    QLabel *label_63;
    QLineEdit *Ethic_2;
    QCheckBox *checkBox_48;
    QHBoxLayout *horizontalLayout_54;
    QLabel *label_64;
    QLineEdit *teamwork_2;
    QCheckBox *checkBox_49;
    QHBoxLayout *horizontalLayout_55;
    QLabel *label_65;
    QLineEdit *presentation_2;
    QCheckBox *checkBox_50;
    QHBoxLayout *horizontalLayout_56;
    QLabel *label_66;
    QLineEdit *stress_2;
    QCheckBox *checkBox_51;
    QHBoxLayout *horizontalLayout_57;
    QLabel *label_67;
    QLineEdit *att_2;
    QCheckBox *checkBox_52;
    QHBoxLayout *horizontalLayout_58;
    QLabel *label_68;
    QLineEdit *distance_2;
    QCheckBox *checkBox_53;
    QHBoxLayout *horizontalLayout_59;
    QLabel *label_69;
    QLineEdit *time_2;
    QCheckBox *checkBox_54;
    QHBoxLayout *horizontalLayout_60;
    QLabel *label_70;
    QLineEdit *cgpa_2;
    QCheckBox *checkBox_55;
    QHBoxLayout *horizontalLayout_61;
    QLabel *label_71;
    QLineEdit *pre_2;
    QCheckBox *checkBox_56;
    QListView *currentList;
    QLabel *label_2;
    QListView *projectList;
    QPushButton *Back;

    void setupUi(QDialog *StuProfile)
    {
        if (StuProfile->objectName().isEmpty())
            StuProfile->setObjectName(QStringLiteral("StuProfile"));
        StuProfile->resize(723, 622);
        join = new QPushButton(StuProfile);
        join->setObjectName(QStringLiteral("join"));
        join->setGeometry(QRect(470, 120, 91, 27));
        pushButton_3 = new QPushButton(StuProfile);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(470, 590, 99, 27));
        quit = new QPushButton(StuProfile);
        quit->setObjectName(QStringLiteral("quit"));
        quit->setGeometry(QRect(580, 120, 91, 27));
        layoutWidget = new QWidget(StuProfile);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 80, 467, 29));
        horizontalLayout_47 = new QHBoxLayout(layoutWidget);
        horizontalLayout_47->setObjectName(QStringLiteral("horizontalLayout_47"));
        horizontalLayout_47->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_47->addWidget(label_5);

        name_2 = new QLineEdit(layoutWidget);
        name_2->setObjectName(QStringLiteral("name_2"));

        horizontalLayout_47->addWidget(name_2);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_47->addWidget(label_8);

        id_2 = new QLineEdit(layoutWidget);
        id_2->setObjectName(QStringLiteral("id_2"));

        horizontalLayout_47->addWidget(id_2);

        label = new QLabel(StuProfile);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(480, 400, 105, 17));
        stuname = new QLabel(StuProfile);
        stuname->setObjectName(QStringLiteral("stuname"));
        stuname->setGeometry(QRect(40, 50, 191, 20));
        stuname->setAlignment(Qt::AlignCenter);
        layoutWidget_2 = new QWidget(StuProfile);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 130, 431, 486));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setObjectName(QStringLiteral("horizontalLayout_48"));
        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_48->addWidget(label_11);

        gcode_2 = new QLineEdit(layoutWidget_2);
        gcode_2->setObjectName(QStringLiteral("gcode_2"));

        horizontalLayout_48->addWidget(gcode_2);

        checkBox_43 = new QCheckBox(layoutWidget_2);
        checkBox_43->setObjectName(QStringLiteral("checkBox_43"));

        horizontalLayout_48->addWidget(checkBox_43);


        verticalLayout_6->addLayout(horizontalLayout_48);

        horizontalLayout_49 = new QHBoxLayout();
        horizontalLayout_49->setObjectName(QStringLiteral("horizontalLayout_49"));
        label_59 = new QLabel(layoutWidget_2);
        label_59->setObjectName(QStringLiteral("label_59"));

        horizontalLayout_49->addWidget(label_59);

        pcode_2 = new QLineEdit(layoutWidget_2);
        pcode_2->setObjectName(QStringLiteral("pcode_2"));

        horizontalLayout_49->addWidget(pcode_2);

        checkBox_44 = new QCheckBox(layoutWidget_2);
        checkBox_44->setObjectName(QStringLiteral("checkBox_44"));

        horizontalLayout_49->addWidget(checkBox_44);


        verticalLayout_6->addLayout(horizontalLayout_49);

        horizontalLayout_50 = new QHBoxLayout();
        horizontalLayout_50->setObjectName(QStringLiteral("horizontalLayout_50"));
        label_60 = new QLabel(layoutWidget_2);
        label_60->setObjectName(QStringLiteral("label_60"));

        horizontalLayout_50->addWidget(label_60);

        write_2 = new QLineEdit(layoutWidget_2);
        write_2->setObjectName(QStringLiteral("write_2"));

        horizontalLayout_50->addWidget(write_2);

        checkBox_45 = new QCheckBox(layoutWidget_2);
        checkBox_45->setObjectName(QStringLiteral("checkBox_45"));

        horizontalLayout_50->addWidget(checkBox_45);


        verticalLayout_6->addLayout(horizontalLayout_50);

        horizontalLayout_51 = new QHBoxLayout();
        horizontalLayout_51->setObjectName(QStringLiteral("horizontalLayout_51"));
        label_61 = new QLabel(layoutWidget_2);
        label_61->setObjectName(QStringLiteral("label_61"));

        horizontalLayout_51->addWidget(label_61);

        punc_2 = new QLineEdit(layoutWidget_2);
        punc_2->setObjectName(QStringLiteral("punc_2"));

        horizontalLayout_51->addWidget(punc_2);

        checkBox_46 = new QCheckBox(layoutWidget_2);
        checkBox_46->setObjectName(QStringLiteral("checkBox_46"));

        horizontalLayout_51->addWidget(checkBox_46);


        verticalLayout_6->addLayout(horizontalLayout_51);

        horizontalLayout_52 = new QHBoxLayout();
        horizontalLayout_52->setObjectName(QStringLiteral("horizontalLayout_52"));
        label_62 = new QLabel(layoutWidget_2);
        label_62->setObjectName(QStringLiteral("label_62"));

        horizontalLayout_52->addWidget(label_62);

        lead_2 = new QLineEdit(layoutWidget_2);
        lead_2->setObjectName(QStringLiteral("lead_2"));

        horizontalLayout_52->addWidget(lead_2);

        checkBox_47 = new QCheckBox(layoutWidget_2);
        checkBox_47->setObjectName(QStringLiteral("checkBox_47"));

        horizontalLayout_52->addWidget(checkBox_47);


        verticalLayout_6->addLayout(horizontalLayout_52);

        horizontalLayout_53 = new QHBoxLayout();
        horizontalLayout_53->setObjectName(QStringLiteral("horizontalLayout_53"));
        label_63 = new QLabel(layoutWidget_2);
        label_63->setObjectName(QStringLiteral("label_63"));

        horizontalLayout_53->addWidget(label_63);

        Ethic_2 = new QLineEdit(layoutWidget_2);
        Ethic_2->setObjectName(QStringLiteral("Ethic_2"));

        horizontalLayout_53->addWidget(Ethic_2);

        checkBox_48 = new QCheckBox(layoutWidget_2);
        checkBox_48->setObjectName(QStringLiteral("checkBox_48"));

        horizontalLayout_53->addWidget(checkBox_48);


        verticalLayout_6->addLayout(horizontalLayout_53);

        horizontalLayout_54 = new QHBoxLayout();
        horizontalLayout_54->setObjectName(QStringLiteral("horizontalLayout_54"));
        label_64 = new QLabel(layoutWidget_2);
        label_64->setObjectName(QStringLiteral("label_64"));

        horizontalLayout_54->addWidget(label_64);

        teamwork_2 = new QLineEdit(layoutWidget_2);
        teamwork_2->setObjectName(QStringLiteral("teamwork_2"));

        horizontalLayout_54->addWidget(teamwork_2);

        checkBox_49 = new QCheckBox(layoutWidget_2);
        checkBox_49->setObjectName(QStringLiteral("checkBox_49"));

        horizontalLayout_54->addWidget(checkBox_49);


        verticalLayout_6->addLayout(horizontalLayout_54);

        horizontalLayout_55 = new QHBoxLayout();
        horizontalLayout_55->setObjectName(QStringLiteral("horizontalLayout_55"));
        label_65 = new QLabel(layoutWidget_2);
        label_65->setObjectName(QStringLiteral("label_65"));

        horizontalLayout_55->addWidget(label_65);

        presentation_2 = new QLineEdit(layoutWidget_2);
        presentation_2->setObjectName(QStringLiteral("presentation_2"));

        horizontalLayout_55->addWidget(presentation_2);

        checkBox_50 = new QCheckBox(layoutWidget_2);
        checkBox_50->setObjectName(QStringLiteral("checkBox_50"));

        horizontalLayout_55->addWidget(checkBox_50);


        verticalLayout_6->addLayout(horizontalLayout_55);

        horizontalLayout_56 = new QHBoxLayout();
        horizontalLayout_56->setObjectName(QStringLiteral("horizontalLayout_56"));
        label_66 = new QLabel(layoutWidget_2);
        label_66->setObjectName(QStringLiteral("label_66"));

        horizontalLayout_56->addWidget(label_66);

        stress_2 = new QLineEdit(layoutWidget_2);
        stress_2->setObjectName(QStringLiteral("stress_2"));

        horizontalLayout_56->addWidget(stress_2);

        checkBox_51 = new QCheckBox(layoutWidget_2);
        checkBox_51->setObjectName(QStringLiteral("checkBox_51"));

        horizontalLayout_56->addWidget(checkBox_51);


        verticalLayout_6->addLayout(horizontalLayout_56);

        horizontalLayout_57 = new QHBoxLayout();
        horizontalLayout_57->setObjectName(QStringLiteral("horizontalLayout_57"));
        label_67 = new QLabel(layoutWidget_2);
        label_67->setObjectName(QStringLiteral("label_67"));

        horizontalLayout_57->addWidget(label_67);

        att_2 = new QLineEdit(layoutWidget_2);
        att_2->setObjectName(QStringLiteral("att_2"));

        horizontalLayout_57->addWidget(att_2);

        checkBox_52 = new QCheckBox(layoutWidget_2);
        checkBox_52->setObjectName(QStringLiteral("checkBox_52"));

        horizontalLayout_57->addWidget(checkBox_52);


        verticalLayout_6->addLayout(horizontalLayout_57);

        horizontalLayout_58 = new QHBoxLayout();
        horizontalLayout_58->setObjectName(QStringLiteral("horizontalLayout_58"));
        label_68 = new QLabel(layoutWidget_2);
        label_68->setObjectName(QStringLiteral("label_68"));

        horizontalLayout_58->addWidget(label_68);

        distance_2 = new QLineEdit(layoutWidget_2);
        distance_2->setObjectName(QStringLiteral("distance_2"));

        horizontalLayout_58->addWidget(distance_2);

        checkBox_53 = new QCheckBox(layoutWidget_2);
        checkBox_53->setObjectName(QStringLiteral("checkBox_53"));

        horizontalLayout_58->addWidget(checkBox_53);


        verticalLayout_6->addLayout(horizontalLayout_58);

        horizontalLayout_59 = new QHBoxLayout();
        horizontalLayout_59->setObjectName(QStringLiteral("horizontalLayout_59"));
        label_69 = new QLabel(layoutWidget_2);
        label_69->setObjectName(QStringLiteral("label_69"));

        horizontalLayout_59->addWidget(label_69);

        time_2 = new QLineEdit(layoutWidget_2);
        time_2->setObjectName(QStringLiteral("time_2"));

        horizontalLayout_59->addWidget(time_2);

        checkBox_54 = new QCheckBox(layoutWidget_2);
        checkBox_54->setObjectName(QStringLiteral("checkBox_54"));

        horizontalLayout_59->addWidget(checkBox_54);


        verticalLayout_6->addLayout(horizontalLayout_59);

        horizontalLayout_60 = new QHBoxLayout();
        horizontalLayout_60->setObjectName(QStringLiteral("horizontalLayout_60"));
        label_70 = new QLabel(layoutWidget_2);
        label_70->setObjectName(QStringLiteral("label_70"));

        horizontalLayout_60->addWidget(label_70);

        cgpa_2 = new QLineEdit(layoutWidget_2);
        cgpa_2->setObjectName(QStringLiteral("cgpa_2"));

        horizontalLayout_60->addWidget(cgpa_2);

        checkBox_55 = new QCheckBox(layoutWidget_2);
        checkBox_55->setObjectName(QStringLiteral("checkBox_55"));

        horizontalLayout_60->addWidget(checkBox_55);


        verticalLayout_6->addLayout(horizontalLayout_60);

        horizontalLayout_61 = new QHBoxLayout();
        horizontalLayout_61->setObjectName(QStringLiteral("horizontalLayout_61"));
        label_71 = new QLabel(layoutWidget_2);
        label_71->setObjectName(QStringLiteral("label_71"));

        horizontalLayout_61->addWidget(label_71);

        pre_2 = new QLineEdit(layoutWidget_2);
        pre_2->setObjectName(QStringLiteral("pre_2"));

        horizontalLayout_61->addWidget(pre_2);

        checkBox_56 = new QCheckBox(layoutWidget_2);
        checkBox_56->setObjectName(QStringLiteral("checkBox_56"));

        horizontalLayout_61->addWidget(checkBox_56);


        verticalLayout_6->addLayout(horizontalLayout_61);

        currentList = new QListView(StuProfile);
        currentList->setObjectName(QStringLiteral("currentList"));
        currentList->setGeometry(QRect(470, 430, 211, 111));
        label_2 = new QLabel(StuProfile);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(480, 160, 91, 17));
        projectList = new QListView(StuProfile);
        projectList->setObjectName(QStringLiteral("projectList"));
        projectList->setGeometry(QRect(460, 210, 221, 161));
        Back = new QPushButton(StuProfile);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setGeometry(QRect(20, 10, 99, 27));

        retranslateUi(StuProfile);

        QMetaObject::connectSlotsByName(StuProfile);
    } // setupUi

    void retranslateUi(QDialog *StuProfile)
    {
        StuProfile->setWindowTitle(QApplication::translate("StuProfile", "Dialog", 0));
        join->setText(QApplication::translate("StuProfile", "Join Project", 0));
        pushButton_3->setText(QApplication::translate("StuProfile", "Save Profile", 0));
        quit->setText(QApplication::translate("StuProfile", "Quit Project", 0));
        label_5->setText(QApplication::translate("StuProfile", "Name", 0));
        name_2->setText(QString());
        label_8->setText(QApplication::translate("StuProfile", "Student Number", 0));
        id_2->setText(QString());
        label->setText(QApplication::translate("StuProfile", "Current Project", 0));
        stuname->setText(QApplication::translate("StuProfile", "Student's profile", 0));
        label_11->setText(QApplication::translate("StuProfile", "GeneralCodingAbility                 ", 0));
        checkBox_43->setText(QApplication::translate("StuProfile", "Prefered", 0));
        label_59->setText(QApplication::translate("StuProfile", "PrimaryCodingAbility                 ", 0));
        checkBox_44->setText(QApplication::translate("StuProfile", "Prefered", 0));
        label_60->setText(QApplication::translate("StuProfile", "WritingSkills                                  ", 0));
        checkBox_45->setText(QApplication::translate("StuProfile", "Prefered", 0));
        label_61->setText(QApplication::translate("StuProfile", "DeadlinePunctuality                   ", 0));
        checkBox_46->setText(QApplication::translate("StuProfile", "Prefered", 0));
        label_62->setText(QApplication::translate("StuProfile", "LeadershipAbility                        ", 0));
        checkBox_47->setText(QApplication::translate("StuProfile", "Prefered", 0));
        label_63->setText(QApplication::translate("StuProfile", "WorkEthic                                      ", 0));
        checkBox_48->setText(QApplication::translate("StuProfile", "Prefered", 0));
        label_64->setText(QApplication::translate("StuProfile", "TeamWorkingAbility                  ", 0));
        checkBox_49->setText(QApplication::translate("StuProfile", "Prefered", 0));
        label_65->setText(QApplication::translate("StuProfile", "PresentationSkills                       ", 0));
        presentation_2->setText(QString());
        checkBox_50->setText(QApplication::translate("StuProfile", "Prefered", 0));
        label_66->setText(QApplication::translate("StuProfile", "AbilityToManageStress             ", 0));
        checkBox_51->setText(QApplication::translate("StuProfile", "Prefered", 0));
        label_67->setText(QApplication::translate("StuProfile", "ClassAttendance                         ", 0));
        checkBox_52->setText(QApplication::translate("StuProfile", "Prefered", 0));
        label_68->setText(QApplication::translate("StuProfile", "DistanceFromCampus               ", 0));
        checkBox_53->setText(QApplication::translate("StuProfile", "Prefered", 0));
        label_69->setText(QApplication::translate("StuProfile", "AvailableTime                              ", 0));
        checkBox_54->setText(QApplication::translate("StuProfile", "Prefered", 0));
        label_70->setText(QApplication::translate("StuProfile", "Overall CGPA                                ", 0));
        checkBox_55->setText(QApplication::translate("StuProfile", "Prefered", 0));
        label_71->setText(QApplication::translate("StuProfile", "GradeOfPrerequisiteCouse     ", 0));
        checkBox_56->setText(QApplication::translate("StuProfile", "Prefered", 0));
        label_2->setText(QApplication::translate("StuProfile", "Project list", 0));
        Back->setText(QApplication::translate("StuProfile", "Logout", 0));
    } // retranslateUi

};

namespace Ui {
    class StuProfile: public Ui_StuProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUPROFILE_H
