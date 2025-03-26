#pragma once
#include <string>
#include "Titular.hpp"

using namespace std;

class Conta {

    public:

        // Construtor
        Conta(std::string numero, Titular titular);

        // Destrutor
        virtual ~Conta();

        // Métodos
        void sacar(float valorASacar);
        void depositar(float valorADepositar);
        float recuperaSaldo() const;

        static int recuperaNumeroDeContas();
        virtual float taxaDeSaque() const = 0;

    private:

        // Atributos
        string numero;
        Titular titular;

        // Contador
        static int numeroDeContas;

    protected:
        // Atributo
        float saldo;
};

