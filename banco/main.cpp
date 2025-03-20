#include <iostream>
#include <string>
#include <locale.h>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta) {

    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}

int main() {

    setlocale(LC_ALL, "Portuguese");

    Titular titular1(Cpf("123.456.789-10"), "Martina");
    Conta conta1("123456", titular1);
    conta1.depositar(500);
    conta1.sacar(200);

    ExibeSaldo(conta1);

    Titular titular2(Cpf("098.765.432-10"), "Júlia");
    Conta conta2("654321", titular2);
    conta2.depositar(300);
    conta2.sacar(50);

    ExibeSaldo(conta2);

    cout << "Número de contas: " << Conta::recuperaNumeroDeContas() << endl;

    return 0;
}
