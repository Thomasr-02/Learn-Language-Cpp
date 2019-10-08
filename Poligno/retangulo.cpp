#include <iostream>
#include "retangulo.h"
#include "poligno.h"

using namespace std;

retangulo::retangulo(float base, float altura){
	this -> altura=altura;
	this -> base=base; 
}


float retangulo::getarea(){
	return this-> base*this->altura;
}


float retangulo::getperimetro(){
	return this->  base*2 +this -> altura*2;
}

