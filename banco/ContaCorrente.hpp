#pragma once
#include "Conta.hpp"

using namespace std;

class ContaCorrente final: public Conta {

public:
    // Construtor
    ContaCorrente(string numero, Titular titular);

    // M�todos
    float taxaDeSaque() const override;
    void transferirPara(Conta& destino, float valor);
};
