#include <iostream>
#include <string>
#include <locale.h>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Caixa.hpp"
#include "Gerente.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta) {

    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}

void RealizaSaque(Conta& conta) {

    conta.sacar(200);
}

void FazLogin(Autenticavel& alguem, string senha) {
    if(alguem.autentica(senha)) {
        cout << "Login realizado com sucesso!" << endl;
    } else {
        cout << "Senha inválida." << endl;
    }
}

int main() {

    setlocale(LC_ALL, "Portuguese");

    Titular titular1(Cpf("123.456.789-10"), "Martina", "senha!");
    ContaPoupanca conta1("123456", titular1);
    conta1.depositar(500);
    RealizaSaque(conta1);

    ExibeSaldo(conta1);

    Titular titular2(Cpf("098.765.432-10"), "Júlia", "minhasenha");
    ContaCorrente conta2("654321", titular2);
    conta2.depositar(300);

    conta2.transferirPara(conta1, 250);

    ExibeSaldo(conta1);
    ExibeSaldo(conta2);

    cout << "Número de contas: " << Conta::recuperaNumeroDeContas() << endl;

    Gerente gerente(Cpf("123.456.789-10"), "Martina", 7500, "senhadogerente");

    cout << "Nome do gerente: " << gerente.recuperaNome() << endl;
    cout << "Salário do gerente: " << gerente.recuperaSalario() << endl;

    return 0;
}
