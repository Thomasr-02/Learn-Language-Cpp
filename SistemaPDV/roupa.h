#ifndef ROUPAH
#define ROUPAH

#include <iostream>
#include <string>

using namespace std;

class roupa{
	public:
		roupa(int codbarrasRP, int quantidadeRP ,string tamanhoRP){
			this->codbarrasRP=codbarrasRP;
			this->quantidadeRP=quantidadeRP;
			this->tamanhoRP=tamanhoRP;
		}		
		string getTamRoupa();
		int getQuantRoupa();
		int getCodRoupa();
		void AltQuant(int quantidadeRP);
		
	private:
		int codbarrasRP;
		int quantidadeRP;
		string tamanhoRP;
	friend class venda;
};

#endif
