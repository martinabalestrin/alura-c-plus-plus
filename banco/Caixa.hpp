#pragma once
#include "Funcionario.hpp"

using namespace std;

class Caixa final: public Funcionario {

public:
    // Construtor
    Caixa(Cpf cpf, string nome, float salario);

    // M�todos
    float bonificacao() const;

};
