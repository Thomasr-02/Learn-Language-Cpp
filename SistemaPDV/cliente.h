#ifndef CLIENTEH
#define CLIENTEH

#include <iostream>
#include <string>
using namespace std;

class cliente{
	public:
		cliente (string Nome);		
		string getCliente();
	private:
		string Nome;
	friend class venda;
};
#endif
