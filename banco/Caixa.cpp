#include "Caixa.hpp"
#include <iostream>

using namespace std;

Caixa::Caixa(Cpf cpf, string nome, float salario):
        Funcionario(cpf, nome, salario) {

}

float Caixa::bonificacao() const {

    return recuperaSalario() * 0.1;
}
