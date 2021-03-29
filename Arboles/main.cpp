#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *izq;
	Nodo *der;
};

void Menu();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
void mostrarArbol(Nodo *, int);


Nodo *arbol = NULL;

int main() {
	
	Menu();
	
	
	getch();
	return 0;
}


void Menu(){
	int dato, opcion,contador = 0;
	
	do{
		cout<<"MENU : "<<endl;
		cout<<"1: Insertar Nuevo nodo"<<endl;
		cout<<"2: Mostra Arbol "<<endl;
		cout<<"3: SALIR "<<endl;
		
		cout<<"OPCION: ";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"Digite un numero: ";
				cin>>dato;
				insertarNodo(arbol,dato);
				cout<<"\n";
				system("pause");
				break;
			case 2: 
				cout<<"\nMostrando el arbol:\n\n";
				mostrarArbol(arbol,contador);
				cout<<"\n";
				system("pause");
				break;
				
		}
		system("cls");
		
	}while(opcion != 3);
}


Nodo *crearNodo(int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->der = NULL;
	
	return nuevo_nodo;
}

void insertarNodo(Nodo *&arbol, int n){
	
	if(arbol == NULL){
		Nodo *nuevo_nodo = crearNodo(n);
		arbol = nuevo_nodo;
	}
	else{
		int valor_raiz = arbol->dato;
		if(n < valor_raiz){
			insertarNodo(arbol->izq,n);
		}
		else{
			insertarNodo(arbol->der,n);
		}
	}
	
	cout<<"arbol:"<<arbol->dato;
	
}

void mostrarArbol(Nodo *arbol, int cont){
	
	if(arbol == NULL){
		return;
	}
	else{
		mostrarArbol(arbol->der, cont+1);
		for(int i=0; i<cont;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,cont+1);
	}
}
