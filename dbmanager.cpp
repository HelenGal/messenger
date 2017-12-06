#include "dbmanager.h"

DbManager::DbManager()
{

}
DbManager::~DbManager()
{

}
void DbManager::connectToDataBase()
{
    if(!QFile( DATABASE_NAME).exists()){
            qDebug()<< "Error: database not exists!";
    }
    else{
            openDataBase();
    }
}
void DbManager::openDataBase()
{
    my_db = QSqlDatabase::addDatabase("QPSQL","connectionMessanger");
    my_db.setDatabaseName(DATABASE_NAME);
    if(!my_db.open()){
        qDebug() <<"Error: connection with database fail";
    }
    else{
        qDebug() << "Database: connection ok";
    }

}
bool DbManager::insertIntoTable(const QVariantList &data)
{
    /* Запрос SQL формируется из QVariantList,
     * в который передаются данные для вставки в таблицу.
     * */
    //QSqlQuery query;
    query = new QSqlQuery(my_db);
    /* В начале SQL запрос формируется с ключами,
     * которые потом связываются методом bindValue
     * для подстановки данных из QVariantList
     * */
    query->prepare("INSERT INTO " TABLE " ( " TABLE_NAME ", "
                                             TABLE_I ", "
                                             TABLE_W ", "
                                             TABLE_E ","
                                             TABLE_M ","
                                             TABLE_n ","
                                             TABLE_d ","
                                             TABLE_t0 ") "
                  "VALUES (:name, :i, :w, :e, :M, :n, :d, :t0 )");
    query->bindValue(":name",data[0].toString());
    query->bindValue(":i",   data[1].toDouble());
    query->bindValue(":w",   data[2].toDouble());
    query->bindValue(":e",   data[3].toDouble());
    query->bindValue(":M",   data[4].toDouble());
    query->bindValue(":n",   data[5].toDouble());
    query->bindValue(":d",   data[6].toDouble());
    query->bindValue(":t0",  data[7].toDouble());
    // После чего выполняется запрос методом exec()
    if(!query->exec()){
        qDebug() << "error insert into " << TABLE;
        qDebug() << query->lastError();
        return false;
    } else {
        return true;
    }
    return false;
}

void DbManager::closeDataBase()
{
    my_db.close();
}
