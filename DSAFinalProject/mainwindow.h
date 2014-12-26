#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWebKitWidgets>
#include <QWebFrame>
#include <QRegExp>
#include <QWidget>
#include <QPrinter>
#include <iostream>
#include <map>
#include <unordered_map>
#include <QFileDialog>
#include <QMessageBox>
#include <QDataStream>
#include <QTextStream>
#include <QIODevice>
#include <QDialog>
#include <QWebView>
#include <vector>
#include <regex>
#include "templating.h"
#include "basicinfo.h"
#include "education.h"
#include "skills.h"
#include "work.h"
#include "image.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots://Put event handlers on slots
    void on_education_clicked();//event handler for the education button
    void on_pushButton_2_clicked();//event handler for the clear button
    void on_skills_clicked();//event handler for the skills button
    void on_actionSave_triggered();//event handler for the save button on the menu bar
    void on_actionOpen_triggered();//event handler for the open button on the menu bar
    void on_actionSave_As_triggered();//event handler for the save as button on the menu bar
    void on_actionDark_Theme_triggered();//event handler for the dark checklist
    void on_actionLight_Theme_triggered();//event handler for the light checklist
    void on_checkBox_clicked();//event handler for the html mode checkbox
    void on_checkBox_2_clicked();//event handler for the easy mode checkbox
    void on_basicInfo_clicked();//event handler for the basic info button

    void on_selectTemplate_clicked();//event handler for the template selection button

    void on_pushButton_clicked();//event handler for the save button

    void on_work_clicked();//event handler for the work button
    void on_htmlgen_clicked();//event handler for the generate html button

    void on_image_clicked();//event handler for the image selection button

private:
    int edunum;//number of education info inputted
    int skillsnum;//number of skills info inputted
    int worknum;//number of work info inputted
    std::unordered_map<std::string, std::vector<std::string>> elementmap;//hash map that contains the elements to be interpreted by the engine
    std::vector<std::string> outmap;//vector that contains the elements to be written in the file
    void generateHTML();//function for closure purpose
    bool saved;//boolean that signifies whether a file is saved already or not
    QString savedFile;//directory of saved file
    void saveFile();//function for closure purpose
    //These are the class instances that consitute the whole program
    work workexp;
    skills skill;
    basicinfo info;
    templating test;
    education edu;
    image img;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
