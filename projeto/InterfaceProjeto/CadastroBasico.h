#ifndef CADASTROBASICO_H
#define CADASTROBASICO_H

#include <QDialog>

namespace Ui {
class CadastroBasico;
}

class CadastroBasico : public QDialog
{
    Q_OBJECT

public:
    explicit CadastroBasico(QWidget *parent = 0);
    ~CadastroBasico();

private:
    Ui::CadastroBasico *ui;
};

#endif // CADASTROBASICO_H
