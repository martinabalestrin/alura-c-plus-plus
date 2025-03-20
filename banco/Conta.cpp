#include <iostream>
#include "Conta.hpp"

using namespace std;

Conta::Conta(string numero, Titular titular):
    numero(numero), titular(titular), saldo(0) {

    numeroDeContas++;
}

Conta::~Conta() {
    numeroDeContas--;
}

void Conta::sacar(float valorASacar) {

    if (valorASacar < 0) {
        cout << "Não é possível sacar valor negativo." << endl;
        return;
    }

    if (valorASacar > saldo) {
        cout << "Saldo insuficiente." << endl;
        return;
    }

    saldo -= valorASacar;
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
