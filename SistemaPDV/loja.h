#ifndef LOJAH
#define LOJAH

#include <vector>
#include "cliente.h"
#include "roupa.h"
#include "venda.h"

using namespace std;

class loja
{
	public:
		void cadCliente(cliente *CL);
		void cadRoupa(roupa *RP);
		void listCL();
		void listRP();
		void listVENDAS();
		void getVENDAS();
		void Comprar(string CL, int Codigo, int Quant);
		void QuantidadeRPEstoque();
		void RpCOMPporCL();
		void ClCOMPDetRp();
		bool PermissaoCL(string Cl);
		bool PermissaoRP( int Codigo);
	private:
		vector <cliente*>clientes;
		vector <roupa*>roupas;
		vector <venda*>vendas;

};

#endif
