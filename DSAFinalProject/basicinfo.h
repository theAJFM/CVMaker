#ifndef BASICINFO_H
#define BASICINFO_H

#include <QDialog>
#include <vector>

namespace Ui {
class basicinfo;
}

class basicinfo : public QDialog
{
    Q_OBJECT

public:
    explicit basicinfo(QWidget *parent = 0);
    std::vector<std::string> getInfo();//return the vector that contains basic information
    bool checkVector();//check whether the vector is empty
    ~basicinfo();

private slots://Put event handlers on slots
    void on_pushButton_clicked();//event handler for the ok button
    void on_pushButton_3_clicked();//event handler for the cancel button

private:
    std::vector<std::string> infovector;//vector for the basic info inputted
    Ui::basicinfo *ui;
};

#endif // EDUCATIONFORM_H
