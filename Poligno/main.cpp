#include <iostream>
#include <vector>
#include "poligno.h"
#include "circulo.h"
#include "retangulo.h"
#include "quadrado.h"
#include "paintbrush.h"

using namespace std;

int main()
{
    paintbrush q;

    while(true)
    {
        cout << "1. Criar quadrado" << endl;
        cout << "2. Criar circulo" << endl;
        cout << "3. Criar retangulo" << endl;
        cout << "4. Fornecer a soma das areas" << endl;
        cout << "5. Fornecer a soma dos perimetros" << endl;
        int op;
        cin >> op;

        switch(op)
        {
            float lado, area, raio;
            case 1:
                //quadrado
				cout << "Informe lado do quadrado: " << endl;
                cin >> lado;
                q.adiciona (new quadrado(lado));

                break;
            case 2:
            	//circulo
                cout << "Informe raio do circulo: " << endl;
                cin >> raio;
                q.adiciona (new circulo(raio));

                break;
            case 3:
            	//retangulo
            	float base, altura;
                cout << "Informe a base do retangulo:"<< endl;
                cin >> base;
                cout << "Informe a altura do retangulo:"<< endl;
                cin >> altura;
                q.adiciona(new retangulo(base, altura));

                break;
            case 4:
            	//soma das areas
                cout << "Soma das areas: "<< q.calculaAreaPolignos()<< endl;
                break;
            case 5:
            	//soma dos perimetros
                cout << "Soma dos perimetros: "<< q.calculaPerimetroPolignos()<< endl;
                break;
        }
    }
    return 0;
}
