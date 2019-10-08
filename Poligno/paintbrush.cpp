#include <iostream>
#include <vector>
#include "poligno.h"
#include "paintbrush.h"
#include <vector>

using namespace std;

void paintbrush::adiciona(poligno *q){
	this -> polignos.push_back(q);
}

float paintbrush::calculaAreaPolignos(){
	float soma=0;
	for (int i=0; i < this->polignos.size(); ++i) {
		poligno *q=this ->polignos[i]; 
		soma += q -> getarea();
	}
	return soma;
}

float paintbrush::calculaPerimetroPolignos(){
	float soma=0;
	for (int i=0; i < this->polignos.size(); ++i) {
		poligno *q=this ->polignos[i]; 
		soma += q -> getperimetro();
	}
	return soma;
}
