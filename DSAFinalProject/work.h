#ifndef WORK_H
#define WORK_H

#include <QDialog>
#include <vector>

namespace Ui {
class work;
}

class work : public QDialog
{
    Q_OBJECT

public:
    explicit work(QWidget *parent = 0);
    std::vector<std::string> getWork();//return the vector that contains the work information
    bool checkVector();//check whether the vector is empty
    ~work();

private slots://Put event handlers on slots
    void on_pushButton_clicked();//event handler for the ok button

    void on_pushButton_3_clicked();//event handler for the cancel button

private:
    std::vector<std::string> workvector;//vector for the works inputted
    Ui::work *ui;
};

#endif // WORK_H
