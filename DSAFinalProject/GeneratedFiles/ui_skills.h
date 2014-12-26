/********************************************************************************
** Form generated from reading UI file 'skills.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKILLS_H
#define UI_SKILLS_H

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

class Ui_skills
{
public:
    QLineEdit *name;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QTextEdit *description;

    void setupUi(QDialog *skills)
    {
        if (skills->objectName().isEmpty())
            skills->setObjectName(QStringLiteral("skills"));
        skills->resize(612, 425);
        name = new QLineEdit(skills);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(210, 60, 201, 22));
        pushButton = new QPushButton(skills);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 260, 93, 28));
        label = new QLabel(skills);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 40, 121, 16));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QStringLiteral("color:#3cbb76;"));
        pushButton_3 = new QPushButton(skills);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(310, 260, 93, 28));
        label_4 = new QLabel(skills);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 110, 81, 16));
        label_4->setStyleSheet(QStringLiteral("color:#3cbb76;"));
        description = new QTextEdit(skills);
        description->setObjectName(QStringLiteral("description"));
        description->setGeometry(QRect(210, 130, 201, 91));

        retranslateUi(skills);

        QMetaObject::connectSlotsByName(skills);
    } // setupUi

    void retranslateUi(QDialog *skills)
    {
        skills->setWindowTitle(QApplication::translate("skills", "Dialog", 0));
        pushButton->setText(QApplication::translate("skills", "OK", 0));
        label->setText(QApplication::translate("skills", "Skill", 0));
        pushButton_3->setText(QApplication::translate("skills", "CANCEL", 0));
        label_4->setText(QApplication::translate("skills", "Description", 0));
    } // retranslateUi

};

namespace Ui {
    class skills: public Ui_skills {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKILLS_H
