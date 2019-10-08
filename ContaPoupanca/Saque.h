#ifndef Saque_H_
#define Saque_H_
#include "Transacao.h"
class Saque: public Transacao {
public:
    Saque(int v);
    float getValor();
    void emitirextrato();
};

#endif
