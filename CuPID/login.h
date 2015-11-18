#ifndef LOGIN_H
#define LOGIN_H
#include<QMainWindow>
#include<QFileInfo>
#include<QtSql>
#include<QtDebug>
#include <QWidget>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    QSqlDatabase mydb;
    void connClose(){
        mydb.close();
        //remove the connection
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
        qDebug()<<"Database closed.";
    };

    bool connOpen(){

        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName(qApp->applicationDirPath()
                             + QDir::separator()
                             + "users.db" );

        if(!mydb.open()){
            qDebug()<<"Failed to open the database";
            return false;
        }else{
            qDebug()<<"connected.....";
            return true;
        }
    };

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_login_2_clicked();

private:
    Ui::Login *ui;

};

#endif // LOGIN_H
