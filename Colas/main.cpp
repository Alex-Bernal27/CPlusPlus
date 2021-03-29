#include <iostream>
#include <conio.h>
#include <stdlib.h>


using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};


void insertarCola(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);
void eliminarCola(Nodo *&, Nodo *&, int &);

int main() {
	
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	int dato;
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	cout<<"\nDigite un numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	cout<<"\nDigite un numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	cout<<"\nEliminando los elementos de la cola: ";
	while(frente != NULL){
		eliminarCola(frente, fin, dato);
		
		if (frente != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}
	
	
	getch();
	return 0;
}

void insertarCola (Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	
	cout<<"\tElemento "<<n <<" se ha insertado a la cola";
}

bool cola_vacia(Nodo *frente){
	return (frente == NULL)? true : false;
}

void eliminarCola(Nodo *&frente, Nodo *&fin, int &n){
	n = frente->dato;
	Nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->siguiente;
	}
	
	delete aux;
}
