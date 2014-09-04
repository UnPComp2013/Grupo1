#include "cadastro.h"
#include <QtWidgets>

int main (int argc, char *argv[]) {
    //Instancia base para inicializar a aplicacao
    QAplication app(argc, argv);

    //Formulario principal
    cadastro form;

    //Exibe formulario prinipal
    form.show();

    //Inicializa a aplicacao
    return app.exerc();
}
