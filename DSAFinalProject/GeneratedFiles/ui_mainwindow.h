/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionOpen;
    QAction *actionPreview;
    QAction *actionDark_Theme;
    QAction *actionLight_Theme;
    QAction *actionSave_As;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QPushButton *education;
    QPushButton *skills;
    QPushButton *image;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *basicInfo;
    QPushButton *work;
    QPushButton *selectTemplate;
    QPushButton *htmlgen;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuDisplay;
    QMenu *menuText_Editor;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1102, 737);
        MainWindow->setBaseSize(QSize(800, 600));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon;
        icon.addFile(QStringLiteral("../Documents/flat_miniset/png/64/diskette.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../Documents/flat_miniset/png/64/folder2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionPreview = new QAction(MainWindow);
        actionPreview->setObjectName(QStringLiteral("actionPreview"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../Documents/flat_miniset/png/64/monitor.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreview->setIcon(icon2);
        actionDark_Theme = new QAction(MainWindow);
        actionDark_Theme->setObjectName(QStringLiteral("actionDark_Theme"));
        actionDark_Theme->setCheckable(true);
        actionLight_Theme = new QAction(MainWindow);
        actionLight_Theme->setObjectName(QStringLiteral("actionLight_Theme"));
        actionLight_Theme->setCheckable(true);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionSave_As->setIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 620, 93, 28));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(860, 620, 93, 28));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(160, 30, 791, 571));
        textEdit->setStyleSheet(QStringLiteral(""));
        education = new QPushButton(centralWidget);
        education->setObjectName(QStringLiteral("education"));
        education->setGeometry(QRect(970, 130, 93, 41));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../Documents/flat_miniset/png/64/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        education->setIcon(icon3);
        skills = new QPushButton(centralWidget);
        skills->setObjectName(QStringLiteral("skills"));
        skills->setGeometry(QRect(970, 190, 93, 41));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../Documents/flat_miniset/png/64/certificate.png"), QSize(), QIcon::Normal, QIcon::Off);
        skills->setIcon(icon4);
        image = new QPushButton(centralWidget);
        image->setObjectName(QStringLiteral("image"));
        image->setGeometry(QRect(970, 310, 93, 41));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../Documents/flat_miniset/png/64/trophy.png"), QSize(), QIcon::Normal, QIcon::Off);
        image->setIcon(icon5);
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 210, 101, 20));
        checkBox->setAutoFillBackground(false);
        checkBox->setStyleSheet(QStringLiteral("color:white;"));
        checkBox->setChecked(true);
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(20, 250, 101, 20));
        checkBox_2->setStyleSheet(QLatin1String("color:white;\n"
""));
        basicInfo = new QPushButton(centralWidget);
        basicInfo->setObjectName(QStringLiteral("basicInfo"));
        basicInfo->setGeometry(QRect(970, 70, 93, 41));
        work = new QPushButton(centralWidget);
        work->setObjectName(QStringLiteral("work"));
        work->setGeometry(QRect(970, 250, 93, 41));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../Documents/flat_miniset/png/64/briefcase.png"), QSize(), QIcon::Normal, QIcon::Off);
        work->setIcon(icon6);
        selectTemplate = new QPushButton(centralWidget);
        selectTemplate->setObjectName(QStringLiteral("selectTemplate"));
        selectTemplate->setGeometry(QRect(480, 620, 161, 28));
        htmlgen = new QPushButton(centralWidget);
        htmlgen->setObjectName(QStringLiteral("htmlgen"));
        htmlgen->setGeometry(QRect(490, 650, 141, 28));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1102, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuDisplay = new QMenu(menuBar);
        menuDisplay->setObjectName(QStringLiteral("menuDisplay"));
        menuText_Editor = new QMenu(menuDisplay);
        menuText_Editor->setObjectName(QStringLiteral("menuText_Editor"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuDisplay->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuTools->addAction(actionPreview);
        menuDisplay->addAction(menuText_Editor->menuAction());
        menuText_Editor->addAction(actionDark_Theme);
        menuText_Editor->addAction(actionLight_Theme);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionPreview->setText(QApplication::translate("MainWindow", "Preview", 0));
        actionPreview->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        actionDark_Theme->setText(QApplication::translate("MainWindow", "Dark Theme", 0));
        actionLight_Theme->setText(QApplication::translate("MainWindow", "Light Theme", 0));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", 0));
        actionSave_As->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0));
        pushButton->setText(QApplication::translate("MainWindow", "SAVE", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "CLEAR", 0));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Meslo LG S DZ'; font-size:10pt;\"><br /></p></body></html>", 0));
        education->setText(QApplication::translate("MainWindow", "Education", 0));
        skills->setText(QApplication::translate("MainWindow", "Skills", 0));
        image->setText(QApplication::translate("MainWindow", "Image", 0));
        checkBox->setText(QApplication::translate("MainWindow", "HTML mode", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "Easy mode", 0));
        basicInfo->setText(QApplication::translate("MainWindow", "INFO", 0));
        work->setText(QApplication::translate("MainWindow", "Work", 0));
        selectTemplate->setText(QApplication::translate("MainWindow", "SELECT TEMPLATE", 0));
        htmlgen->setText(QApplication::translate("MainWindow", "GENERATE HTML", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0));
        menuDisplay->setTitle(QApplication::translate("MainWindow", "Display", 0));
        menuText_Editor->setTitle(QApplication::translate("MainWindow", "Text Editor", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
