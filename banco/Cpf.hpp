#pragma once
#include <string>

using namespace std;

class Cpf {

    public:

        // Construtor
        Cpf(string numero);

        // Métodos
        string recuperaNumero();

    private:

        // Atributos
        string numero;
};
