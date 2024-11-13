/********************************************************************************
** Form generated from reading UI file 'fm_novocontato.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_NOVOCONTATO_H
#define UI_FM_NOVOCONTATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_fm_novoContato
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_gravar;
    QPushButton *pushButton_cancelar;
    QLineEdit *text_email;
    QLineEdit *text_tell;
    QLineEdit *text_nome;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *fm_novoContato)
    {
        if (fm_novoContato->objectName().isEmpty())
            fm_novoContato->setObjectName("fm_novoContato");
        fm_novoContato->resize(760, 600);
        fm_novoContato->setStyleSheet(QString::fromUtf8("\n"
"    QDialog{background:#4169E1;  /* Gradiente de cinza para branco */\n"
"    border: none;  /* Remove a borda */\n"
"}\n"
""));
        groupBox = new QGroupBox(fm_novoContato);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(160, 40, 411, 491));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background: #FFFFFF;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    box-shadow: 5px 5px 15px rgba(0, 0, 0, 0.4); /* Sombra forte */\n"
"}\n"
"\n"
"QGroupBox:title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 5px;\n"
"}\n"
""));
        pushButton_gravar = new QPushButton(groupBox);
        pushButton_gravar->setObjectName("pushButton_gravar");
        pushButton_gravar->setGeometry(QRect(120, 340, 171, 28));
        pushButton_gravar->setStyleSheet(QString::fromUtf8(" border: 1px solid #888888; \n"
"       border-radius: 6px;\n"
"       padding: 5px;\n"
"       background-color: #4169E1;\n"
"      color: #FFFFFF;\n"
"		font: bold;"));
        pushButton_cancelar = new QPushButton(groupBox);
        pushButton_cancelar->setObjectName("pushButton_cancelar");
        pushButton_cancelar->setGeometry(QRect(120, 390, 171, 28));
        pushButton_cancelar->setStyleSheet(QString::fromUtf8(" border: 1px solid #888888; \n"
"       border-radius: 6px;\n"
"       padding: 5px;\n"
"       background-color: #FF0000;\n"
"      color: #FFFFFF;\n"
"	font:bold;"));
        text_email = new QLineEdit(groupBox);
        text_email->setObjectName("text_email");
        text_email->setGeometry(QRect(50, 230, 301, 30));
        text_email->setStyleSheet(QString::fromUtf8(" border: 1px solid #888888; \n"
"       border-radius: 6px;\n"
"       padding: 5px;\n"
"       background-color: #d3d3d3;\n"
"      color: #333333;"));
        text_tell = new QLineEdit(groupBox);
        text_tell->setObjectName("text_tell");
        text_tell->setGeometry(QRect(50, 160, 301, 30));
        text_tell->setStyleSheet(QString::fromUtf8(" border: 1px solid #888888; \n"
"       border-radius: 6px;\n"
"       padding: 5px;\n"
"       background-color: #d3d3d3;\n"
"      color: #333333;"));
        text_nome = new QLineEdit(groupBox);
        text_nome->setObjectName("text_nome");
        text_nome->setGeometry(QRect(50, 90, 301, 30));
        text_nome->setStyleSheet(QString::fromUtf8(" border: 1px solid #888888; \n"
"       border-radius: 6px;\n"
"       padding: 5px;\n"
"       background-color: #d3d3d3;\n"
"      color: #333333;"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 70, 91, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 210, 91, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 140, 91, 16));

        retranslateUi(fm_novoContato);

        QMetaObject::connectSlotsByName(fm_novoContato);
    } // setupUi

    void retranslateUi(QDialog *fm_novoContato)
    {
        fm_novoContato->setWindowTitle(QCoreApplication::translate("fm_novoContato", "Dialog", nullptr));
        groupBox->setTitle(QString());
        pushButton_gravar->setText(QCoreApplication::translate("fm_novoContato", "Registrar", nullptr));
        pushButton_cancelar->setText(QCoreApplication::translate("fm_novoContato", "Cancelar", nullptr));
        label->setText(QCoreApplication::translate("fm_novoContato", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("fm_novoContato", "Email", nullptr));
        label_3->setText(QCoreApplication::translate("fm_novoContato", "Telefone", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_novoContato: public Ui_fm_novoContato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_NOVOCONTATO_H
