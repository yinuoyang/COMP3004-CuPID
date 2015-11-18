#include "studentprofile.h"
#include "ui_studentprofile.h"

StudentProfile::StudentProfile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StudentProfile)
{
    ui->setupUi(this);

    Login conn;

    if(!conn.connOpen()){
        qDebug()<<"Failed to open the database";
    }else{
        qDebug()<<"connected";
    }

    QSqlQueryModel* modal = new QSqlQueryModel();

    QSqlQuery* qry = new QSqlQuery(conn.mydb);

    qry->prepare("select name from project");

    qry->exec();
    modal->setQuery(*qry);
    ui->comboBox->setModel(modal);
    conn.close();
    qDebug()<<(modal->rowCount());

}

StudentProfile::~StudentProfile()
{
    delete ui;
}
