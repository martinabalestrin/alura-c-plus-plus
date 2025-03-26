#include <iostream>
#include "Titular.hpp"

Titular::Titular(Cpf cpf, string nome, string senha):
    Pessoa(cpf, nome), Autenticavel(senha) {

}
