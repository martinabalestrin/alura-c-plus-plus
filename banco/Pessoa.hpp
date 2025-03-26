#pragma once
#include "Cpf.hpp"
#include <string>

using namespace std;

class Pessoa {

    public:

        // Construtor
        Pessoa(Cpf cpf, string nome);

    protected:
        // Atributos
        string nome;
        Cpf cpf;

    private:
        // M�todo privado
        void verificaTamanhoDoNome();
};
