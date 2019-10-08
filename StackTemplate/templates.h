#include <iostream>
using namespace std;
template <class T>

class Queue{
	protected:
		T *elem;
	private:
		int tamanho;
		int ini=1;
		int fim=1;
	public:
		Queue(int size);
		~Queue(){delete elem;}
		void push (T e);
		T pop();
		void printar (Queue <T> &vetor);
		int retfim () {return fim;}
		int retini () {return ini;}
		T& operator[](int i) {return elem[i];}
};

Queue<int> vetor(20);
template <class T>//CONSTRUTOR
Queue<T>::Queue(int size){
	tamanho = size;
	ini = (ini+tamanho) % tamanho;
	fim = (fim+1) % tamanho;
	elem = new T[size];
} 

template <class T>//COLOCAR NA FILA
void Queue<T>::push(T e){
	if (ini == tamanho){
		cout <<"A fila está cheia!\n"<<endl;
	}
	else{
		vetor [fim++]= e;
	}
}

template <class T>//TIRAR DA FILA
T Queue<T>::pop(){
    if(ini == fim){
        cout << "A fila esta vazia!\n"<<endl;
    }
	else{
        return vetor[ini++];
    }
}

template <class T>
void printar ( Queue <T> vetor){
	int i;
	for (i= vetor.retini() ; i < vetor.retfim(); i++){
			cout << "->" << vetor[i] <<" \n";
		}
}	

