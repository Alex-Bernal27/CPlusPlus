#include <iostream>
#include <conio.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};


void insertarLista(Nodo *&, int);

void mostrarLista(Nodo *);

void eliminarNodo(Nodo *&, int);

int main() {
	
	Nodo *lista = NULL;
	
	int n=0,eliminar=0;
	
	cout<<"Ingresa un numero: ";
	cin>>n;
	
	insertarLista(lista, n);
	
	
	cout<<"\nIngresa un numero: ";
	cin>>n;
	
	insertarLista(lista, n);
	
	
	cout<<"\nIngresa un numero: ";
	cin>>n;
	
	insertarLista(lista, n);
	
	
	cout<<"\nIngresa un numero: ";
	cin>>n;
	
	insertarLista(lista, n);
	
	
	mostrarLista(lista);
	
	cout<<"\n\nIngresa un numero para eliminar: ";
	cin>>eliminar;
	
	eliminarNodo(lista,eliminar);
	
	mostrarLista(lista);
	
	getch();
	return 0;
}

void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato <n)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if(lista == aux1)//si no entra al while
	{
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}
	
	nuevo_nodo->siguiente = aux1;
	
	
	cout<<"\tElemento: "<<n<<" se agrego correctamente"<<endl;
}


void mostrarLista(Nodo *lista){
	
	Nodo *actual = lista; 
	
	cout<<"Lista: ";
	while(actual != NULL){
		
		cout<<actual->dato<<" ";
		
		actual = actual->siguiente;
	}
	
}


void eliminarNodo(Nodo *&lista, int n){
	
	int contador=0;
	Nodo *busqueda = lista;
	Nodo *actual1 = lista;
	Nodo *actual2 = lista;
	int bandera=0;
	
	if(busqueda->dato == n){
		lista = lista->siguiente;
		delete busqueda;
	}
	else{
	

	
		while(busqueda != NULL){	
			
		
			if(busqueda->dato == n){
				bandera = 0;
				break;
			}
			else{
				busqueda = busqueda->siguiente;
				bandera = 1;
			}
				contador = contador + 1;
		}
		
		
		if(bandera == 0){
			for(int i=0;i<contador-1;i++){
				actual1 = actual1->siguiente;
				actual2 = actual2->siguiente;
			}
			actual2 = actual2->siguiente;
				
		
			
			if(actual2 == NULL){
				actual1->siguiente = NULL;
				delete actual2;	
			}
			else{
				actual1->siguiente = actual2->siguiente;
				delete actual2;
			}	
		}
		else{
			
			cout<<"\n\nNO SE ENCONTRO EN LA LISTA";
		}
		
	}
	
}
