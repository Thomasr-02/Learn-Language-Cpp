#ifndef PAINTBRUSH_H
#define PAINTBRUSH_H_
#include <vector>
#include "poligno.h"
using namespace std;

class paintbrush{
	public:
		float calculaAreaPolignos();
		float calculaPerimetroPolignos();
		void adiciona (poligno *q);
	private:
		vector<poligno*>polignos;
		
};

#endif
