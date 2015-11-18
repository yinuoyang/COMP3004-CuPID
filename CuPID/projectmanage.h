#ifndef PROJECTMANAGE_H
#define PROJECTMANAGE_H
#include "login.h"
#include <QDialog>
#include "project.h"


namespace Ui {
class ProjectManage;
}

class ProjectManage : public QDialog
{
    Q_OBJECT

public:
    Login conn;
    explicit ProjectManage(QWidget *parent = 0);
    ~ProjectManage();

private slots:

    void on_Edit_clicked();

    void on_Create_clicked();

    void on_ProjList_clicked(const QModelIndex &index);

    void on_back_clicked();

    void on_Save_clicked();

    void on_pushButton_clicked();

private:
    Ui::ProjectManage *ui;
    QSqlDatabase mydb;
    QString name;
};

#endif // PROJECTMANAGE_H
