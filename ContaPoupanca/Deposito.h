#ifndef Deposito_H_
#define Deposito_H_
#include "Transacao.h"

class Deposito : public Transacao {
public:
    Deposito(int v);
    float getValor();
    void emitirextrato();
};

#endif
