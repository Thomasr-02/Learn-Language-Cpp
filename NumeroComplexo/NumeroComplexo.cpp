#include <iostream>
#include "NumeroComplexo.h"

using namespace std;

NumeroComplexo::NC(double real, double img){
	this -> real=real;
	this -> img= img;
}

NumeroComplexo NumeroComplexo::operator+(NumeroComplexo &nc){//SOMAR
	NumeroComplexo NC;
	NC.real = this -> real + nc.real;
	NC.img = this -> img + nc.img;
	return NC;
}


NumeroComplexo NumeroComplexo::operator-(NumeroComplexo &nc){//SUBTRAIRRRRR
	NumeroComplexo NC;
	NC.real = this -> real - nc.real;
	NC.img = this -> img - nc.img;
	return NC;
}

NumeroComplexo NumeroComplexo::operator*(NumeroComplexo &nc) {
    NumeroComplexo NC;

    NC.real = (this->real * nc.real) - (this->img * nc.img);
    NC.img = (this->real * nc.img) + (nc.real * this->img);

    return NC;
}

NumeroComplexo NumeroComplexo::operator/(NumeroComplexo &nc) {
    NumeroComplexo NC;

    NC.real = (this->real* nc.real - this->img * (-nc.img));
    NC.img = (this->real * (- nc.img)) + nc.real* this->img;

    double m = nc.real * nc.real + nc.img * nc.img;

    NC.real = NC.real / m;
    NC.img = NC.img /m;

    return NC;
}



