#pragma once
#include "Conta.hpp"

using namespace std;

class ContaPoupanca final: public Conta {

public:
    // Construtor
    ContaPoupanca(string numero, Titular titular);

    // M�todos
    float taxaDeSaque() const override;
};
