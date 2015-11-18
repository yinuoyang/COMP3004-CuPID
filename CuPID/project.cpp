#include "project.h"
#include "ui_project.h"
#include "login.h"
#include "projectmanage.h"

Project::Project(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Project)
{
    ui->setupUi(this);


    if(!conn.connOpen()){
        qDebug()<<"Failed to open the database";
    }else{
        qDebug()<<"connected";
    }
     QSqlQuery getProj;

     getProj = QSqlQuery(conn.mydb);

     getProj.prepare("select Name,Due,ProjectDescription from project where selected ='TRUE'");

     if(getProj.exec()){
         while(getProj.next()){
         ui->Name->setText(getProj.value(0).toString());
         ui->due->setText(getProj.value(1).toString());
         ui->textBrowser->setText(getProj.value(2).toString());

         }
     }else{
       qDebug()<<"query execute failed";
     }


}

Project::~Project()
{
    delete ui;
}

void Project::on_cancel_clicked()
{
 this->close();
}

void Project::on_save_clicked()
{
 name = ui->Name->text();
 due  = ui->due->text();
 projectDescription = ui->textBrowser->toPlainText();

 if(!conn.connOpen()){
     qDebug()<<"Failed to open the database";
 }else{
     qDebug()<<"connected";
 }

 int counting = 0;
 QSqlQuery check = QSqlQuery(conn.mydb);
 check.prepare("select Name from project where selected = 'TRUE'");
 if(check.exec()){
     qDebug()<<"query works";
     while(check.next()){
         counting++;
         qDebug()<<"this is the amount of results";
         qDebug()<<counting;
     }

     QSqlQuery* updateSave = new QSqlQuery(conn.mydb);
     if(counting == 1){
         qDebug()<<"This is a count for update";
     updateSave->prepare("update Project set Name = '"+ name +"',Due = '"+ due +"',ProjectDescription = '"+ projectDescription+"'  where selected ='TRUE'");
     if(updateSave->exec()){
         qDebug()<<"update succeed";
         conn.connClose();
     }else{
         qDebug()<<"update Failed";
         conn.connClose();
        }
     }else{
         updateSave->prepare("insert into Project(Name,Due,ProjectDescription,selected,MinimumTeamSize,AverageTeamScore,MaxTeamSize) VALUES ( '"+ name +"','"+ due +"','"+ projectDescription+"','FALSE','3','4','5')");
         if(updateSave->exec()){
             qDebug()<<"create succeed";
             conn.connClose();
         }else{
             qDebug()<<"update Failed";
             conn.connClose();
         }
     }

 }else{
     qDebug()<<"wrong query";
 }

}
