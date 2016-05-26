#include "jump.h"
#include "ui_jump.h"

Jump::Jump(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Jump)
{
    ui->setupUi(this);
}

Jump::~Jump()
{
    delete ui;
}

void Jump::on_pushButton_clicked()
{

//pruebita
