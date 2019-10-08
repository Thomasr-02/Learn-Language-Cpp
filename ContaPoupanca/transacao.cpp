#include <iostream>
#include "Transacao.h"
#include "Deposito.h"
#include "Saque.h"
#include "Juros.h"

using namespace std;

float Transacao::getValor()
{
    return this->valor;
}

void Transacao::emitirextrato()
{
    cout << this->valor << endl;
}
