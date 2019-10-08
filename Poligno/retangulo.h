#ifndef RETANGULO_H_
#define RETANGULO_H_
#include "poligno.h"
using namespace std;

class retangulo: public poligno {
	public:
		retangulo(float base, float altura);
		float getarea();
		float getperimetro();
	private:
		float altura;
		float base;
};
#endif 
