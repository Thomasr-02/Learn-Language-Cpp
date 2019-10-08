#ifndef ContaPoupanca_H
#define ContaPoupanca_H

#include <vector>
#include "Saque.h"
#include "Deposito.h"
#include "Juros.h"
#include "Transacao.h"

using namespace std;

class ContaPoupanca 
{
protected:
    float saldo;
    vector<Transacao*>transacoes;


public:
    float getSaldo();
    void emitirextrato();
    void depositar(float v);
    void sacar(float v);
};

#endif
