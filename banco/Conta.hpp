#pragma once
#include <string>
#include "Titular.hpp"

using namespace std;

class Conta {

    public:

        // Construtor
        Conta(std::string numero, Titular titular);

        // Destrutor
        ~Conta();

        // Métodos
        void sacar(float valorASacar);
        void depositar(float valorADepositar);
        float recuperaSaldo() const;

        static int recuperaNumeroDeContas();

    private:

        // Atributos
        string numero;
        Titular titular;
        float saldo;

        // Contador
        static int numeroDeContas;
};

