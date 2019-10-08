#include <iostream>
#include "roupa.h"
#include "loja.h"

using namespace std;



string roupa::getTamRoupa(){
	return this-> tamanhoRP;
}


int roupa::getCodRoupa(){
	return this->codbarrasRP;
}

int roupa::getQuantRoupa(){
	return this->quantidadeRP;
}

void roupa::AltQuant(int quantidadeRP){
   	this->quantidadeRP-=quantidadeRP;
}
