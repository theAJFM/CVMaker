/********************************************************************************
** Form generated from reading UI file 'templating.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATING_H
#define UI_TEMPLATING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_templating
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;
    QGraphicsView *graphicsView;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *templating)
    {
        if (templating->objectName().isEmpty())
            templating->setObjectName(QStringLiteral("templating"));
        templating->resize(800, 600);
        centralwidget = new QWidget(templating);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(320, 350, 181, 22));
        comboBox->setStyleSheet(QLatin1String("background-color:#ff3535;\n"
"font: 75 8pt \"Nevis\";\n"
"color:white;\n"
"border-radius: 3px;"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(160, 80, 480, 254));
        graphicsView->setMinimumSize(QSize(480, 254));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 40, 191, 41));
        QFont font;
        font.setFamily(QStringLiteral("Nevis"));
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("color:white;\n"
""));
        buttonBox = new QDialogButtonBox(centralwidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(320, 420, 193, 31));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        templating->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(templating);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        templating->setStatusBar(statusbar);

        retranslateUi(templating);

        QMetaObject::connectSlotsByName(templating);
    } // setupUi

    void retranslateUi(QMainWindow *templating)
    {
        templating->setWindowTitle(QApplication::translate("templating", "MainWindow", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("templating", "DEFAULT", 0)
         << QApplication::translate("templating", "FLAT #1", 0)
        );
        label->setText(QApplication::translate("templating", "CHOOSE YOUR TEMPLATE", 0));
    } // retranslateUi

};

namespace Ui {
    class templating: public Ui_templating {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATING_H
