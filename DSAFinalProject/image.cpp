#include "image.h"
#include "ui_image.h"

image::image(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::image)
{
    this->setStyleSheet("QTabWidget, QMenuBar, QMenu, QStatusBar{background-color:#1e1e1e;color:#3cbb76;}QDialog{background-color:#2d2c2a;}QPushButton{background-color:#ff3535;color:#ffffff;border-radius: 5px;}QPushButton:hover{background-color:#3cbb76;color:#ffffff;border-radius: 5px;}");
    ui->setupUi(this);
}

image::~image()
{
    delete ui;
}

void image::on_pushButton_clicked()
{
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this,
        tr("Open Resume"), "",
        tr("Image(*.jpg);;All Files (*)"));
        if (fileName.isEmpty())
            return;
        else {
            imagename = fileName;

        }
        scene = new QGraphicsScene();
        QString directory = QString(imagename);
        QImage image(directory);
        scene->addPixmap(QPixmap::fromImage(image));
        ui->graphicsView->setScene(scene);//Display image to the graphics view
}

QString image::returnImage(){
    return imagename;
}

void image::on_pushButton_2_clicked()
{
    this->accept();//Signals that this button is used to confirm changes
}

void image::on_pushButton_3_clicked()
{
    this->reject();
}
