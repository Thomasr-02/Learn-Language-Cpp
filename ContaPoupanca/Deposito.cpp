#include "Deposito.h"
#include <iostream>

using namespace std;

Deposito::Deposito(int v) 
 {
 	valor = v;
 }

float Deposito::getValor()
{
    return this->valor;
}

void Deposito::emitirextrato()
{
    cout << "D: +" << this->valor << endl;
}
