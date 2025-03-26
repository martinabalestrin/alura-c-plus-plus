#include <iostream>
#include "ContaCorrente.hpp"

using namespace std;

ContaCorrente::ContaCorrente(string numero, Titular titular):
    Conta(numero, titular) {

}

float ContaCorrente::taxaDeSaque() const {
    cout << "Sacando da conta corrente..." << endl;
    return 0.05;
}

void ContaCorrente::transferirPara(Conta& destino, float valor) {

    cout << "Transferindo dinheiro..." << endl;
    sacar(valor);
    destino.depositar(valor);
}
