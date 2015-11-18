#include "projectmanage.h"
#include "ui_projectmanage.h"
#include <qmessagebox.h>
#include "login.h"
#include <QApplication>
#include <QProcess>



ProjectManage::ProjectManage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProjectManage)
{
    ui->setupUi(this);

    if(!conn.connOpen()){
        ui->label_status->setText("Failed to open the database");
    }else{
        ui->label_status->setText("connected.....");
    }


    //This function will open the connection


   QSqlQueryModel * modal=new QSqlQueryModel();

   QSqlQuery* qryshow = new QSqlQuery(conn.mydb);

   qryshow->prepare("select Name from Project");
   qryshow->exec();

   modal->setQuery(*qryshow);
   ui->ProjList->setModel(modal);


   qDebug()<<(modal->rowCount());

   conn.connClose();
}

ProjectManage::~ProjectManage()
{
    delete ui;
}





void ProjectManage::on_Edit_clicked()
{

    Project proj;
    proj.setModal(true);
    proj.exec();


}

void ProjectManage::on_Create_clicked()
{


    if(!conn.connOpen()){
        ui->label_status->setText("Failed to open the database");
    }else{
        ui->label_status->setText("connected.....");
    }
    QSqlQuery clear = QSqlQuery(conn.mydb);


    clear.prepare("update project set selected ='FALSE'");
    if(clear.exec()){
        while(clear.next()){
         qDebug()<<"Cleared";
        }
    }else{
        qDebug()<<"Clear failed";
        conn.connClose();
    }

    Project proj;
    proj.setModal(true);
    proj.exec();

}



void ProjectManage::on_ProjList_clicked(const QModelIndex &index)
{

    const QAbstractItemModel* model = index.model();
    QString projname;
    int row = index.row();
    projname = model->data(model->index(row,0),Qt::DisplayRole).toString();
    qDebug()<<"This is the name";
    qDebug()<<projname;
    qDebug()<<"show me the row number ";
    qDebug()<<row;

    if(!conn.connOpen()){
        qDebug()<<"Failed to open the database";
    }else{
        qDebug()<<"connected_3";
    }

    QSqlQuery* clear = new QSqlQuery(conn.mydb);
    QSqlQuery* join = new QSqlQuery(conn.mydb);
    QSqlQuery qryPID  = QSqlQuery(conn.mydb);

    qryPID.prepare("select AverageTeamScore,MinimumTeamSize,MaxTeamSize from Project where Name ='"+projname+"'");
    if(qryPID.exec()){
      while(qryPID.next()){
      qDebug()<<"PPID configuration loaded";
      qDebug()<<qryPID.value(0).toString();
      ui->teamscore->setText(qryPID.value(0).toString());
      ui->teamsize->setText(qryPID.value(1).toString());
      ui->maxSize->setText(qryPID.value(2).toString());
      }
    }else{
      qDebug()<<"failed to load PPID";
    }

    clear->prepare("update Project set selected ='FALSE'");
    if(clear->exec()){
         qDebug()<<"Cleared";
         join->prepare("update Project set selected = 'TRUE' where Name ='"+projname+"'");
         if(join->exec()){
            qDebug()<<"update succeed";
            conn.connClose();
         }else{
             qDebug()<<"update failed";
             conn.connClose();
         }
    }else{
        qDebug()<<"Clear failed";
        conn.connClose();
    }
}

void ProjectManage::on_back_clicked()
{
    conn.connClose();
    this->hide();

    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0],qApp->arguments());

}

void ProjectManage::on_Save_clicked()
{
    QString size,score,MaxSize;

    if(!conn.connOpen()){
        ui->label_status->setText("Failed to open the database");
    }else{
        ui->label_status->setText("connected.....");
    }

    size = ui->teamsize->text();
    score = ui->teamscore->text();
    MaxSize = ui->maxSize->text();

    QSqlQueryModel * modal=new QSqlQueryModel();

    QSqlQuery* qryshow = new QSqlQuery(conn.mydb);

    qryshow->prepare("update Project set MinimumTeamSize = '"+ size +"',MaxTeamSize = '"+MaxSize+"',AverageTeamScore = '"+ score +"' where selected ='TRUE'");

    if(qryshow->exec()){
        qDebug()<<"This works.";

    }else{
      qDebug()<<"This not works.";
    }
}

void ProjectManage::on_pushButton_clicked()
{

    if(!conn.connOpen()){
        ui->label_status->setText("Failed to open the database");
    }else{
        ui->label_status->setText("connected.....");
    }


    //This function will open the connection


   QSqlQueryModel * modal=new QSqlQueryModel();

   QSqlQuery* qryshow = new QSqlQuery(conn.mydb);

   qryshow->prepare("select Name from Project");
   qryshow->exec();

   modal->setQuery(*qryshow);
   ui->ProjList->setModel(modal);


   qDebug()<<(modal->rowCount());

   conn.connClose();

}
