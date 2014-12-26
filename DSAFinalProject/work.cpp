#include "work.h"
#include "ui_work.h"

work::work(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::work)
{
    ui->setupUi(this);
    this->setStyleSheet("QTabWidget, QMenuBar, QMenu, QStatusBar{background-color:#1e1e1e;color:#3cbb76;}QDialog{background-color:#2d2c2a;}QPushButton{background-color:#ff3535;color:#ffffff;border-radius: 5px;}QPushButton:hover{background-color:#3cbb76;color:#ffffff;border-radius: 5px;}");
}

work::~work()
{
    delete ui;
}

std::vector<std::string> work::getWork(){
    return workvector;
}

bool work::checkVector(){
    if(workvector.size() == 0){
        return false;
    }
    return true;
}

void work::on_pushButton_clicked()
{
    this->accept();//Signals that this button is used to confirm changes
    workvector.clear();
    std::string getName = ui->name->text().toStdString();
    workvector.push_back(getName);
    std::string getTitle= ui->jobTitle->text().toStdString();
    workvector.push_back(getTitle);
    std::string getPeriod= ui->period->text().toStdString();
    workvector.push_back(getPeriod);
    std::string getDescription= ui->description->toPlainText().toStdString();
    workvector.push_back(getDescription);
    ui->name->clear();
    ui->jobTitle->clear();
    ui->period->clear();
    ui->description->clear();
    this->close();
}

void work::on_pushButton_3_clicked()
{
    this->reject();
}
