#ifndef EDUCATION_H
#define EDUCATION_H

#include <QDialog>
#include <vector>

namespace Ui {
class education;
}

class education : public QDialog
{
    Q_OBJECT

public:
    explicit education(QWidget *parent = 0);
    std::vector<std::string> getEdu();//return the vector that contains the education information
    bool checkVector();//check whether the vector is empty
    ~education();

private slots://Put event handlers on slots
    void on_pushButton_clicked();//event handler for the ok button

    void on_pushButton_3_clicked();//event handler for the cancel button

private:
    std::vector<std::string> eduvector;//vector for the education information inputted
    Ui::education *ui;
};

#endif // EDUCATION_H
