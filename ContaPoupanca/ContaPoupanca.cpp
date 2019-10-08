#include "ContaPoupanca.h"
#include <iostream>

using namespace std;

 float ContaPoupanca::getSaldo()
 {
     this->saldo = 0;

     for(int i = 0; i < this->transacoes.size(); ++i)
     {
         Transacao* d = this->transacoes[i];
         this->saldo += d->getValor();
     }
     return this->saldo;
 }

void ContaPoupanca::emitirextrato()
{
 for(int i = 0; i < this->transacoes.size(); ++i)
     {
         Transacao *d = this->transacoes[i];
         d->emitirextrato();
     }
     cout << "Saldo : " << this->getSaldo() << endl;
}

void ContaPoupanca::depositar(float v)
{
    Transacao* d = new Deposito(v);
    this->transacoes.push_back(d);

    Transacao *t= new Juros(v);
    this->transacoes.push_back(t);
}

void ContaPoupanca::sacar(float v)
{
    Transacao*t= new Saque(v);
    this->transacoes.push_back(t);
}
