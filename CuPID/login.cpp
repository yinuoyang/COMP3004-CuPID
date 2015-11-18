#include "login.h"
#include "ui_login.h"
#include "stuprofile.h"
#include "projectmanage.h"



Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);


}

Login::~Login()
{
    delete ui;
}

void Login::on_login_2_clicked()
{
    //Get the user input of username and password
    QString username;
    username = ui->username->text();

    if(!connOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }
    //This function will open the connection


    QSqlQuery qry;
    qry.prepare("select * from ACCOUNT where Username='"+username+"'");

    if(qry.exec())
       {

        int count = 0;
        while(qry.next()){
            count++;
        }

        if(count == 1){
            if(username == "yyn4a55"){
            //login as administrator
              ui->label_status->setText("Username is correct.");
              connClose();
              this->hide();
              ProjectManage projman;
              projman.setModal(true);
              projman.exec();
            }
            else{
               //login as a student
                ui->label_status->setText("Username is correct.");
                //connClose();
                this->hide();
                //change login status in database
                QSqlQuery* qry_student = new QSqlQuery(mydb);
                //QSqlQueryModel* modal = new QSqlQueryModel();
                qry.prepare("select * from STUDENT where Username='"+username+"'");
                        if(qry.exec())
                           {

                            int counting = 0;
                            while(qry.next()){
                                counting++;
                            }
                            if(counting == 1){
                             QString status = "TRUE";

                             qry_student->prepare("UPDATE STUDENT set LoginStatus='"+ status +"' where Username = '"+username+"'");

                             if(!qry_student->exec()){
                                 connClose();
                                qDebug()<<"Database reads failed.";
                             }else{

                              qDebug()<<"Database reads successfully.";
                              StuProfile stupro;
                              stupro.setModal(true);
                              stupro.exec();
                              connClose();

                             }
                            }else{
                                connClose();
                                qDebug()<<"User does not not exist";
                            }
                        }


            }
        }
        if(count > 1){
            ui->label_status->setText("Duplicated username.");
        }
        if(count < 1){
            ui->label_status->setText("Username is not correct.");
        }
    }
    else{
        qDebug()<<"Failed to query the database";
        connClose();
    }
}
