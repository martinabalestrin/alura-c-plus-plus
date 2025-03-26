#include "Pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(Cpf cpf, string nome):
    cpf(cpf), nome(nome) {

    verificaTamanhoDoNome();
}

void Pessoa::verificaTamanhoDoNome() {

    if (nome.size() < 5) {
        cout << "O nome deve possuir no m�nimo 5 caracteres." << endl;
        exit(1);
    }
}
