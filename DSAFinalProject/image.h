#ifndef IMAGE_H
#define IMAGE_H

#include <QDialog>
#include <QGraphicsScene>
#include <QFile>
#include <QFileDialog>


namespace Ui {
class image;
}

class image : public QDialog
{
    Q_OBJECT

public:
    explicit image(QWidget *parent = 0);
    QString returnImage();//get the image directory
    ~image();

private slots://Put event handlers on slots
    void on_pushButton_clicked();//event handler for the select file button

    void on_pushButton_2_clicked();//event handler for the ok button

    void on_pushButton_3_clicked();//event handler for the cancel button

private:
    QString imagename;//image directory
    Ui::image *ui;
    QGraphicsScene *scene;//actual image representation
};

#endif // IMAGE_H
