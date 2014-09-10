#include "projeto.h"
#include "ui_projeto.h"

Projeto::Projeto(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Projeto)
{
    ui->setupUi(this);
}

Projeto::~Projeto()
{
    delete ui;
}
