/********************************************************************************
** Form generated from reading UI file 'image.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGE_H
#define UI_IMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_image
{
public:
    QLabel *label;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *image)
    {
        if (image->objectName().isEmpty())
            image->setObjectName(QStringLiteral("image"));
        image->resize(612, 425);
        label = new QLabel(image);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 0, 191, 41));
        QFont font;
        font.setFamily(QStringLiteral("Nevis"));
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color:white;"));
        graphicsView = new QGraphicsView(image);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(60, 30, 480, 254));
        graphicsView->setMinimumSize(QSize(480, 254));
        pushButton = new QPushButton(image);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 310, 93, 28));
        pushButton_2 = new QPushButton(image);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 370, 93, 28));
        pushButton_3 = new QPushButton(image);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 370, 93, 28));

        retranslateUi(image);

        QMetaObject::connectSlotsByName(image);
    } // setupUi

    void retranslateUi(QDialog *image)
    {
        image->setWindowTitle(QApplication::translate("image", "Dialog", 0));
        label->setText(QApplication::translate("image", "CHOOSE IMAGE", 0));
        pushButton->setText(QApplication::translate("image", "Select File", 0));
        pushButton_2->setText(QApplication::translate("image", "OK", 0));
        pushButton_3->setText(QApplication::translate("image", "CANCEL", 0));
    } // retranslateUi

};

namespace Ui {
    class image: public Ui_image {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGE_H
