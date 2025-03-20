#include <iostream>
#include "Cpf.hpp"

using namespace std;

Cpf::Cpf(string numero):
    numero(numero) {

    // validação complexa de CPF
}

string Cpf::recuperaNumero() {
    return numero;
}
