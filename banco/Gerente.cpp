#include "Gerente.hpp"
#include <iostream>

using namespace std;

Gerente::Gerente(Cpf cpf, string nome, float salario, string senha):
        Funcionario(cpf, nome, salario), Autenticavel(senha) {

}

float Gerente::bonificacao() const {

    return recuperaSalario() * 0.5;
}
