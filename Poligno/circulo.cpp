#include <iostream>
#include "circulo.h"
#include "poligno.h"
#define pi 3.1459

using namespace std;

circulo::circulo(float raio){
	this -> raio=raio;
}
float circulo::getraio(){
	return this -> raio;
}


float circulo::getarea(){
	return (pi*(this -> raio* this -> raio));
}


float circulo::getperimetro(){
	return 2*pi*raio;
}


