#include "janelalogin.h"
#include "ui_janelalogin.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QGraphicsDropShadowEffect>  // Inclua a biblioteca para sombra

janelalogin::janelalogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::janelalogin)
{
    ui->setupUi(this);

    QPixmap pixmap("C:/Users/000/Downloads/user.png");
    pixmap = pixmap.scaled(100, 100, Qt::KeepAspectRatio);  // Ajusta o tamanho mantendo a proporção
    ui->label->setPixmap(pixmap);
    ui->label->setFixedSize(100, 100);  // Ajusta o QLabel para o novo tamanho

    // Adiciona o efeito de sombra ao QGroupBox
    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect(this);
    shadowEffect->setBlurRadius(15);         // Suavidade da sombra
    shadowEffect->setXOffset(5);             // Deslocamento horizontal
    shadowEffect->setYOffset(5);             // Deslocamento vertical
    shadowEffect->setColor(QColor(0, 0, 0, 100));  // Sombra preta com 40% de opacidade
    ui->groupBox->setGraphicsEffect(shadowEffect);

    // Conecta o botão de login ao slot on_pushButton_clicked
    connect(ui->pushButton, &QPushButton::clicked, this, &janelalogin::on_pushButton_clicked);



    // Verifica se a conexão com o banco de dados está aberta
    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "Erro de Conexão", "Erro: banco de dados não conectado");
        qDebug() << "Erro: banco de dados não está conectado.";
    }
}

janelalogin::~janelalogin()
{
    delete ui;
}

void janelalogin::on_pushButton_clicked()
{
    ui->pushButton->setEnabled(false);  // Desabilita o botão para evitar múltiplos cliques

    QString username = ui->lineEdit->text();
    QString senha = ui->lineEdit_2->text();

    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "Erro de Conexão", "Erro: banco de dados não está acessível");
        qDebug() << "Erro: banco de dados não está aberto";
        ui->pushButton->setEnabled(true);  // Reabilita o botão
        return;
    }

    qDebug() << "Tentativa de login com username:" << username << " e senha:" << senha;

    QSqlQuery query;
    query.prepare("SELECT * FROM tb_colaboradores WHERE username = :username AND senha = :senha");
    query.bindValue(":username", username);
    query.bindValue(":senha", senha);

    if (query.exec()) {
        if (query.first()) {
            this->close();
            fm_principal f_principal;
            f_principal.setModal(true);
            f_principal.exec();
        } else {
            QMessageBox::warning(this, "Login Falhou", "Login não efetuado. Verifique seu nome de usuário e senha.");
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
            ui->lineEdit->setFocus();
        }
    } else {
        QMessageBox::critical(this, "Erro no Banco de Dados", "Erro na execução da consulta de login.");
        qDebug() << "Erro na execução da consulta:" << query.lastError().text();
    }

    ui->pushButton->setEnabled(true);  // Reabilita o botão após a execução
}
