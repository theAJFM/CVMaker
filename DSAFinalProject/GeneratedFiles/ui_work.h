/********************************************************************************
** Form generated from reading UI file 'work.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORK_H
#define UI_WORK_H

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

class Ui_work
{
public:
    QLabel *label_4;
    QTextEdit *description;
    QLabel *label_3;
    QLineEdit *jobTitle;
    QLineEdit *name;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLineEdit *period;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *work)
    {
        if (work->objectName().isEmpty())
            work->setObjectName(QStringLiteral("work"));
        work->resize(612, 425);
        work->setMinimumSize(QSize(0, 0));
        label_4 = new QLabel(work);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(350, 110, 81, 16));
        label_4->setStyleSheet(QStringLiteral("color:#3cbb76;"));
        description = new QTextEdit(work);
        description->setObjectName(QStringLiteral("description"));
        description->setGeometry(QRect(350, 130, 201, 91));
        label_3 = new QLabel(work);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 110, 81, 16));
        label_3->setStyleSheet(QStringLiteral("color:#3cbb76;"));
        jobTitle = new QLineEdit(work);
        jobTitle->setObjectName(QStringLiteral("jobTitle"));
        jobTitle->setGeometry(QRect(350, 60, 201, 22));
        name = new QLineEdit(work);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(50, 60, 201, 22));
        pushButton_3 = new QPushButton(work);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 370, 93, 28));
        label_2 = new QLabel(work);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 40, 91, 16));
        label_2->setStyleSheet(QStringLiteral("color:#3cbb76;"));
        period = new QLineEdit(work);
        period->setObjectName(QStringLiteral("period"));
        period->setGeometry(QRect(50, 130, 201, 22));
        label = new QLabel(work);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 191, 16));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QStringLiteral("color:#3cbb76;"));
        pushButton = new QPushButton(work);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 370, 93, 28));

        retranslateUi(work);

        QMetaObject::connectSlotsByName(work);
    } // setupUi

    void retranslateUi(QDialog *work)
    {
        work->setWindowTitle(QApplication::translate("work", "Dialog", 0));
        label_4->setText(QApplication::translate("work", "Description", 0));
        label_3->setText(QApplication::translate("work", "Period", 0));
        pushButton_3->setText(QApplication::translate("work", "CANCEL", 0));
        label_2->setText(QApplication::translate("work", "Job Title", 0));
        label->setText(QApplication::translate("work", "Name of Company/Organization", 0));
        pushButton->setText(QApplication::translate("work", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class work: public Ui_work {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORK_H
