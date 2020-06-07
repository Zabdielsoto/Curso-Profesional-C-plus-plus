//Ejercicio 26: Ordenamientos
/*
1.- Implemente el algoritmo de la burbuja de manera
que los elementos ordenados queden de mayor a menor.
*/

#include<iostream>

using namespace std;

int main(){
	int n = 0, auxiliar = 0, continuar = 0;
	cout<<"Digite el tamaño del la lista: >";
	cin>>n;
	
	int lista[n] = {};
	
	cout<<endl<<"Ingrese los numeros de la lista"<<endl;
	
	for(int i = 0; i < n; i++){
		cout<<i+1<<".- ";
		cin>>lista[i];
	}
	
	cout<<endl<<"Lista sin ordenar"<<endl;
	for(int i = 0; i < n; i++){
		cout<<lista[i]<<", ";
	}
	cout<<endl;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(lista[j] < lista[j+1]){
				auxiliar = lista[j];
				lista[j] = lista[j + 1];
				lista[j+1] = auxiliar;
				continuar = 1;
			}
		}
		if(continuar == 0){
			i = n;
		} else {
			continuar = 0;
			for(int i = 0; i < n; i++){
		cout<<lista[i]<<", ";
	}
	cout<<endl;
		}
	}
	
	cout<<endl<<"Lista ordenada de mayor a menor"<<endl;
	for(int i = 0; i < n; i++){
		cout<<lista[i]<<", ";
	}
	return 0; 
}
