#include "basicinfo.h"
#include "ui_basicinfo.h"
#include <iostream>

basicinfo::basicinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::basicinfo)
{
    ui->setupUi(this);
    this->setStyleSheet("QTabWidget, QMenuBar, QMenu, QStatusBar{background-color:#1e1e1e;color:#3cbb76;}QDialog{background-color:#2d2c2a;}QPushButton{background-color:#ff3535;color:#ffffff;border-radius: 5px;}QPushButton:hover{background-color:#3cbb76;color:#ffffff;border-radius: 5px;}");
}

basicinfo::~basicinfo()
{
    delete ui;
}

void basicinfo::on_pushButton_clicked(){
    this->accept();//Signals that this button is used to confirm changes
    infovector.clear();
    std::string getName = ui->name->text().toStdString();
    infovector.push_back(getName);
    std::string getEmail= ui->email->text().toStdString();
    infovector.push_back(getEmail);
    std::string getPhone= ui->phone->text().toStdString();
    infovector.push_back(getPhone);
    std::string getWebsite= ui->website->text().toStdString();
    infovector.push_back(getWebsite);
    std::string getAddress= ui->address->toPlainText().toStdString();
    infovector.push_back(getAddress);
    this->close();
}

std::vector<std::string> basicinfo::getInfo(){
    return infovector;
}

bool basicinfo::checkVector(){
    if(infovector.size() == 0){
        return false;
    }
    return true;
}

void basicinfo::on_pushButton_3_clicked()
{
    this->reject();
}
