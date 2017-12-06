#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
#include <QFile>
#include <QVariantList>

#define DATABASE_NAME       "mydatabase.sqlite"

#define TABLE                   "satellite"
#define TABLE_NAME              "sat_name"
#define TABLE_I                 "sat_i_naklonenie"
#define TABLE_W                 "sat_w_perigey"
#define TABLE_E                 "sat_e_ekscentrisitet"
#define TABLE_M                 "sat_M_anomalia"
#define TABLE_n                 "sat_n_dvigenie"
#define TABLE_d                 "sat_d_dolgota"
#define TABLE_t0                "sat_t0"

class DbManager
{
public:
    QSqlDatabase my_db;//объект БД, с которым будем работать
    QSqlQuery *query;
    DbManager();
    ~DbManager();
    void connectToDataBase();
    bool insertIntoTable(const QVariantList &data);

private:
    /*внутренние методы для работы с БД*/
    void openDataBase();

    void closeDataBase();

};

#endif // DBMANAGER_H
