#include <iostream>
#include "NumeroComplexo.h"


using namespace std;


int main (){
	double a,b,c,d;
	cout <<  "Digite os numeros, (R,I): " <<endl;
	cin >> a >> b;
	cout <<  "Digite os numeros, (R,I): " <<endl;
	cin >> c >> d;
	NumeroComplexo I,J,K;
	I.NC(a,b);
	J.NC(c,d);
	K = I+J;
	cout << "Soma = " << K;
	K = I-J;
	cout << "Subtrair =" << K;
	K = I/J;
	cout << "Divisao =" << K;
	K = I*J;
	cout << "Multiplicacao =" << K;
		
	
}
