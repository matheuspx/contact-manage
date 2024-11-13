#ifndef JANELALOGIN_H
#define JANELALOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "fm_principal.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class janelalogin;
}
QT_END_NAMESPACE

class janelalogin : public QMainWindow
{
    Q_OBJECT

public:
    janelalogin(QWidget *parent = nullptr);
    ~janelalogin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::janelalogin *ui;
};
#endif // JANELALOGIN_H
