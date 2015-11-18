#ifndef STUDENTPROFILE_H
#define STUDENTPROFILE_H
#include "login.h"

#include <QMainWindow>

namespace Ui {
class StudentProfile;
}

class StudentProfile : public QMainWindow
{
    Q_OBJECT

public:
    explicit StudentProfile(QWidget *parent = 0);
    ~StudentProfile();


private:
    Ui::StudentProfile *ui;
};

#endif // STUDENTPROFILE_H
