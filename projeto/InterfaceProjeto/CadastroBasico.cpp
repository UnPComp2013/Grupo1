#include "cadastrobasico.h"
#include "ui_cadastrobasico.h"

CadastroBasico::CadastroBasico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CadastroBasico)
{
    ui->setupUi(this);
}

CadastroBasico::~CadastroBasico()
{
    delete ui;
}
