#include "mycover.h"
#include "ui_mycover.h"

MyCover::MyCover(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyCover)
{
    ui->setupUi(this);
}

MyCover::~MyCover()
{
    delete ui;
}



