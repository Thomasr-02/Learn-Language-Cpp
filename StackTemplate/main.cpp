#include <iostream>
#include "templates.h"

using namespace std;

int main(){
	int op,elem;
 	do{
	cout << "Digite o que deseja fazer !"<< endl;
	cout << "1: Colocar elementos na fila.\n2: Retirar elementos da fila.\n3: Mostrar fila.\n";
 	cin >> op;

	switch (op){
		case 0:
			break;
		case 1:	
			cout <<"Digite algo para inserir na fila!\n"<<endl; 
			cin >> elem;
			vetor.push(elem);
			break;	
		case 2:
			cout <<"Retirando elemento por ordem de fila!\n";
	//		vetor.pop();
			cout << " \n "<< vetor.pop();
			
			break;
		case 3:
			printar(vetor);
			break;
	
	}
	
	}while(op!=0);
}
