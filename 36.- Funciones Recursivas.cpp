//Ejercicio Propuesto 36: Funciones
/*
5.- Investiga sobre la sucesión de Fibonacci, busca 
ejemplos de funciones recursivas sobre este tema y 
crea un programa que calcule el término n de la 
sucesión de Fibonacci de forma recursiva.
*/

#include<iostream>

using namespace std;

int Fibonacci(int n);

int main(){
	int posicion = 0;
	
	cout<<"Ingrese la posicion para la serie de fibonacci: >";
	cin>>posicion;
	
	cout<<endl<<Fibonacci(posicion);
	
	return 0;
}

int Fibonacci(int n){
	
	if(n == 0){
		return 0;
	} else if(n == 1){
		return 1;
	} else {
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	} 
	
}
