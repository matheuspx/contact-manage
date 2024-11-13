#ifndef FM_NOVOCONTATO_H
#define FM_NOVOCONTATO_H

#include <QDialog>
#include <QSqlQuery>
#include <QMessageBox>
#include <QtSql>
namespace Ui {
class fm_novoContato;
}

class fm_novoContato : public QDialog
{
    Q_OBJECT

public:
    explicit fm_novoContato(QWidget *parent = nullptr);
    ~fm_novoContato();

private slots:
    void on_pushButton_gravar_clicked();

    void on_pushButton_cancelar_clicked();

private:
    Ui::fm_novoContato *ui;
};

#endif // FM_NOVOCONTATO_H
