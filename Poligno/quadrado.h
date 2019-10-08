#ifndef quadrado_H_
#define quadrado_H_
#include "poligno.h"
#include <iostream>
using namespace std;

class quadrado: public poligno{

	public:
		float getarea();
		float getperimetro();
		quadrado (float lado);
	private:
		float lado;
};

#endif 
