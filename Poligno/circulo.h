#ifndef circulo_H_
#define circulo_H_
#include "poligno.h"

using namespace std;

class circulo : public poligno
{
	public:
		float getarea();
		float getraio();
		float getperimetro();
		circulo(float raio);
	private:
		float raio;
};	

#endif 
