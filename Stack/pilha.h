#ifndef _PILHA_H_
#define _PILHA_H_
using namespace std;

class pilha{
public:
	pilha(int t);
	void empilha(int v);
	int desempilha();
	bool estaVazio();
	~pilha();
//	pilha (const pilha &p);


private:
	int *vetor;
	int topo;
	const int TAM_MAX;

};
#endif
