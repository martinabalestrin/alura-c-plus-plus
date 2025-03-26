#pragma once
#include <string>

using namespace std;

class Autenticavel {

public:
    // Construtor
    Autenticavel(string senha);

    // Métodos
    bool autentica(string senha) const;

private:
    // Atributos
    string senha;
};
