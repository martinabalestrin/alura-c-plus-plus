#pragma once
#include "Funcionario.hpp"
#include "Autenticavel.hpp"

using namespace std;

class Gerente final: public Funcionario, public Autenticavel {

public:
    // Construtor
    Gerente(Cpf cpf, string nome, float salario, string senha);

    // Métodos
    float bonificacao() const;

};
