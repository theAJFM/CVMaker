/********************************************************************************
** Form generated from reading UI file 'basicinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICINFO_H
#define UI_BASICINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_basicinfo
{
public:
    QLineEdit *name;
    QLabel *label;
    QLineEdit *email;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *phone;
    QLineEdit *website;
    QTextEdit *address;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QDialog *basicinfo)
    {
        if (basicinfo->objectName().isEmpty())
            basicinfo->setObjectName(QStringLiteral("basicinfo"));
        basicinfo->resize(612, 425);
        name = new QLineEdit(basicinfo);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(40, 60, 201, 22));
        label = new QLabel(basicinfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 81, 16));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QStringLiteral("color:#3cbb76;"));
        email = new QLineEdit(basicinfo);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(340, 60, 201, 22));
        label_2 = new QLabel(basicinfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 40, 91, 16));
        label_2->setStyleSheet(QStringLiteral("color:#3cbb76;"));
        label_3 = new QLabel(basicinfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 110, 81, 16));
        label_3->setStyleSheet(QStringLiteral("color:#3cbb76;"));
        label_4 = new QLabel(basicinfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(340, 110, 81, 16));
        label_4->setStyleSheet(QStringLiteral("color:#3cbb76;"));
        label_6 = new QLabel(basicinfo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 180, 81, 16));
        label_6->setStyleSheet(QStringLiteral("color:#3cbb76;"));
        phone = new QLineEdit(basicinfo);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setGeometry(QRect(40, 130, 201, 22));
        website = new QLineEdit(basicinfo);
        website->setObjectName(QStringLiteral("website"));
        website->setGeometry(QRect(40, 200, 201, 22));
        address = new QTextEdit(basicinfo);
        address->setObjectName(QStringLiteral("address"));
        address->setGeometry(QRect(340, 130, 201, 91));
        pushButton = new QPushButton(basicinfo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 370, 93, 28));
        pushButton_3 = new QPushButton(basicinfo);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(450, 370, 93, 28));

        retranslateUi(basicinfo);

        QMetaObject::connectSlotsByName(basicinfo);
    } // setupUi

    void retranslateUi(QDialog *basicinfo)
    {
        basicinfo->setWindowTitle(QApplication::translate("basicinfo", "Dialog", 0));
        label->setText(QApplication::translate("basicinfo", "Full Name", 0));
        label_2->setText(QApplication::translate("basicinfo", "E-mail Address", 0));
        label_3->setText(QApplication::translate("basicinfo", "Phone", 0));
        label_4->setText(QApplication::translate("basicinfo", "Address", 0));
        label_6->setText(QApplication::translate("basicinfo", "Website", 0));
        pushButton->setText(QApplication::translate("basicinfo", "OK", 0));
        pushButton_3->setText(QApplication::translate("basicinfo", "CANCEL", 0));
    } // retranslateUi

};

namespace Ui {
    class basicinfo: public Ui_basicinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICINFO_H
