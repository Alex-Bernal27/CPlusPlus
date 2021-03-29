#include <iostream>

using namespace std;



class Persona{
	
	private:
		int edad;
		string nombre;
	public:
		Persona(int, string);
		void leer();
		void correr();
	
};


Persona::Persona(int _edad,string _nombre){
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer(){
	cout<<"Soy "<<nombre<< " y estoy leyendo un libro y tengo "<<edad<<endl;
}

void Persona::correr(){
	cout<<"Soy "<<nombre<< " y estoy corriendo y tengo "<<edad<<endl;
}


class Rectangulo{
	private:
		float largo,ancho;
	public:
		Rectangulo(float,float);
		void perimetro();
		void area();
};


Rectangulo::Rectangulo(float _largo,float _ancho){
	largo = _largo;
	ancho = _ancho;
}

void Rectangulo::perimetro(){
	float resultado;
	resultado = 2*ancho + 2*largo;
	cout<<"El perimetro es: "<<resultado<<endl;
}

void Rectangulo::area(){
	float resultado;
	resultado = ancho*largo;
	cout<<"El area es: "<<resultado<<endl;
}


int main() {
	
	
	Persona p1 = Persona(21,"Alejandro");
	Persona p2(18,"Chachita");
	p1.leer();
	p2.correr();
	
	Rectangulo r1(11,6);
	r1.area();
	r1.perimetro();
	
	

	
	system("pause");
	return 0;
}
