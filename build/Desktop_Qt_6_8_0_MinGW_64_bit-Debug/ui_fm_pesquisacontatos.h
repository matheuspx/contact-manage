/********************************************************************************
** Form generated from reading UI file 'fm_pesquisacontatos.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PESQUISACONTATOS_H
#define UI_FM_PESQUISACONTATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_pesquisacontatos
{
public:
    QGroupBox *groupBox;
    QTableWidget *tw_contatos;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pb_excluir;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_pesquisarnome;
    QPushButton *pb_pesquisar;

    void setupUi(QDialog *fm_pesquisacontatos)
    {
        if (fm_pesquisacontatos->objectName().isEmpty())
            fm_pesquisacontatos->setObjectName("fm_pesquisacontatos");
        fm_pesquisacontatos->resize(760, 600);
        fm_pesquisacontatos->setStyleSheet(QString::fromUtf8("background:#4169E1;  /* Gradiente de cinza para branco */\n"
"border: none;  /* Remove a borda */\n"
"\n"
""));
        groupBox = new QGroupBox(fm_pesquisacontatos);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 40, 671, 491));
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
        tw_contatos = new QTableWidget(groupBox);
        tw_contatos->setObjectName("tw_contatos");
        tw_contatos->setGeometry(QRect(30, 150, 611, 241));
        tw_contatos->setStyleSheet(QString::fromUtf8("background: #FFFFFF;\n"
"\n"
""));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 450, 191, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pb_excluir = new QPushButton(layoutWidget);
        pb_excluir->setObjectName("pb_excluir");
        pb_excluir->setStyleSheet(QString::fromUtf8(" border: 1px solid #888888; \n"
"       border-radius: 6px;\n"
"       padding: 5px;\n"
"       background-color: #d3d3d3;\n"
"      color: #333333;"));

        horizontalLayout_2->addWidget(pb_excluir);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 30, 551, 49));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("\n"
"    background: #FFFFFF;\n"
"  \n"
""));

        horizontalLayout->addWidget(label);

        txt_pesquisarnome = new QLineEdit(layoutWidget1);
        txt_pesquisarnome->setObjectName("txt_pesquisarnome");
        txt_pesquisarnome->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 3px 15px;             /* Espa\303\247amento interno */\n"
"    border-radius: 15px;            /* Bordas arredondadas */\n"
"    border: 2px solid #ccc;         /* Borda com cor leve */\n"
"    font-size: 16px;                /* Tamanho da fonte */\n"
"    background-color: white;        /* Cor de fundo */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #007bff;      /* Cor da borda ao focar */\n"
"    background-color: #f0f8ff;      /* Cor de fundo ao focar */\n"
"}\n"
""));

        horizontalLayout->addWidget(txt_pesquisarnome);

        pb_pesquisar = new QPushButton(layoutWidget1);
        pb_pesquisar->setObjectName("pb_pesquisar");
        pb_pesquisar->setStyleSheet(QString::fromUtf8("border: 1px solid #888888;\n"
"border-radius: 6px;\n"
"padding: 10px 20px; \n"
"background-color: #d3d3d3;\n"
"color: #333333;"));

        horizontalLayout->addWidget(pb_pesquisar);


        retranslateUi(fm_pesquisacontatos);

        QMetaObject::connectSlotsByName(fm_pesquisacontatos);
    } // setupUi

    void retranslateUi(QDialog *fm_pesquisacontatos)
    {
        fm_pesquisacontatos->setWindowTitle(QCoreApplication::translate("fm_pesquisacontatos", "Dialog", nullptr));
        groupBox->setTitle(QString());
        pb_excluir->setText(QCoreApplication::translate("fm_pesquisacontatos", "Excluir", nullptr));
        label->setText(QCoreApplication::translate("fm_pesquisacontatos", "Pesquisar nome", nullptr));
        txt_pesquisarnome->setText(QString());
        pb_pesquisar->setText(QCoreApplication::translate("fm_pesquisacontatos", "Pesquisar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_pesquisacontatos: public Ui_fm_pesquisacontatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PESQUISACONTATOS_H
