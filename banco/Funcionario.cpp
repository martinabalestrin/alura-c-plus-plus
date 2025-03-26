#include "Funcionario.hpp"
#include <iostream>

using namespace std;

Funcionario::Funcionario(Cpf cpf, string nome, float salario):
    Pessoa(cpf, nome), salario(salario) {

}

string Funcionario::recuperaNome() const {
    return nome;
}

float Funcionario::recuperaSalario() const {
    return salario;
}
