#ifndef TEMPLATING_H
#define TEMPLATING_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QFile>

namespace Ui {
class templating;
}

class templating : public QMainWindow
{
    Q_OBJECT

public:
    explicit templating(QWidget *parent = 0);
    int getIndex();//Check for the index of the selected template;
    QString getTemplate();//Get the template directory
    ~templating();

private slots://Put event handlers on slots
    void handleSelectionChanged(int);

    void on_buttonBox_accepted();//event handler for the ok button.

    void on_buttonBox_rejected();//event handler for the cancel button

private:
    int chosenindex;//index of the selected template
    QString htmltemplate;//template directory
    Ui::templating *ui;
    QGraphicsScene *scene;//template's image representation
};

#endif // TEMPLATING_H
