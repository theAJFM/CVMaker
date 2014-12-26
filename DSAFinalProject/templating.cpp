#include "templating.h"
#include "ui_templating.h"
#include <iostream>

templating::templating(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::templating)
{
    ui->setupUi(this);
    this->setStyleSheet("QTextEdit{background:#202020;color:#d64a19;font-family:\"Meslo LG S DZ\";font-size:10pt;}QTabWidget, QMenuBar, QMenu, QStatusBar{background-color:#1e1e1e;color:#3cbb76;}QMainWindow{background-color:#2d2c2a;}QPushButton{background-color:#ff3535;color:#ffffff;border-radius: 5px;}QPushButton:hover{background-color:#3cbb76;color:#ffffff;border-radius: 5px;}");
    scene = new QGraphicsScene();
    QImage image(":html-templates/0/screen.png");
    scene->addPixmap(QPixmap::fromImage(image));
    ui->graphicsView->setScene(scene);
    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)),this, SLOT(handleSelectionChanged(int)));//Event handler for the combobox
}

templating::~templating()
{
    delete ui;
}

void templating::handleSelectionChanged(int index){//Event handler to select the template for the CV
    scene = new QGraphicsScene();
    QString directory = QString(":/html-templates/%1/screen.png").arg(index);
    QImage image(directory);
    chosenindex = index;
    scene->addPixmap(QPixmap::fromImage(image));
    ui->graphicsView->setScene(scene);//Display image to the graphics view
}

void templating::on_buttonBox_accepted()//If the ok button is triggered, call this function
{
    htmltemplate = QString(":/html-templates/%1/index.html").arg(chosenindex);
    this->close();
}

QString templating::getTemplate(){//get the directory of the template
    return htmltemplate;
}

int templating::getIndex(){//get index of the selected template
    return chosenindex;
}

void templating::on_buttonBox_rejected()//If the cancel button is triggered, call this function
{
    this->close();
}
