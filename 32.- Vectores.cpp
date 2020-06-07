//Ejercicio Propuesto 32: Funciones
/*
1.- Crea un programa en C++ que sume los elementos de un 
vector utilizando una función.
*/

#include<iostream>

using namespace std;

void Ingresar(int v1[], int l1);
int Suma(int l1, int v1[]);
void Imprimir(int r1);


int main(){
	
	int s = 0;
	int longuitud = 0;
	
	cout<<"Ingresa longuitud del arreglo: >";
	cin>>longuitud;
	
	int vector[longuitud];
	
	Ingresar(vector,longuitud);
	s = Suma(longuitud,vector);
	Imprimir(s);
	
	return 0;
}

void Ingresar(int v1[], int l1){
	cout<<endl<<"Ingrese Datos del Arreglo "<<endl;
	for(int i = 0; i < l1; i++){
		cout<<i+1<<".- ";
		cin>>v1[i];
	}
}

int Suma(int l1, int v1[]){
	int resultado = 0;
	
	for(int i = 0; i < l1; i++){
		resultado += v1[i];
	}
	
	return resultado;
}

void Imprimir(int r1){
	cout<<endl<<"La suma de los numeros del vector es: "<<r1;
}
