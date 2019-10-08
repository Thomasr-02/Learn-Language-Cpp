#ifndef NumeroComplexo_H_
#define NumeroComplexo_H_
#include <iostream>

class NumeroComplexo{
	public:
		NC (double real, double img);
		NumeroComplexo operator+(NumeroComplexo &nc);
		NumeroComplexo operator-(NumeroComplexo &nc);
		NumeroComplexo operator*(NumeroComplexo &nc);
		NumeroComplexo operator/(NumeroComplexo &nc);
		friend ostream&
	private:
		double real;
		double img;
	
};


#endif
