/********************************************************************************
** Form generated from reading UI file 'fm_principal.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PRINCIPAL_H
#define UI_FM_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_principal
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_add;

    void setupUi(QDialog *fm_principal)
    {
        if (fm_principal->objectName().isEmpty())
            fm_principal->setObjectName("fm_principal");
        fm_principal->resize(760, 600);
        layoutWidget = new QWidget(fm_principal);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(130, 410, 481, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        pushButton_add = new QPushButton(layoutWidget);
        pushButton_add->setObjectName("pushButton_add");

        horizontalLayout->addWidget(pushButton_add);


        retranslateUi(fm_principal);

        QMetaObject::connectSlotsByName(fm_principal);
    } // setupUi

    void retranslateUi(QDialog *fm_principal)
    {
        fm_principal->setWindowTitle(QCoreApplication::translate("fm_principal", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("fm_principal", "pesquisar contato", nullptr));
        pushButton_add->setText(QCoreApplication::translate("fm_principal", "Add contatos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_principal: public Ui_fm_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PRINCIPAL_H
