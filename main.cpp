#include "janelalogin.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Configura e abre o banco de dados
    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");
    bancoDeDados.setDatabaseName("C:/Users/000/Documents/agenda/agenda_db.db");

    // Verificar se o banco de dados foi aberto com sucesso
    if (!bancoDeDados.open()) {
        qDebug() << "Erro ao abrir o banco de dados:" << bancoDeDados.lastError().text();
        return -1;  // Encerra o programa se não conseguir abrir o banco
    } else {
        qDebug() << "Banco de dados aberto com sucesso no caminho:" << bancoDeDados.databaseName();
    }

    janelalogin w;
    w.show();

    return a.exec();
}
