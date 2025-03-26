#pragma once
#include "Conta.hpp"

using namespace std;

class ContaPoupanca final: public Conta {

public:
    // Construtor
    ContaPoupanca(string numero, Titular titular);

    // Métodos
    float taxaDeSaque() const override;
};
