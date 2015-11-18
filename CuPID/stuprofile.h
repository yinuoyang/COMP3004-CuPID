#ifndef STUPROFILE_H
#define STUPROFILE_H
#include "login.h"

#include <QDialog>

namespace Ui {
class StuProfile;
}

class StuProfile : public QDialog
{
    Q_OBJECT

public:
    Login conn;
    explicit StuProfile(QWidget *parent = 0);
    ~StuProfile();


private slots:
    void on_pushButton_3_clicked();

    void on_quit_clicked();

    void on_projectList_clicked(const QModelIndex &index);

    void on_join_clicked();

    void on_Back_clicked();

private:
    Ui::StuProfile *ui;
    QString name,id,gcode,pcode,write,punc,lead,ethic,teamwork,presentation,stress,att,distance,time,cgpa,pre;
};

#endif // STUPROFILE_H
