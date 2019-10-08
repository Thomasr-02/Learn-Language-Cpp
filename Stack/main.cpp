#include <iostream>
#include "pilha.h"

using namespace std;

void testaPilha();

int main(){
	testaPilha();
	return 0;
}

void testaPilha(){
	pilha p1(10);

	for(int i=0; i<5; ++i){
		p1.empilha(i);

	}
	pilha p2 = pilha(p1);
	for(int i=0; i<5; ++i){
		p1.empilha(p2.desempilha());
	}
	while(!p1.estaVazio()){

		cout << "Empilha: " << p1.desempilha() << endl;
}
	while(!p1.estaVazio()){

		cout << "Desempilha: " << p1.desempilha() << endl;
}
}
