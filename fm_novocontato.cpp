#include "fm_novocontato.h"
#include "ui_fm_novocontato.h"
#include <QGraphicsDropShadowEffect> // Inclua o cabeçalho para o efeito de sombra

fm_novoContato::fm_novoContato(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fm_novoContato)
{
    ui->setupUi(this);

    // Crie o efeito de sombra
    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect(this);
    shadowEffect->setBlurRadius(10);      // Ajuste o nível de desfoque da sombra
    shadowEffect->setOffset(5, 5);        // Defina o deslocamento da sombra
    shadowEffect->setColor(QColor(0, 0, 0, 160)); // Defina a cor da sombra (aqui é preta com transparência)

    // Aplique o efeito de sombra ao seu QGroupBox
    ui->groupBox->setGraphicsEffect(shadowEffect);
}

fm_novoContato::~fm_novoContato()
{
    delete ui;
}

void fm_novoContato::on_pushButton_gravar_clicked()
{
    QString nome = ui->text_nome->text();
    QString tell = ui->text_tell->text();
    QString email = ui->text_email->text();
    QSqlQuery query;

    if (!nome.isEmpty() && !tell.isEmpty() && !email.isEmpty()) {
        query.prepare("insert into tb_contatos (nome_contato, telefone_contato, email_contato) values ('" + nome + "','" + tell + "','" + email + "')");
    } else {
        QMessageBox::information(this, "", "Campos inválidos");
    }

    if (query.exec()) {
        QMessageBox::information(this, "", "Registro gravado com sucesso");
        ui->text_nome->clear();
        ui->text_tell->clear();
        ui->text_email->clear();
        ui->text_nome->setFocus();
        this->close();
    } else {
        qDebug() << "Erro ao inserir registro";
    }
}

void fm_novoContato::on_pushButton_cancelar_clicked()
{
    this->close(); // Fecha a janela atual
}
