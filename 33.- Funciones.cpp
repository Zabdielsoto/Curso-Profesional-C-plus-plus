//Ejercicio Propuesto 33: Funciones
/*
2.- Crea un programa en C++ que acomode un vector de mayor a 
menor utilizando una función.
*/

#include<iostream>

using namespace std;

void Ingresar(int v[], int l);
void Ordenar(int v[], int l);
void Mostrar(int v[], int l);

int main(){
	int largo = 0;
	
	cout<<"Ingrese longuitud del arreglo: >";
	cin>>largo;
	
	int vector[largo];
	
	Ingresar(vector,largo);
	Ordenar(vector,largo);
	Mostrar(vector,largo);
	
	return 0;
}

void Ingresar(int v[], int l){
	cout<<"Ingrese datos del vector"<<endl;
	for(int i = 0; i < l; i++){
		cout<<i+1<<".- ";
		cin>>v[i];
	}
	cout<<endl;
}

void Ordenar(int v[], int l){
	int aux = 0, p = 0;
	
	cout<<"Ordenamiento de mayor a menor"<<endl;
	for(int i = 0; i < l; i++){
		p = i;
		aux = v[i];
		
		while( v[p - 1] < aux && p > 0){
			v[p] = v[p - 1];
			p--;
		}
		
		v[p] = aux;
	}
}

void Mostrar(int v[], int l){
	
	cout<<"Mostrando Datos Ordenados"<<endl;
	for(int i = 0; i < l; i++){
		cout<<v[i]<<", ";
	}
}
