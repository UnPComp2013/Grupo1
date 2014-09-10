#ifndef PROJETO_H
#define PROJETO_H

#include <QMainWindow>

namespace Ui {
class Projeto;
}

class Projeto : public QMainWindow
{
    Q_OBJECT

public:
    explicit Projeto(QWidget *parent = 0);
    ~Projeto();

private:
    Ui::Projeto *ui;
};

#endif // PROJETO_H
