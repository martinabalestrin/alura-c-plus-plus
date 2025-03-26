#include <iostream>
#include "Conta.hpp"

using namespace std;

Conta::Conta(string numero, Titular titular):
    numero(numero), titular(titular), saldo(0) {

    numeroDeContas++;
}

Conta::~Conta() {

    cout << "Destrutor da conta." << endl;
    numeroDeContas--;
}

void Conta::sacar(float valorASacar) {

    if (valorASacar < 0) {
        cout << "Não é possível sacar valor negativo." << endl;
        return;
    }

    float tarifaDeSaque = valorASacar * taxaDeSaque();
    float valorDoSaque = valorASacar + tarifaDeSaque;

    if (valorDoSaque > saldo) {
        cout << "Saldo insuficiente." << endl;
        return;
    }

    saldo -= valorDoSaque;
}

void Conta::depositar(float valorADepositar) {

    if (valorADepositar < 0) {
        cout << "Não é possível depositar valor negativo." << endl;
        return;
    }

    saldo += valorADepositar;
}

float Conta::recuperaSaldo() const {
    return saldo;
}

int Conta::recuperaNumeroDeContas() {
    return numeroDeContas;
}

int Conta::numeroDeContas = 0;
