#pragma once
#include "Cpf.hpp"
#include "Pessoa.hpp"
#include <string>

class Funcionario : public Pessoa {

    public:
        // Contrutor
        Funcionario(Cpf cpf, string nome, float salario);

        // Métodos
        string recuperaNome() const;
        float recuperaSalario() const;
        virtual float bonificacao() const = 0;

    private:
        // Atributo
        float salario;
};
