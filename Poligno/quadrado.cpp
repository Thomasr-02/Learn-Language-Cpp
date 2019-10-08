#include <iostream>
#include "quadrado.h"
#include "poligno.h"

using namespace std;

quadrado::quadrado(float lado){
	this -> lado=lado;
}

float quadrado::getarea(){
	return (this -> lado* this -> lado);
}

float quadrado::getperimetro(){
	return (this->lado + this->lado + this->lado + this->lado);
}
