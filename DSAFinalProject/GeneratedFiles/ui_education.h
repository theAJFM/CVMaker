/********************************************************************************
** Form generated from reading UI file 'education.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDUCATION_H
#define UI_EDUCATION_H

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

class Ui_education
{
public:
    QLineEdit *degree;
    QPushButton *pushButton_3;
    QLineEdit *name;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *period;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *description;

    void setupUi(QDialog *education)
    {
        if (education->objectName().isEmpty())
            education->setObjectName(QStringLiteral("education"));
        education->resize(612, 425);
        degree = new QLineEdit(education);
        degree->setObjectName(QStringLiteral("degree"));
        degree->setGeometry(QRect(340, 60, 201, 22));
        pushButton_3 = new QPushButton(education);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(450, 370, 93, 28));
        name = new QLineEdit(education);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(40, 60, 201, 22));
        pushButton = new QPushButton(education);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 370, 93, 28));
        label = new QLabel(education);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 121, 16));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QStringLiteral("color:#3cbb76;"));
        label_2 = new QLabel(education);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 40, 91, 16));
        label_2->setStyleSheet(QStringLiteral("color:#3cbb76;"));
        period = new QLineEdit(education);
        period->setObjectName(QStringLiteral("period"));
        period->setGeometry(QRect(40, 130, 201, 22));
        label_3 = new QLabel(education);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 110, 81, 16));
        label_3->setStyleSheet(QStringLiteral("color:#3cbb76;"));
        label_4 = new QLabel(education);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(340, 110, 81, 16));
        label_4->setStyleSheet(QStringLiteral("color:#3cbb76;"));
        description = new QTextEdit(education);
        description->setObjectName(QStringLiteral("description"));
        description->setGeometry(QRect(340, 130, 201, 91));

        retranslateUi(education);

        QMetaObject::connectSlotsByName(education);
    } // setupUi

    void retranslateUi(QDialog *education)
    {
        education->setWindowTitle(QApplication::translate("education", "Dialog", 0));
        pushButton_3->setText(QApplication::translate("education", "CANCEL", 0));
        pushButton->setText(QApplication::translate("education", "OK", 0));
        label->setText(QApplication::translate("education", "Name of Institution", 0));
        label_2->setText(QApplication::translate("education", "Degree", 0));
        label_3->setText(QApplication::translate("education", "Period", 0));
        label_4->setText(QApplication::translate("education", "Description", 0));
    } // retranslateUi

};

namespace Ui {
    class education: public Ui_education {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDUCATION_H
