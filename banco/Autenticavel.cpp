#include "Autenticavel.hpp"
#include <iostream>

using namespace std;

Autenticavel::Autenticavel(string senha):
    senha(senha) {

}

bool Autenticavel::autentica(string tentativaSenha) const {

    return senha == tentativaSenha;
}
