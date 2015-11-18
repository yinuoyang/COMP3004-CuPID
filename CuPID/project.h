#ifndef PROJECT_H
#define PROJECT_H
#include "login.h"
#include <QDialog>

namespace Ui {
class Project;
}

class Project : public QDialog
{
    Q_OBJECT

public:
    explicit Project(QWidget *parent = 0);
    ~Project();

private slots:
    void on_cancel_clicked();

    void on_save_clicked();

private:
    Ui::Project *ui;
    QString name;
    QString due;
    QString projectDescription;
    Login conn;
    int counting;
};

#endif // PROJECT_H
