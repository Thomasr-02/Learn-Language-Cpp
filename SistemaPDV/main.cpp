#include <iostream>
#include "loja.h"
#include "roupa.h"
#include "cliente.h"
#include <string>
#include <exception>

using namespace std;
/*O sistema é capaz também de responder às perguntas:
? Quais foram as roupas compradas por um cliente?
? Quais são os clientes que já compraram uma determinada roupa?
? Quantos exemplares possuem de uma determinada roupa?*/
int main(){
	loja LOJA;
    int op=1;
    do{
    	cout << "\tSistema PDV\n\n1->Cadastrar cliente.\n2->Cadastrar roupa.\n3->Listar cliente.\n4->Listar roupa.\n5->Comprar Roupa.\n6->Listar Produtos vendidos.\n7->Quais roupas foram compras por determinado cliente.\n8->Quais sao os clientes que compraram determinada roupa.\n9->Quantidade De Determinada Roupa No Estoque.\n0->Sair.\n";
    	cin>>op;
        switch(op){
        	case 0:
           	{
           		cout << "\n\n\tVolte Sempre...\n";
           		
			}	break;
            case 1:
			{
				  /// CADASTRAR CLIENTE
              	string NomeCL;
              	cout << "\nDigite o nome do cliente que deseja cadastrar:";
				cin >> NomeCL;
				LOJA.cadCliente(new cliente(NomeCL));
				
                
			}
            	break;	
            case 2:
			{
            	///CADASTRAR ROUPA
                int codb,quantidade;
                string tamanho;
				cout<<"\nDigite o codigo de barras da roupa: ";
                cin >> codb;
                cout<<"\nDigite a quantidade de roupa: ";
                cin >> quantidade;
                cout<<"\nDigite o tamanho da roupa (P / M / G): ";
                cin >> tamanho;
                LOJA.cadRoupa(new roupa(codb,quantidade,tamanho));
			}  
				break;    	
            case 3:
			{
               	LOJA.listCL();
			}
            	break;
            case 4:
			{
                LOJA.listRP();
			}
            	break;
           case 5:
           	{
           		string CLIENTE;
           		int CODIGO;
           		int QUANTIDADE;
           		cout << "\nDigite o codigo da roupa que deseja comprar: ";
           		cin >> CODIGO;
           		cout << "\nDigite a quantidade de roupas que deseja comprar: ";
           		cin >> QUANTIDADE;
           		cout << "\nDigite o seu nome: ";
           		cin >> CLIENTE;
           		LOJA.Comprar(CLIENTE,CODIGO,QUANTIDADE);
			}
		   		break;
		   case 6:
           	{
				LOJA.listVENDAS();	
			}
		   		break;
		   case 7:
           	{
           		LOJA.RpCOMPporCL();
			}
		   		break;
		   case 8:
           	{
           	 	LOJA.ClCOMPDetRp();
			}
		   		break;
		   case 9:
           	{
				LOJA.QuantidadeRPEstoque();
			}
		   		break;
		   default:
		   {
				system ("cls");
			   	cout << "\t\nDigite Uma Opcao Valida!.\n"<<endl;
				break;
		   }		   
		}
    }while(op!=0);
}
