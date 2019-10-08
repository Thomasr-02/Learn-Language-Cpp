#include "Juros.h"
#include <iostream>

using namespace std;

Juros::Juros(int v) 
 {
 	valor = v*0.1;
 }

float Juros::getValor()
{
    return this->valor;
}

void Juros::emitirextrato()
{
    cout << "J: +" << this->valor << endl;
}
