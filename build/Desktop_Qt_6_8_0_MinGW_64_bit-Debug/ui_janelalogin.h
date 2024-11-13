/********************************************************************************
** Form generated from reading UI file 'janelalogin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELALOGIN_H
#define UI_JANELALOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_janelalogin
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *janelalogin)
    {
        if (janelalogin->objectName().isEmpty())
            janelalogin->setObjectName("janelalogin");
        janelalogin->resize(760, 600);
        janelalogin->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background:#4169E1;  /* Gradiente de cinza para branco */\n"
"    border: none;  /* Remove a borda */\n"
"}\n"
""));
        centralwidget = new QWidget(janelalogin);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(170, 30, 411, 491));
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
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 220, 289, 30));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(80, 250, 261, 30));
        lineEdit_2->setStyleSheet(QString::fromUtf8("\n"
"    QLineEdit {\n"
"       border: 1px solid #888888; \n"
"       border-radius: 6px;\n"
"       padding: 5px;\n"
"       background-color: #d3d3d3;\n"
"      color: #333333;\n"
"   }\n"
""));
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(80, 170, 261, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("\n"
"    QLineEdit {\n"
"       border: 1px solid #888888; \n"
"       border-radius: 6px;\n"
"       padding: 5px;\n"
"       background-color: #d3d3d3;\n"
"      color: #333333;\n"
"   }\n"
"\n"
""));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 150, 191, 20));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 330, 181, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"       border: 1px solid #888888; \n"
"       border-radius: 6px;\n"
"       padding: 5px;\n"
"       background-color: #4169E1;\n"
"       color: #FFFFFF;\n"
"	   font: bold;\n"
"   }\n"
"\n"
""));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 40, 81, 71));
        label->setStyleSheet(QString::fromUtf8("z-index:1;"));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/user.png")));
        label->setScaledContents(true);
        janelalogin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(janelalogin);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 760, 22));
        janelalogin->setMenuBar(menubar);
        statusbar = new QStatusBar(janelalogin);
        statusbar->setObjectName("statusbar");
        janelalogin->setStatusBar(statusbar);

        retranslateUi(janelalogin);

        QMetaObject::connectSlotsByName(janelalogin);
    } // setupUi

    void retranslateUi(QMainWindow *janelalogin)
    {
        janelalogin->setWindowTitle(QCoreApplication::translate("janelalogin", "janelalogin", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("janelalogin", "Senha", nullptr));
        label_3->setText(QCoreApplication::translate("janelalogin", "Username", nullptr));
        pushButton->setText(QCoreApplication::translate("janelalogin", "Entrar", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class janelalogin: public Ui_janelalogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELALOGIN_H
