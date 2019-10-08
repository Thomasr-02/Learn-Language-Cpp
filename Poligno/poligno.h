#ifndef poligno_H_
#define poligno_H_

using namespace std;

class poligno{

	public:
		virtual float getarea()=0;
		virtual float getperimetro()=0;
	private:	
		float area;
		float perimetro;	
};	
#endif 
