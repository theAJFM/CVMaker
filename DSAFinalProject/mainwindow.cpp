#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QFont nevis("Nevis", 8);
    QApplication::setFont(nevis);
    edunum = 0;
    skillsnum = 0;
    worknum = 0;
    ui->setupUi(this);
    ui->actionDark_Theme->setChecked(true);
    ui->selectTemplate->setDisabled(true);
    ui->education->setDisabled(true);
    ui->basicInfo->setDisabled(true);
    ui->skills->setDisabled(true);
    ui->image->setDisabled(true);
    ui->work->setDisabled(true);
    ui->menuBar->setStyle(QStyleFactory::create("fusion"));
    this->setStyleSheet("QTextEdit{background:#202020;color:#d64a19;font-family:\"Meslo LG S DZ\";font-size:10pt;}QTabWidget, QMenuBar, QMenu, QStatusBar{background-color:#1e1e1e;color:#3cbb76;}QMainWindow{background-color:#2d2c2a;}QPushButton{background-color:#ff3535;color:#ffffff;border-radius: 5px;}QPushButton:hover{background-color:#3cbb76;color:#ffffff;border-radius: 5px;}");
    saved = false;
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_education_clicked(){
    if(edu.exec() == QDialog::Accepted){
        edunum++;
        QString tag = QString("<education%1>").arg(edunum);
        ui->textEdit->append(tag);
        std::vector<std::string> outEdu = edu.getEdu();
        for(int i=0;i<outEdu.size();i++){
            QString qstr(QString::fromStdString(outEdu[i]));
            ui->textEdit->append(qstr);
        }
        ui->textEdit->append("</education>");
    }
}


void MainWindow::on_skills_clicked(){
    if(skill.exec() == QDialog::Accepted){
        skillsnum++;
        QString tag = QString("<skills%1>").arg(skillsnum);
        ui->textEdit->append(tag);
        std::vector<std::string> outSkills = skill.getSkill();
        for(int i=0;i<outSkills.size();i++){
            QString qstr(QString::fromStdString(outSkills[i]));
            ui->textEdit->append(qstr);
        }
        ui->textEdit->append("</skills>");
    }
}

void MainWindow::on_basicInfo_clicked(){
    if(info.exec() == QDialog::Accepted){
        ui->textEdit->append("<info>");
        std::vector<std::string> outInfo = info.getInfo();
        for(int i=0;i<outInfo.size();i++){
            QString qstr(QString::fromStdString(outInfo[i]));
            ui->textEdit->append(qstr);
        }
        ui->textEdit->append("</info>");
    }
}

void MainWindow::on_pushButton_2_clicked(){
    edunum = 0;
    worknum = 0;
    skillsnum = 0;
    ui->textEdit->setText("");
}
void MainWindow::on_actionSave_triggered(){
    if(saved == false){
        saveFile();
    }
    else{
        QFile file(savedFile);
        if (!file.open(QIODevice::WriteOnly)) {
            QMessageBox::information(this, tr("Unable to open file"),
                file.errorString());
            return;
        }
        QTextStream out(&file);
        QString write;
        if(ui->checkBox_2->isChecked() == true){
            write = ui->textEdit->toPlainText();
        }
        else{
            write = ui->textEdit->toPlainText();
        }
        out<<write;
    }
}

void MainWindow::on_actionSave_As_triggered(){
    saveFile();
}

void MainWindow::on_work_clicked(){
    if(workexp.exec() == QDialog::Accepted){
        worknum++;
        QString tag = QString("<work%1>").arg(worknum);
        ui->textEdit->append(tag);
        std::vector<std::string> workInfo = workexp.getWork();
        for(int i=0;i<workInfo.size();i++){
            QString qstr(QString::fromStdString(workInfo[i]));
            ui->textEdit->append(qstr);
        }
        ui->textEdit->append("</work>");
    }
}

void MainWindow::saveFile(){
    QString fileName;
    if(ui->checkBox->isChecked()){
    fileName = QFileDialog::getSaveFileName(this,
        tr("Save Resume"), "",
        tr("HyperText Markup Language format(*.html);;All Files (*)"));
    }
    else{
        fileName = QFileDialog::getSaveFileName(this,
            tr("Save Resume"), "",
            tr("Text format (*.txt);;All Files (*)"));
    }
    if (fileName.isEmpty())
        return;
    else {
        QFile file(fileName);
        savedFile = fileName;
        if (!file.open(QIODevice::WriteOnly| QIODevice::Text)) {
            QMessageBox::information(this, tr("Unable to open file"),
                file.errorString());
            return;
        }
        QTextStream out(&file);
        QString write = ui->textEdit->toPlainText();
        out<<write;
    }
    saved = true;
}

void MainWindow::on_actionOpen_triggered(){
    saved = true;
    QString fileName;
    if(ui->checkBox->isChecked()){
    fileName = QFileDialog::getOpenFileName(this,
        tr("Open Resume"), "",
        tr("HyperText Markup Language format(*.html);;All Files (*)"));
        if (fileName.isEmpty())
            return;
        else {
            edunum = 0;
            skillsnum = 0;
            worknum = 0;
            ui->textEdit->setText("");
            savedFile = fileName;
            QFile file(fileName);
            if (!file.open(QIODevice::ReadOnly| QIODevice::Text)) {
                QMessageBox::information(this, tr("Unable to open file"),
                    file.errorString());
                return;
            }
            while ( !file.atEnd() )
            {
                QString line = file.readLine();
                ui->textEdit->append(line.toHtmlEscaped());
            }
        }
    }
    else{
    fileName = QFileDialog::getOpenFileName(this,
        tr("Open Resume"), "",
        tr("Text format (*.txt);;All Files (*)"));
        if (fileName.isEmpty())
            return;
        else {
            ui->textEdit->setText("");
            savedFile = fileName;
            QFile file(fileName);
            if (!file.open(QIODevice::ReadOnly| QIODevice::Text)) {
                QMessageBox::information(this, tr("Unable to open file"),
                    file.errorString());
                return;
            }
            while ( !file.atEnd() )
            {
                QString line = file.readLine();
                line.replace(QString("\n"), QString(""));
                ui->textEdit->append(line);
            }
        }
    }
}

void MainWindow::on_actionDark_Theme_triggered(){
    ui->actionLight_Theme->setChecked(false);
    if(ui->actionDark_Theme->isChecked() == true){
    this->setStyleSheet("QTextEdit{background:#202020;color:#d64a19;font-family:\"Meslo LG S DZ\";font-size:10pt;}QMenuBar, QMenu, QStatusBar{background:#1e1e1e;color:#3cbb76;}QMainWindow{background-color:#2d2c2a;}QPushButton{background-color:#ff3535;color:#ffffff;border-radius: 5px;}QPushButton:hover{background-color:#3cbb76;color:#ffffff;border-radius: 5px;}");
    }
}

void MainWindow::on_actionLight_Theme_triggered(){
    ui->actionDark_Theme->setChecked(false);
    if(ui->actionLight_Theme->isChecked() == true){
    this->setStyleSheet("QTextEdit{background:#ffffff;color:#000000;font-family:\"Meslo LG S DZ\";font-size:10pt;}QMenuBar, QMenu, QStatusBar{background:#1e1e1e;color:#3cbb76;}QMainWindow{background-color:#2d2c2a;}QPushButton{background-color:#ff3535;color:#ffffff;border-radius: 5px;}QPushButton:hover{background-color:#3cbb76;color:#ffffff;border-radius: 5px;}");
    }
}

void MainWindow::on_checkBox_clicked(){//The easy mode will enable some buttons that are previously disabled.
    if(ui->checkBox->isChecked()==true){
        saved = false;
        ui->selectTemplate->setDisabled(true);
        ui->checkBox_2->setChecked(false);
        ui->work->setDisabled(true);
        ui->basicInfo->setDisabled(true);
        ui->education->setDisabled(true);
        ui->skills->setDisabled(true);
        ui->image->setDisabled(true);
    }
}

void MainWindow::on_checkBox_2_clicked(){//The html mode will disable some buttons that are previously enabled
    test.show();
    if(ui->checkBox_2->isChecked()==true){
        saved = false;
        edunum = 0;
        worknum = 0;
        skillsnum = 0;
        ui->selectTemplate->setDisabled(false);
        ui->checkBox->setChecked(false);
        ui->work->setDisabled(false);
        ui->basicInfo->setDisabled(false);
        ui->education->setDisabled(false);
        ui->skills->setDisabled(false);
        ui->image->setDisabled(false);
    }
}

void MainWindow::on_selectTemplate_clicked()
{
    test.show();
}

void MainWindow::on_pushButton_clicked()
{
    saveFile();
}

void MainWindow::on_htmlgen_clicked()
{
    outmap.clear();
    if(saved == false && ui->checkBox->isChecked() == false){
        saveFile();
    }
    if(ui->checkBox->isChecked() == false){
        //Reset the number of inputted fields to 0, when it's time for saving
        edunum = 0;
        worknum = 0;
        skillsnum = 0;
        QFile file(savedFile);
        if (!file.open(QIODevice::ReadOnly| QIODevice::Text)) {
            QMessageBox::information(this, tr("Unable to open file"),
                file.errorString());
            return;
        }
        while ( !file.atEnd() )
        {
            QRegExp infofileregex(".*<.*info>.*");
            QRegExp imagefileregex(".*<.*image>.*");
            QRegExp edufileregex(".*<.*education([1-9]*)>.*");
            QRegExp workfileregex(".*<.*work([1-9]*)>.*");
            QRegExp skillfileregex(".*<.*skills([1-9]*)>.*");
            QString line = file.readLine();
            if(infofileregex.exactMatch(line) == 1){
                std::vector<std::string> tempinfo;
                std::string name = file.readLine();
                std::string email = file.readLine();
                std::string phone = file.readLine();
                std::string web = file.readLine();
                tempinfo.push_back(name);
                tempinfo.push_back(email);
                tempinfo.push_back(phone);
                tempinfo.push_back(web);
                std::string address = "";
                QString tempcomp = file.readLine();
                while(infofileregex.exactMatch(tempcomp) == 0){
                    address += tempcomp.toStdString();
                    tempcomp = file.readLine();
                }
                tempinfo.push_back(address);
                elementmap.insert(std::make_pair("info", tempinfo));
            }
            else if(edufileregex.exactMatch(line) == 1){
                edunum++;
                std::string index = edufileregex.cap(1).toStdString();
                std::vector<std::string> tempedu;
                std::string institution = file.readLine();
                std::string degree = file.readLine();
                std::string period = file.readLine();
                tempedu.push_back(institution);
                tempedu.push_back(degree);
                tempedu.push_back(period);
                std::string description = "";
                QString tempcomp = file.readLine();
                while(edufileregex.exactMatch(tempcomp) == 0){
                    description += tempcomp.toStdString();
                    tempcomp = file.readLine();
                }
                tempedu.push_back(description);
                std::string hash = "education";
                hash+= index;
                elementmap.insert(std::make_pair(hash, tempedu));
            }
            else if(workfileregex.exactMatch(line) == 1){
                worknum++;
                std::string index = workfileregex.cap(1).toStdString();
                std::vector<std::string> tempwork;
                std::string company = file.readLine();
                std::string jobtitle = file.readLine();
                std::string period = file.readLine();
                tempwork.push_back(company);
                tempwork.push_back(jobtitle);
                tempwork.push_back(period);
                std::string description = "";
                QString tempcomp = file.readLine();
                while(workfileregex.exactMatch(tempcomp) == 0){
                    description += tempcomp.toStdString();
                    tempcomp = file.readLine();
                }
                tempwork.push_back(description);
                std::string hash = "work";
                hash+= index;
                elementmap.insert(std::make_pair(hash, tempwork));
            }
            else if(skillfileregex.exactMatch(line) == 1){
                skillsnum++;
                std::string index = skillfileregex.cap(1).toStdString();
                std::vector<std::string> tempskill;
                std::string name = file.readLine();
                tempskill.push_back(name);
                std::string description = "";
                QString tempcomp = file.readLine();
                while(skillfileregex.exactMatch(tempcomp) == 0){
                    description += tempcomp.toStdString();
                    tempcomp = file.readLine();
                }
                tempskill.push_back(description);
                std::string hash = "skills";
                hash+= index;
                elementmap.insert(std::make_pair(hash, tempskill));
            }
            else if(imagefileregex.exactMatch(line) == 1){
                QString imagedir = file.readLine();
                QString tempcomp = file.readLine();
                std::vector<std::string> image;
                image.push_back(imagedir.toStdString());
                elementmap.insert(std::make_pair("image", image));
            }
        }
        file.close();
        QFile HTMLfile(test.getTemplate());
        if (!HTMLfile.open(QIODevice::ReadOnly| QIODevice::Text)) {
            QMessageBox::information(this, tr("Unable to open file"),
                HTMLfile.errorString());
            return;
        }
        while ( !HTMLfile.atEnd() )//Reading the file line by line
        {
            //The core algorithm of our program starts here
            //These are the predefined regex that match the html tags
            QRegExp basicinforegex(".*<.*[a-zA-Z0-9]+(| )[i|I][d|D](| )=(| )\"basicinfo\".*>.*");
            QRegExp nameregex(".*<.*[a-zA-Z0-9]+(| )[i|I][d|D](| )=(| )\"name\".*>.*");
            QRegExp educationregex(".*<.*(| )[i|I][d|D](| )=(| )\"education\".*>.*");
            QRegExp workregex(".*<.*(| )[i|I][d|D](| )=(| )\"work\".*>.*");
            QRegExp skillregex(".*<.*(| )[i|I][d|D](| )=(| )\"skill\".*>.*");
            QRegExp imageregex(".*<.*(| )[i|I][d|D](| )=(| )\"picture\".*>.*");
            //We first read a line of the file
            QString line = HTMLfile.readLine();
            //If the line matches any of these conditions
            if(basicinforegex.exactMatch(line) == 1){
                //Push the tag to the outmap
                outmap.push_back(line.toStdString());
                //Find map that has info as its index
                std::unordered_map<std::string, std::vector<std::string>>::iterator i = elementmap.find("info");
                //Regex that matches html tags with id
                QRegExp phoneregex(".*<.*[a-zA-Z0-9]+(| )[i|I][d|D](| )=(| )\"phone\">.*");
                QRegExp websiteregex(".*<.*[a-zA-Z0-9]+(| )[i|I][d|D](| )=(| )\"website\">.*");
                QRegExp emailregex(".*<.*[a-zA-Z0-9]+(| )[i|I][d|D](| )=(| )\"email\">.*");
                QRegExp addressregex(".*<.*[a-zA-Z0-9]+(| )[i|I][d|D](| )=(| )\"address\">.*");
                QString tempcomp = HTMLfile.readLine();
                QRegExp terminator(".*<.*/[a-zA-Z0-9]+(| )[i|I][d|D](| )=(| )\"basicinfo\">.*");
                //Match tags within this loop
                while(terminator.exactMatch(tempcomp) == 0){
                    if(phoneregex.exactMatch(tempcomp) == 1){
                        std::string tempvalue = i->second[2];
                        QString value = QString::fromStdString(tempvalue);
                        value.replace(QString("\n"), QString(""));
                        tempcomp.replace(QString("&brvbar;"), value);
                        outmap.push_back(tempcomp.toStdString());
                        tempcomp = HTMLfile.readLine();
                    }
                    else if(websiteregex.exactMatch(tempcomp) == 1){
                        std::string tempvalue = i->second[3];
                        QString value = QString::fromStdString(tempvalue);
                        value.replace(QString("\n"), QString(""));
                        tempcomp.replace(QString("&brvbar;"), value);
                        outmap.push_back(tempcomp.toStdString());
                        tempcomp = HTMLfile.readLine();
                    }
                    else if(emailregex.exactMatch(tempcomp) == 1){
                        std::string tempvalue = i->second[1];
                        QString value = QString::fromStdString(tempvalue);
                        value.replace(QString("\n"), QString(""));
                        tempcomp.replace(QString("&brvbar;"), value);
                        outmap.push_back(tempcomp.toStdString());
                        tempcomp = HTMLfile.readLine();
                    }
                    else if(addressregex.exactMatch(tempcomp) == 1){
                        std::string tempvalue = i->second[4];
                        QString value = QString::fromStdString(tempvalue);
                        tempcomp.replace(QString("&brvbar;"), value);
                        //tempcomp.replace(QString("\n"), QString(""));
                        outmap.push_back(tempcomp.toStdString());
                        tempcomp = HTMLfile.readLine();
                    }
                    else{
                        outmap.push_back(tempcomp.toStdString());
                        tempcomp = HTMLfile.readLine();
                    }

                }
                outmap.push_back(tempcomp.toStdString());

            }
            //The education information retrieval is a little different as it needs to be able to handle multiple entries. The same applies to the skills and work field
            else if(educationregex.exactMatch(line) == 1){
                QRegExp institutionregex(".*<.*[a-zA-Z0-9]+(| )[i|I][d|D](| )=(| )\"institution\">.*");
                QRegExp degreeregex(".*<.*[a-zA-Z0-9]+(| )[i|I][d|D](| )=(| )\"degree\">.*");
                QRegExp periodregex(".*<.*[a-zA-Z0-9]+(| )class(| )=(| )\"period\">.*");
                QRegExp descriptionregex(".*<.*[a-zA-Z0-9]+(| )class(| )=(| )\"description\">.*");
                QString tempcomp = HTMLfile.readLine();
                QRegExp terminator(".*<.*/[a-zA-Z0-9]+(| )[i|I][d|D](| )=(| )\"education\">.*");
                std::vector<std::string> eduout;
                eduout.push_back(line.toStdString());
                while(terminator.exactMatch(tempcomp) == 0){
                    eduout.push_back(tempcomp.toStdString());
                    tempcomp = HTMLfile.readLine();
                }
                eduout.push_back(tempcomp.toStdString());
                for(int x=0;x<edunum;x++){
                    std::string key = "education";
                    key += std::to_string(x+1);//The tag is modified to represent the count of the entry

                    std::unordered_map<std::string, std::vector<std::string>>::iterator i = elementmap.find(key);
                    for(int y = 0;y<eduout.size();y++){
                        QString value = QString::fromStdString(eduout[y]);
                        if(institutionregex.exactMatch(value)){
                            std::string tempvalue = i->second[0];
                            QString replacer = QString::fromStdString(tempvalue);
                            replacer.replace(QString("\n"), QString(""));
                            value.replace(QString("&brvbar;"), replacer);
                        }
                        else if(degreeregex.exactMatch(value)){
                            std::string tempvalue = i->second[1];
                            QString replacer = QString::fromStdString(tempvalue);
                            replacer.replace(QString("\n"), QString(""));
                            value.replace(QString("&brvbar;"), replacer);
                        }
                        else if(periodregex.exactMatch(value)){
                            std::string tempvalue = i->second[2];
                            QString replacer = QString::fromStdString(tempvalue);
                            replacer.replace(QString("\n"), QString(""));
                            value.replace(QString("&brvbar;"), replacer);
                        }
                        else if(descriptionregex.exactMatch(value)){
                            std::string tempvalue = i->second[3];
                            QString replacer = QString::fromStdString(tempvalue);
                            replacer.replace(QString("\n"), QString(""));
                            value.replace(QString("&brvbar;"), replacer);
                        }
                        outmap.push_back(value.toStdString());
                    }
                }

            }
            else if(workregex.exactMatch(line) == 1){
                QRegExp companyregex(".*<.*[a-zA-Z0-9]+(| )[i|I][d|D](| )=(| )\"company\">.*");
                QRegExp jobtitleregex(".*<.*[a-zA-Z0-9]+(| )[i|I][d|D](| )=(| )\"job title\">.*");
                QRegExp periodregex(".*<.*[a-zA-Z0-9]+(| )class(| )=(| )\"period\">.*");
                QRegExp descriptionregex(".*<.*[a-zA-Z0-9]+(| )class(| )=(| )\"description\">.*");
                QString tempcomp = HTMLfile.readLine();
                QRegExp terminator(".*<.*/[a-zA-Z0-9]+(| )[i|I][d|D](| )=(| )\"work\">.*");
                std::vector<std::string> workout;
                workout.push_back(line.toStdString());
                while(terminator.exactMatch(tempcomp) == 0){
                    workout.push_back(tempcomp.toStdString());
                    tempcomp = HTMLfile.readLine();
                }
                workout.push_back(tempcomp.toStdString());
                for(int x=0;x<worknum;x++){
                    std::string key = "work";
                    key += std::to_string(x+1);

                    std::unordered_map<std::string, std::vector<std::string>>::iterator i = elementmap.find(key);
                    for(int y = 0;y<workout.size();y++){
                        QString value = QString::fromStdString(workout[y]);
                        if(companyregex.exactMatch(value)){
                            std::string tempvalue = i->second[0];
                            QString replacer = QString::fromStdString(tempvalue);
                            replacer.replace(QString("\n"), QString(""));
                            value.replace(QString("&brvbar;"), replacer);
                        }
                        else if(jobtitleregex.exactMatch(value)){
                            std::string tempvalue = i->second[1];
                            QString replacer = QString::fromStdString(tempvalue);
                            replacer.replace(QString("\n"), QString(""));
                            value.replace(QString("&brvbar;"), replacer);
                        }
                        else if(periodregex.exactMatch(value)){
                            std::string tempvalue = i->second[2];
                            QString replacer = QString::fromStdString(tempvalue);
                            replacer.replace(QString("\n"), QString(""));
                            value.replace(QString("&brvbar;"), replacer);
                        }
                        else if(descriptionregex.exactMatch(value)){
                            std::string tempvalue = i->second[3];
                            QString replacer = QString::fromStdString(tempvalue);
                            replacer.replace(QString("\n"), QString(""));
                            value.replace(QString("&brvbar;"), replacer);
                        }
                        outmap.push_back(value.toStdString());
                    }
                }

            }
            else if(skillregex.exactMatch(line) == 1){
                QRegExp skillregex(".*<.*[a-zA-Z0-9]+(| )class(| )=(| )\"title\">.*");
                QRegExp descriptionregex(".*<.*[a-zA-Z0-9]+(| )class(| )=(| )\"description\">.*");
                QString tempcomp = HTMLfile.readLine();
                QRegExp terminator(".*<.*/[a-zA-Z0-9]+(| )[i|I][d|D](| )=(| )\"skill\">.*");
                std::vector<std::string> skillout;
                skillout.push_back(line.toStdString());
                while(terminator.exactMatch(tempcomp) == 0){
                    skillout.push_back(tempcomp.toStdString());
                    tempcomp = HTMLfile.readLine();
                }
                skillout.push_back(tempcomp.toStdString());
                for(int x=0;x<skillsnum;x++){
                    std::string key = "skills";
                    key += std::to_string(x+1);

                    std::unordered_map<std::string, std::vector<std::string>>::iterator i = elementmap.find(key);
                    for(int y = 0;y<skillout.size();y++){
                        QString value = QString::fromStdString(skillout[y]);
                        if(skillregex.exactMatch(value)){
                            std::string tempvalue = i->second[0];
                            QString replacer = QString::fromStdString(tempvalue);
                            replacer.replace(QString("\n"), QString(""));
                            value.replace(QString("&brvbar;"), replacer);
                        }
                        else if(descriptionregex.exactMatch(value)){
                            std::string tempvalue = i->second[1];
                            QString replacer = QString::fromStdString(tempvalue);
                            replacer.replace(QString("\n"), QString(""));
                            value.replace(QString("&brvbar;"), replacer);
                        }
                        outmap.push_back(value.toStdString());
                    }
                }

            }
            else if(imageregex.exactMatch(line)){
                std::unordered_map<std::string, std::vector<std::string>>::iterator i = elementmap.find("image");
                std::string tempval = i->second[0];
                tempval.insert (0, "file:///");
                QString value = QString::fromStdString(tempval);
                value.replace(QString("\n"), QString(""));
                line.replace(QString("&brvbar;"), QString(value));
                outmap.push_back(line.toStdString());
            }
            else if(nameregex.exactMatch(line)){
                std::unordered_map<std::string, std::vector<std::string>>::iterator i = elementmap.find("info");
                std::string tempval = i->second[0];
                QString value = QString::fromStdString(tempval);
                value.replace(QString("\n"), QString(""));
                line.replace(QString("&brvbar;"), QString(value));
                outmap.push_back(line.toStdString());
            }
            else{
                outmap.push_back(line.toStdString());
            }
        }
        QString finalHTML;
        finalHTML = QFileDialog::getSaveFileName(this,
            tr("Save Resume"), "",
            tr("HyperText Markup Language format(*.html);;All Files (*)"));
        if (finalHTML.isEmpty())
            return;
        else {
            QFile finalfile(finalHTML);
            if (!finalfile.open(QIODevice::WriteOnly| QIODevice::Text)) {
                QMessageBox::information(this, tr("Unable to open file"),
                    finalfile.errorString());
                return;
            }
            QTextStream out(&finalfile);
            for(int i=0;i<outmap.size();i++){
                QString write = QString::fromStdString(outmap[i]);
                out<<write;
            }
        }
        QString fileName = QFileDialog::getSaveFileName(this, "Export PDF",
                                                        QString(), "*.pdf");
        if (!fileName.isEmpty()) {
            if (QFileInfo(fileName).suffix().isEmpty())
                fileName.append(".pdf");
            QPrinter printer(QPrinter::HighResolution);
            printer.setOutputFormat(QPrinter::PdfFormat);
            QWebView *web = new QWebView();
            web->load(QUrl::fromLocalFile(finalHTML));
            web->settings()->setAttribute(QWebSettings::AutoLoadImages, true);
            web->settings()->setAttribute(QWebSettings::LocalContentCanAccessFileUrls, true);
            web->settings()->setAttribute(QWebSettings::LocalContentCanAccessRemoteUrls, true);
            web->settings()->setAttribute(QWebSettings::CSSGridLayoutEnabled, true);
            web->settings()->setAttribute(QWebSettings::JavascriptEnabled, false);
            web->settings()->setAttribute(QWebSettings::JavaEnabled, false);
            web->settings()->setAttribute(QWebSettings::PluginsEnabled, false);
            web->settings()->setAttribute(QWebSettings::JavascriptCanOpenWindows, false);
            web->settings()->setAttribute(QWebSettings::JavascriptCanCloseWindows, false);
            web->settings()->setAttribute(QWebSettings::JavascriptCanAccessClipboard, false);
            web->settings()->setAttribute(QWebSettings::DeveloperExtrasEnabled, false);
            web->settings()->setAttribute(QWebSettings::SpatialNavigationEnabled, false);
            QString css = QString("qrc:/html-templates/%1/css/main.css").arg(test.getIndex());
            web->settings()->setUserStyleSheetUrl(QUrl(css));
            web->show();
            QEventLoop loop;
            QObject::connect(web,SIGNAL(loadFinished(bool)),&loop,SLOT(quit()));
            loop.exec();
            printer.setOutputFileName(fileName);
            web->print(&printer);
        }

    }

    else{
        QString fileName = QFileDialog::getSaveFileName(this, "Export PDF",
                                                        QString(), "*.pdf");
        if (!fileName.isEmpty()) {
            if (QFileInfo(fileName).suffix().isEmpty())
                fileName.append(".pdf");
            QPrinter printer(QPrinter::HighResolution);
            printer.setOutputFormat(QPrinter::PdfFormat);
            QWebView *web = new QWebView();
            web->resize(QSize(1280, 720));
            web->load(QUrl::fromLocalFile(savedFile));
            web->settings()->setAttribute(QWebSettings::AutoLoadImages, true);
            web->settings()->setAttribute(QWebSettings::LocalContentCanAccessFileUrls, true);
            web->settings()->setAttribute(QWebSettings::LocalContentCanAccessRemoteUrls, true);
            web->show();
            QEventLoop loop;
            QObject::connect(web,SIGNAL(loadFinished(bool)),&loop,SLOT(quit()));
            loop.exec();
            printer.setOutputFileName(fileName);
            web->print(&printer);
        }

    }

}

void MainWindow::on_image_clicked()
{
    if(img.exec() == QDialog::Accepted){
        ui->textEdit->append("<image>");
        ui->textEdit->append(img.returnImage());
        ui->textEdit->append("</image>");
    }
}
