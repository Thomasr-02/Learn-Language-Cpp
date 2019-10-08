#include <iostream>
#include "cliente.h"
#include <string.h>
using namespace std;

cliente::cliente(string Nome)
{
	this->Nome=Nome;
}

string cliente::getCliente()
{
	return this->Nome;
}
