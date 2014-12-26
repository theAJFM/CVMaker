#include "skills.h"
#include "ui_skills.h"

skills::skills(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::skills)
{
    ui->setupUi(this);
    this->setStyleSheet("QTabWidget, QMenuBar, QMenu, QStatusBar{background-color:#1e1e1e;color:#3cbb76;}QDialog{background-color:#2d2c2a;}QPushButton{background-color:#ff3535;color:#ffffff;border-radius: 5px;}QPushButton:hover{background-color:#3cbb76;color:#ffffff;border-radius: 5px;}");
}

skills::~skills()
{
    delete ui;
}

void skills::on_pushButton_clicked(){
    this->accept();//Signals that this button is used to confirm changes
    skillvector.clear();
    std::string getName = ui->name->text().toStdString();
    skillvector.push_back(getName);
    std::string getDescription= ui->description->toPlainText().toStdString();
    skillvector.push_back(getDescription);
    ui->name->clear();
    ui->description->clear();
    this->close();
}

std::vector<std::string> skills::getSkill(){
    return skillvector;
}

bool skills::checkVector(){
    if(skillvector.size() == 0){
        return false;
    }
    return true;
}

void skills::on_pushButton_3_clicked()
{
    this->reject();
}
