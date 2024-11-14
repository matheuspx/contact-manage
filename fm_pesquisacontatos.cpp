#include "fm_pesquisacontatos.h"
#include "ui_fm_pesquisacontatos.h"
#include <QtSql>
#include <QMessageBox>
#include "fm_novocontato.h"

fm_pesquisacontatos::fm_pesquisacontatos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fm_pesquisacontatos)
{
    ui->setupUi(this);

    // Aplicando cor de fundo apenas ao QDialog e ao QGroupBox, sem afetar widgets internos
    this->setStyleSheet("QDialog { background-color: lightgray; } QGroupBox { background-color: #f0f0f0; }");

    // Estilizando o QLineEdit para evitar sobreposição de cores
    ui->txt_pesquisarnome->setStyleSheet("background-color: white; color: black;");

    QSqlQuery query;
    query.prepare("select * from tb_contatos");
    if(query.exec()) {
        int cont = 0;
        ui->tw_contatos->setColumnCount(4);

        while(query.next()) {
            ui->tw_contatos->insertRow(cont);
            ui->tw_contatos->setItem(cont, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tw_contatos->setItem(cont, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tw_contatos->setItem(cont, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->tw_contatos->setItem(cont, 3, new QTableWidgetItem(query.value(3).toString()));
            ui->tw_contatos->setRowHeight(cont, 20);
            cont++;
        }

        // Configurando colunas da tabela
        ui->tw_contatos->setColumnWidth(0, 30);
        ui->tw_contatos->setColumnWidth(1, 150);
        ui->tw_contatos->setColumnWidth(3, 230);

        // Definindo cabeçalhos e comportamentos da tabela
        QStringList cabeçalhos = {"ID", "Nome", "Telefone", "E-mail"};
        ui->tw_contatos->setHorizontalHeaderLabels(cabeçalhos);
        ui->tw_contatos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_contatos->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_contatos->verticalHeader()->setVisible(false);
        ui->tw_contatos->setStyleSheet("QTableView { selection-background-color: blue; }");

    } else {
        QMessageBox::warning(this, "ERRO", "Erro ao pesquisar os contatos");
    }
}

fm_pesquisacontatos::~fm_pesquisacontatos()
{
    delete ui;
}

void fm_pesquisacontatos::on_pb_excluir_clicked()
{
    int linha = ui->tw_contatos->currentRow();
    if (linha == -1) {
        QMessageBox::warning(this, "Erro", "Por favor, selecione um registro para excluir.");
        return;
    }

    int id = ui->tw_contatos->item(linha, 0)->text().toInt();
    QSqlQuery query;
    query.prepare("DELETE FROM tb_contatos WHERE id_contato = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        QMessageBox::information(this, "", "Registro excluído com sucesso.");
        ui->tw_contatos->removeRow(linha);
    } else {
        QMessageBox::warning(this, "Erro", "Erro ao excluir registro: " + query.lastError().text());
    }
}

void fm_pesquisacontatos::on_pb_pesquisar_clicked()
{
    QString nomeProcurado = ui->txt_pesquisarnome->text();
    QSqlQuery query;
    query.prepare("SELECT * FROM tb_contatos WHERE nome_contato LIKE :nome");
    query.bindValue(":nome", "%" + nomeProcurado + "%");

    if(query.exec()) {
        ui->tw_contatos->setRowCount(0);

        int row = 0;
        while(query.next()) {
            ui->tw_contatos->insertRow(row);
            ui->tw_contatos->setItem(row, 0, new QTableWidgetItem(query.value("id_contato").toString()));
            ui->tw_contatos->setItem(row, 1, new QTableWidgetItem(query.value("nome_contato").toString()));
            ui->tw_contatos->setItem(row, 2, new QTableWidgetItem(query.value("telefone_contato").toString()));
            ui->tw_contatos->setItem(row, 3, new QTableWidgetItem(query.value("email_contato").toString()));
            row++;
        }
    } else {
        QMessageBox::warning(this, "Erro", "Erro ao buscar no banco de dados: " + query.lastError().text());
    }
}

void fm_pesquisacontatos::on_pb_editar_clicked()
{
    fm_novoContato f_pesquisar;
    f_pesquisar.exec();
}
