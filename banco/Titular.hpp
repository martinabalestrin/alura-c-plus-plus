#pragma once
#include <string>
#include "Pessoa.hpp"
#include "Cpf.hpp"
#include "Autenticavel.hpp"

using namespace std;

class Titular: public Pessoa, public Autenticavel {

public:
    // Contrutor
    Titular(Cpf cpf, string nome, string senha);
};

