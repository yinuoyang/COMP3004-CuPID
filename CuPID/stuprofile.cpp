#include "stuprofile.h"
#include "ui_stuprofile.h"
#include <QApplication>
#include <QProcess>

StuProfile::StuProfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StuProfile)
{
    ui->setupUi(this);
    Login conn;

    if(!conn.connOpen()){
        qDebug()<<"Failed to open the database";
    }else{
        qDebug()<<"connected";
    }

    QSqlQuery qry_showstu;
    QString status = "TRUE";
    qry_showstu.prepare("select * from student where LoginStatus = '"+ status +"'");

    if(qry_showstu.exec()){
        qDebug()<<"execute the query";
        while(qry_showstu.next()){
            ui->name_2->setText(qry_showstu.value(13).toString());
            ui->id_2->setText(qry_showstu.value(12).toString());
            ui->gcode_2->setText(qry_showstu.value(16).toString());
            ui->pcode_2->setText(qry_showstu.value(15).toString());
            ui->write_2->setText(qry_showstu.value(17).toString());
            ui->punc_2->setText(qry_showstu.value(14).toString());
            ui->lead_2->setText(qry_showstu.value(11).toString());
            ui->Ethic_2->setText(qry_showstu.value(10).toString());
            ui->teamwork_2->setText(qry_showstu.value(9).toString());
            ui->presentation_2->setText(qry_showstu.value(8).toString());
            ui->stress_2->setText(qry_showstu.value(7).toString());
            ui->att_2->setText(qry_showstu.value(6).toString());
            ui->distance_2->setText(qry_showstu.value(0).toString());
            ui->time_2->setText(qry_showstu.value(5).toString());
            ui->cgpa_2->setText(qry_showstu.value(4).toString());
            ui->pre_2->setText(qry_showstu.value(3).toString());

        }
       }

    name = ui->name_2->text();
    id = ui->id_2->text();
    gcode = ui->gcode_2->text();
    pcode = ui->pcode_2->text();
    write = ui->write_2->text();
    punc = ui->punc_2->text();
    lead = ui->lead_2->text();
    ethic = ui->Ethic_2->text();
    teamwork = ui->teamwork_2->text();
    presentation = ui->presentation_2->text();
    stress = ui->stress_2->text();
    att = ui->att_2->text();
    distance = ui->distance_2->text();
    time = ui->time_2->text();
    cgpa = ui->cgpa_2->text();
    pre = ui->pre_2->text();



    QSqlQueryModel* modal = new QSqlQueryModel();
    QSqlQueryModel* modal_current = new QSqlQueryModel();
    QSqlQuery* qry_showproject = new QSqlQuery(conn.mydb);
    QSqlQuery* qry_showcurrent = new QSqlQuery(conn.mydb);

    qry_showproject->prepare("select name from project");
    qry_showcurrent->prepare("select Name from project INNER JOIN EnrolledStudent ON project.project_id = EnrolledStudent.ProjectID where StudentID='"+id+"'");

    qry_showproject->exec();
    qry_showcurrent->exec();
    modal->setQuery(*qry_showproject);
    modal_current->setQuery(*qry_showcurrent);
    ui->projectList->setModel(modal);
    ui->currentList->setModel(modal_current);
    conn.connClose();

}

StuProfile::~StuProfile()
{
    delete ui;
}

void StuProfile::on_pushButton_3_clicked()
{
    name = ui->name_2->text();
    id = ui->id_2->text();
    gcode = ui->gcode_2->text();
    pcode = ui->pcode_2->text();
    write = ui->write_2->text();
    punc = ui->punc_2->text();
    lead = ui->lead_2->text();
    ethic = ui->Ethic_2->text();
    teamwork = ui->teamwork_2->text();
    presentation = ui->presentation_2->text();
    stress = ui->stress_2->text();
    att = ui->att_2->text();
    distance = ui->distance_2->text();
    time = ui->time_2->text();
    cgpa = ui->cgpa_2->text();
    pre = ui->pre_2->text();

    if(!conn.connOpen()){
        qDebug()<<"Failed to open the database";
    }else{
        qDebug()<<"connected";
    }

    QSqlQuery* updateSave = new QSqlQuery(conn.mydb);

    updateSave->prepare("update student set distance='"+distance+"',Prerequisite = '"+ pre +"',CGPA = '"+ cgpa +"',TimeAvailable = '"+ time +"' ,ClassAttendence = '"+ att +"',ManageStress = '"+ stress +"',Presetation = '"+ presentation +"',TeamWorking = '"+ teamwork +"',WorkEthic = '"+ ethic +"',Leadership = '"+ lead +"',DeadlinePunctuality = '"+ punc +"',PrimeCoding = '"+ pcode +"',GeneralCoding = '"+ gcode +"',WritingSkill = '"+ write +"' where name='"+ name +"'");
    if(updateSave->exec()){
        qDebug()<<"update succeed";
        conn.connClose();
    }else{
        qDebug()<<"update Failed";
        conn.connClose();
    }



}



void StuProfile::on_quit_clicked()
{
    QString projid,stuid;
    stuid= ui->id_2->text();

    QSqlQuery getProj;
    QSqlQuery* joinProj;

    if(!conn.connOpen()){
        qDebug()<<"Failed to open the database";
    }else{
        qDebug()<<"connected_4";
    }

    getProj = QSqlQuery(conn.mydb);
    joinProj= new QSqlQuery(conn.mydb);

    getProj.prepare("select project_id from Project where selected ='TRUE'");
    if(getProj.exec()){
        qDebug()<<"get id succeed";
        while(getProj.next()){
         projid = getProj.value(0).toString();
         qDebug()<<"This is the id";
         qDebug()<<projid;
        }
        joinProj->prepare("delete from EnrolledStudent where ProjectID='"+projid+"' and StudentID ='"+stuid+"'");
        if(joinProj->exec()){
            qDebug()<<"succeed insert";
            QSqlQuery* qry_showcurrent = new QSqlQuery(conn.mydb);

            qry_showcurrent->prepare("select Name from project INNER JOIN EnrolledStudent ON project.project_id = EnrolledStudent.ProjectID where StudentID='"+stuid+"'");
            qry_showcurrent->exec();
            QSqlQueryModel* modal_current = new QSqlQueryModel();
            modal_current->setQuery(*qry_showcurrent);

            ui->currentList->setModel(modal_current);
            conn.connClose();

        }else{
            qDebug()<<"insert failed";
            conn.connClose();
        }
    }else{
        qDebug()<<"get id failed";
        conn.connClose();
    }


}





void StuProfile::on_projectList_clicked(const QModelIndex &index)
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

    clear->prepare("update project set selected ='FALSE'");
    if(clear->exec()){
         qDebug()<<"Cleared";
         join->prepare("update project set selected = 'TRUE' where Name ='"+projname+"'");
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

void StuProfile::on_join_clicked()
{
    QString projid,stuid;
    stuid= ui->id_2->text();

    QSqlQuery getProj;
    QSqlQuery* joinProj;

    if(!conn.connOpen()){
        qDebug()<<"Failed to open the database";
    }else{
        qDebug()<<"connected_4";
    }

    getProj = QSqlQuery(conn.mydb);
    joinProj= new QSqlQuery(conn.mydb);

    getProj.prepare("select project_id from Project where selected ='TRUE'");
    if(getProj.exec()){
        qDebug()<<"get id succeed";
        while(getProj.next()){
         projid = getProj.value(0).toString();
         qDebug()<<"This is the id";
         qDebug()<<projid;
        }
        joinProj->prepare("insert into EnrolledStudent VALUES('"+projid+"','"+stuid+"')");
        if(joinProj->exec()){
            qDebug()<<"succeed insert";
            QSqlQuery* qry_showcurrent = new QSqlQuery(conn.mydb);

            qry_showcurrent->prepare("select Name from project INNER JOIN EnrolledStudent ON project.project_id = EnrolledStudent.ProjectID where StudentID='"+stuid+"'");
            qry_showcurrent->exec();
            QSqlQueryModel* modal_current = new QSqlQueryModel();
            modal_current->setQuery(*qry_showcurrent);

            ui->currentList->setModel(modal_current);
            conn.connClose();

        }else{
            qDebug()<<"insert failed";
            conn.connClose();
        }
    }else{
        qDebug()<<"get id failed";
        conn.connClose();
    }

}

void StuProfile::on_Back_clicked()
{

    if(!conn.connOpen()){
        qDebug()<<"Failed to open the database";
    }else{
        qDebug()<<"connected_4";
    }

    QSqlQuery* qry_student = new QSqlQuery(conn.mydb);
    QString status = "FALSE";

    qry_student->prepare("UPDATE STUDENT set LoginStatus='"+ status +"' where Name = '"+ name +"'");

    if(!qry_student->exec()){
        conn.connClose();
        qDebug()<<"Database reads failed.";
    }else{

     qDebug()<<"Logout.";
     conn.connClose();
     this->hide();

     qApp->quit();
     QProcess::startDetached(qApp->arguments()[0],qApp->arguments());

     }

}
