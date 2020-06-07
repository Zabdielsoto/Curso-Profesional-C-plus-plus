//Ejercicio Propuesto 34: Funciones
/*
3.- Crea un programa en C++ que guarde los siguientes 
datos de un alumno en una matriz, utilizando funciones: 
Nombre, Edad, País, Materias. Utiliza funciones tanto 
para pedir los datos, guardar los datos e imprimir los datos
*/
#include<iostream>

using namespace std;

struct Alumno{
	char nombre[20];
	int edad;
	char pais[20],
		materias[3][20];
}a1;

void Ingresar();
void Imprimir(Alumno a);

int main(){
	
	Ingresar();
	Imprimir(a1);
	
	return 0;
}

void Ingresar(){
	cout<<"Ingresar datos del alumno"<<endl
		<<"Nombre: ";
		cin.getline(a1.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>a1.edad;
	cout<<"Pais: ";
	fflush(stdin);
	cin.getline(a1.pais,20,'\n');
	
	for(int i = 0; i < 3; i++){
		cout<<"Materia "<<i+1<<": ";
		cin.getline(a1.materias[i],20,'\n');
	}
}

void Imprimir(Alumno a){
	cout<<endl<<"Datos del Alumno"<<endl
		<<"Nombre: "<<a.nombre<<endl
		<<"Edad: "<<a.edad<<endl
		<<"Pais: "<<a.pais<<endl;
		
	for(int i = 0; i < 3; i++){
		cout<<"Materia "<<i+1<<": "<<a.materias[i]<<endl;
	}
}


