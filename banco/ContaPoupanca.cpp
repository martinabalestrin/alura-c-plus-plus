#include <iostream>
#include "ContaPoupanca.hpp"

using namespace std;

ContaPoupanca::ContaPoupanca(string numero, Titular titular):
    Conta(numero, titular) {

}

float ContaPoupanca::taxaDeSaque() const {
    cout << "Sacando da conta poupan�a..." << endl;
    return 0.03;
}
