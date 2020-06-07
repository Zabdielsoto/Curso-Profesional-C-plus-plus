//Ejercicio Propuesto 30: Estructuras
/*
1.- Un programa que pida el nombre, el apellido 
y la edad de una persona, los almacene 
en un “struct” y luego muestre los tres 
datos en una misma línea, separados por comas.
*/

#include<iostream>

using namespace std;

struct persona{
	int edad;
	char nombre[20], apellido[20];
};

int main(){
	persona p;
	
	cout<<"Ingrese los datos de la persona"<<endl
		<<"Nombres: >";
	cin.getline(p.nombre,20);
	cout<<"Apellidos: >";
	cin.getline(p.apellido,20);
	cout<<"Edad: >";
	cin>>p.edad;
	
	cout<<endl<<"Datos de la persona, nombre, apellido, edad"<<endl
		<<p.nombre<<", "<<p.apellido<<", "<<p.edad<<" años";
		
	return 0;
}
