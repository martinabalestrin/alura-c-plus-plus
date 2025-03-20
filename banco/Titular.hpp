#pragma once
#include <string>
#include "Cpf.hpp"

using namespace std;

class Titular {

    public:

        // Construtor
        Titular(Cpf cpf, std::string nome);

        // Destrutor
        ~Titular();

    private:

        // Atributos
        Cpf cpf;
        string nome;

        // Métodos Privados
        void verificaTamanhoDoNome();
};
