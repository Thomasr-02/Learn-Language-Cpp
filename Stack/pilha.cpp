
#include <iostream>
#include "pilha.h"

using namespace std;

pilha::pilha(int t):TAM_MAX(t), topo(-1){
	vetor = new int[TAM_MAX];
}

pilha::~pilha(){
	delete[] vetor;
}

void pilha::empilha(int v){
	if (topo == TAM_MAX){
		cout <<"A pilha está cheia! \n";
	}
	else{
		vetor [++topo]= v;
	}
}

int pilha::desempilha(){
    if(topo == -1){
        cout << "A pilha esta vazia"<<endl;
    }else{
        return vetor[topo--];
    }

}

bool pilha::estaVazio(){
	if(topo==-1){
        return true;
	}
	return false;
}

