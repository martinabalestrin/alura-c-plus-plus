#include <iostream>
#include "Titular.hpp"

using namespace std;

Titular::Titular(Cpf cpf, string nome):
    cpf(cpf), nome(nome) {

    verificaTamanhoDoNome();
}

Titular::~Titular() {

}

void Titular::verificaTamanhoDoNome() {

    if (nome.size() < 5) {
        cout << "O nome deve possuir no mínimo 5 caracteres." << endl;
        exit(1);
    }
}
