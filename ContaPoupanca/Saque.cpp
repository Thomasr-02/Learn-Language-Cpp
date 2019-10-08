#include "Saque.h"
#include <iostream>

using namespace std;

 Saque::Saque(int v)
 {
 	valor = v;
 }

float Saque::getValor()
{
    return -this->valor;
}

void Saque::emitirextrato()
{
    cout << "S: - " << this->valor << endl;
}
