#ifndef Transacao_H_
#define Transacao_H_

using namespace std;

class Transacao {
	public:
	
		virtual float getValor();
		virtual void emitirextrato();
		
	protected:
		float saldo;
		float valor;
	
};

#endif
