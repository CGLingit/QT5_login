#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    setWindowOpacity(0.8);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_toolButton_clicked()
{
    QDialog *dialog=new QDialog();
    dialog->show();
}
