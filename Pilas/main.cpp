#include <iostream>
#include <conio.h>

using namespace std;


struct Nodo{
	int dato;
	Nodo *siguiente;
};
	

void agregarPila(Nodo *&pila, int n);
void sacarPila(Nodo *&pila,int &n);

int main() {

	Nodo *pila = NULL;
	int dato;
	
	cout<<"Digite un numero: ";
	cin>>dato;
	agregarPila(pila,dato);	
	
	
	cout<<"\nDigite un numero: ";
	cin>>dato;
	agregarPila(pila,dato);
		
	cout<<"\nDigite un numero: ";
	cin>>dato;
	agregarPila(pila,dato);
		
	cout<<"\n\nSacando elementos de la pila: ";
	while(pila != NULL){
		sacarPila(pila,dato);
		if(pila!=NULL){
			cout<<dato<<", ";
		}
		else{
			cout<<dato<<".";
		}
	}
		
	getch();
	return 0;
}


void agregarPila(Nodo *&pila, int n){
	
	//Crear espacion en memoria
	Nodo *nuevo_nodo = new Nodo();
	//Cargar valor dentro del nodo
	nuevo_nodo->dato=n;
	//cargar el puntero pilo dentro del nodo(*siguiente)
	nuevo_nodo->siguiente = pila;
	//asignar un nuevo nodo a pila
	pila = nuevo_nodo;
	
	cout<<"\nAgregado a la pila correctamente"<<endl;
}


void sacarPila(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
	
}

