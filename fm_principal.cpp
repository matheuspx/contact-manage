#include "fm_principal.h"
#include "ui_fm_principal.h"
#include "fm_pesquisacontatos.h"

fm_principal::fm_principal(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fm_principal)
{
    ui->setupUi(this);
}

fm_principal::~fm_principal()
{
    delete ui;
}

void fm_principal::on_pushButton_add_clicked()
{
    fm_novoContato f_novocontato;
    f_novocontato.exec();
}


void fm_principal::on_pushButton_2_clicked()
{
    fm_pesquisacontatos f_pesquisarcontato;
    f_pesquisarcontato.exec();
}

