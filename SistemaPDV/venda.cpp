#include "cliente.h"
#include "roupa.h"
#include "venda.h"
#include <iostream>

using namespace std;

venda::venda(roupa *RP, cliente *CL){
	this->CL=CL;
	this->RP=RP;
}


cliente* venda::getCliente(){
    return this->CL;
}
roupa* venda::getRoupa(){
    return this->RP;
}



