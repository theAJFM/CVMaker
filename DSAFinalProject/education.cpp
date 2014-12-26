#include "education.h"
#include "ui_education.h"

education::education(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::education)
{
    ui->setupUi(this);
    this->setStyleSheet("QTabWidget, QMenuBar, QMenu, QStatusBar{background-color:#1e1e1e;color:#3cbb76;}QDialog{background-color:#2d2c2a;}QPushButton{background-color:#ff3535;color:#ffffff;border-radius: 5px;}QPushButton:hover{background-color:#3cbb76;color:#ffffff;border-radius: 5px;}");
}

education::~education()
{
    delete ui;
}

void education::on_pushButton_clicked(){
    this->accept();//Signals that this button is used to confirm changes
    eduvector.clear();
    std::string getName = ui->name->text().toStdString();
    eduvector.push_back(getName);
    std::string getDegree= ui->degree->text().toStdString();
    eduvector.push_back(getDegree);
    std::string getPeriod= ui->period->text().toStdString();
    eduvector.push_back(getPeriod);
    std::string getDescription= ui->description->toPlainText().toStdString();
    eduvector.push_back(getDescription);
    ui->name->clear();
    ui->degree->clear();
    ui->period->clear();
    ui->description->clear();
    this->close();
}

std::vector<std::string> education::getEdu(){
    return eduvector;
}

bool education::checkVector(){
    if(eduvector.size() == 0){
        return false;
    }
    return true;
}

void education::on_pushButton_3_clicked()
{
    this->reject();
}
