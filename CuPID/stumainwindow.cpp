#include "stumainwindow.h"
#include "ui_stumainwindow.h"
#include <QtCore>
#include <QtGui>

StuMainWindow::StuMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StuMainWindow)
{
    ui->setupUi(this);
}

StuMainWindow::~StuMainWindow()
{
    delete ui;
}

void StuMainWindow::on_pushButton_clicked()
{

}

void StuMainWindow::on_pushButton_3_clicked()
{
    //QMessageBox::information(this,"title","saved!");
    /*SaveProfileNotification notify;
    notify.setModal(true);
    notify.exec();*/
}
