//Ejercicio propuesto 14
/*
4.- Crea un programa en C++ donde el usuario ingrese 10 números, 
después estos se deben de guardar en un array, 
para finalmente imprimir su promedio.
*/

#include<iostream>

using namespace std;

int main(){
	int arreglo[10] = {};
	float promedio = 0;
	
	cout<<"Ingrese los numeros"<<endl;
	for(int i = 0; i <= 9; i++){
		cout<<i+1<<"> ";
		cin>>arreglo[i];
		
		promedio += arreglo[i];
	}
	promedio /= 10;
	cout<<"El promedio de los numeros es: "<<promedio;
	
	return 0;
}
