#ifndef VENDAH
#define VENDAH

#include <vector>
#include <string>
#include "cliente.h"
#include "roupa.h"
#include <iostream>


using namespace std;

class venda{
    public:
        venda(roupa *RP, cliente *CL);
    	cliente *getCliente();
    	roupa *getRoupa();
	
		roupa *Roupa;
	private:
        roupa *RP;
        cliente *CL;
	
};

#endif
