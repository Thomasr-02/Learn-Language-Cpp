#include <iostream>
#include "loja.h"
#include "venda.h"
#include "cliente.h"
#include <exception>
#include "roupa.h"
#include <string.h>

using namespace std;

void loja::cadCliente(cliente *CL)
{
	
	system("cls");
	/*int i;
	for(i = 0;i < this->clientes.size();i++){
		if((this->clientes[i]->getCliente()).compare(CL)==0)
		{
			cout << "\nCliente ja cadastrado."<<end
			break;
		}	
    }*/
	
	this->clientes.push_back(CL);
}


void loja::cadRoupa(roupa *RP)
{
	system("cls");
	this->roupas.push_back(RP);
}

void loja::listCL(){
	system("cls");
	int i;
	try{
		if (this->clientes.empty()==true){
			throw "Sem Usuarios Cadastrados.\n";
		}
		else{
			cout << "\n-- Clientes Cadastrados --\n"<<endl;
			for(i = 0;i<this->clientes.size();i++){
		        cout<<this->clientes[i]->getCliente()<<endl;
    }
		}
	}catch(const char *e){
		cout << e;
		
	}
	
}

void loja::listRP(){
	system("cls");	
	int i;
	try{
		if (this->roupas.empty()==true){
			throw "Sem Roupas Cadastradas.\n";
		}
		else{			
			cout << "\n--Roupas Cadastradas--"<<endl;
			cout << "Codigo B\tQuantidade\tTamanho\n";
			for(i = 0;i<this->roupas.size();i++){
		     	cout<<this->roupas[i]->getCodRoupa()<<"\t\t" <<this->roupas[i]->getQuantRoupa()<<"\t\t"<<this->roupas[i]->getTamRoupa()<<"\n";
				 
			}		
		}	
		
	}catch(const char *e){
		cout << e; 
	}
}


void loja::QuantidadeRPEstoque(){
	system("cls");
	int i;
	int codbarras;
	cout << "Digite o codigo de barra da roupa para verificar no estoque :";
    cin >>codbarras;
    try{
			if (this->roupas.empty()==true){
				throw "\nSem Roupas Cadastradas.\n\n";
			}
			else{
				for (i=0 ; i < this->roupas.size(); i++){
					//se nao capturar error pesquisar quantidade de roupas de acordo com o codigo de barras
					if (this->roupas[i]->getCodRoupa()== codbarras){
						cout << "\nRoupa Encontrada.\nVerificando...\n";
						cout << "A Roupa: "<<codbarras << " tem " << this->roupas[i]->getQuantRoupa()<<" unidades.\n";
					}
				}
			}
			
	}
	catch(const char *e){
			cout << e;
	}	
	
}


bool loja::PermissaoCL(string Cl){
	int w;
	for (w=0 ; w < this->clientes.size();w++){
		if (strcmp(this->clientes[w]->getCliente().c_str(),Cl.c_str()) == 0){
			return true;
//			usuario esta cadastrado - permitido
		}
	}
	return false;
}


bool loja::PermissaoRP(int Codigo){
	int w;
	for (w=0 ; w < this->roupas.size();w++){
		if (this->roupas[w]->getCodRoupa()==Codigo){				
				return true;
//roupa esta cadastrado - permitido
		}
	}
	return false;
}




void loja::Comprar(string CL, int Codigo, int Quant ){
	system("cls");
	int permiRP=0;
	int permiCL=0;
	int PosicaoCL,PosicaoRP,i,j;
	if(PermissaoRP(Codigo)==true){
		//roupa esta contida no estoque
	}
	else{
		permiRP=-1;
		cout << "Sem roupa no estoque.\n";
	}
	
	
	if(PermissaoCL(CL)==true){
		//cliente esta cadastrado
	}
	else{
		cout << "Cliente nao cadastrado.\n";
		permiCL=-1;
	}

	if (permiRP==0 and permiCL==0){
				//pode comprar
				
			for (j=0 ; j < this->roupas.size(); j++){
				if( this->roupas[j]->getCodRoupa() == Codigo){
					PosicaoRP=j;//posicao da roupa
				}
			}
			for(i=0 ; i< this->clientes.size(); i++){
				if (this->clientes[i]->getCliente() == CL){
					PosicaoCL=i;//posicao do cliente
				}
			}
			
			try{
				if (Quant > (this->roupas[PosicaoRP]->getQuantRoupa()))
				{
					throw "Quantidade desejada ultrapassada.";
				}	
				
			}catch(const char *e){
				cout <<e;
			}
				
			if (Quant > (this->roupas[PosicaoRP]->getQuantRoupa()))
			{
				cout << "\nTemos disponiveis " << this->roupas[PosicaoRP]->getQuantRoupa()  << " unidades deste produto.\n";
			}
			
			else
			{
				//compra com sucesso
			    this->roupas[PosicaoRP]->AltQuant(Quant);
			    
				roupa *RpC = new roupa(Codigo, Quant ,this->roupas[PosicaoRP]->getTamRoupa());
			
				venda *VENDA = new venda(RpC, this->clientes[PosicaoCL]);
				this->vendas.push_back(VENDA);
				cout << "Compra efetuada com sucesso!!\n";
				}
		}
		
}


void loja::listVENDAS(){
	system("cls");
	int i;
	if (this->vendas.empty()==true){
		cout << "Nenhum item comprado.\n";
	}
	else{
		cout << "Produtos Comprados.\n";
		for(i=0; i< this->vendas.size();i++){
	        cout<< "Cliente: "<<(this->vendas[i]->getCliente())->getCliente()<<endl;
	        cout<< "Codigo: "<<(this->vendas[i]->getRoupa())->getCodRoupa()<<endl;
			cout<< "Quantidade: "<<(this->vendas[i]->getRoupa())->getQuantRoupa()<<endl;
			cout<< "Tamanho: " <<(this->vendas[i]->getRoupa())->getTamRoupa()<<endl;
	    }	
	}
}

void loja::RpCOMPporCL(){
	system("cls");

	if (this->vendas.empty()==true){
		cout << "Nenhum item comprado.\n";
	}
	else
	{
		int v;
		string clien;
		cout << "\nDigite o nome do cliente que deseja ver roupas compradas: ";
		cin >> clien;
		int aux;
		
		for (v=0 ; v < this->vendas.size(); v++){
			if (clien.compare(this->vendas[v]->getCliente()->getCliente()) == 0){
				cout << clien << " comprou essa roupa  CODIGO ->[" << this->vendas[v]->getRoupa()->getCodRoupa()<<"]" <<endl;

				aux=1;
				
				}
			if(aux!=1){
				cout << "Este cliente nao comprou roupa."<<endl;
			}	
		}
	}
	
		
}

void loja::ClCOMPDetRp(){
	system("cls");
	int i;
	int CodCL;
	cout << "Digite o codigo da roupa que deseja verificar quem comprou.\n";
	cin >> CodCL;
	for (i=0 ; i < this->vendas.size();i++){
		if (this->vendas[i]->getRoupa()->getCodRoupa()==CodCL){
			cout << this->vendas[i]->getCliente()->getCliente() <<" comprou a roupa de codigo "<<this->vendas[i]->getRoupa()->getCodRoupa()<<endl;
		}
		
	}
}

