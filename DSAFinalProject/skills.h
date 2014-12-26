#ifndef SKILLS_H
#define SKILLS_H

#include <QDialog>
#include <vector>

namespace Ui {
class skills;
}

class skills : public QDialog
{
    Q_OBJECT

public:
    explicit skills(QWidget *parent = 0);
    std::vector<std::string> getSkill();//return the vector that contains the skill information
    bool checkVector();//check whether the vector is empty
    ~skills();

private slots://Put event handlers on slots
    void on_pushButton_clicked();//event handler for the ok button

    void on_pushButton_3_clicked();//event handler for the cancel button

private:
    std::vector<std::string> skillvector;//vector for the skills inputted
    Ui::skills *ui;
};

#endif // SKILLS_H
