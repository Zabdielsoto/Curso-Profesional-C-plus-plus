//Ejercicio propuesto 12
/*
2.- Crea un programa en C++ donde el usuario ingrese 10 números,
5 para un array y 5 para otro array distinto.
Mostrar los 10 números en pantalla mediante un solo array.
*/

#include<iostream>

using namespace std;

int main(){
	int arreglo1[5] = {}, arreglo2[5] = {}, arreglo3[10] = {};
	
	for(int i = 0; i <= 9; i++){
		if(i <= 4){
			cout<<"Ingres el numero "<<i+1<<" para el primer arreglo: ";
			cin>>arreglo1[i];
		} else if(i > 4){
			cout<<"Ingrese el numero "<<i-4<<" para el segundo arreglo: ";
			cin>>arreglo2[i-5];
		}
	}
	cout<<endl<<"Arreglo 1"<<endl;
	for(int i = 0; i <= 4; i++){
		cout<<arreglo1[i]<<endl;
	}
	
	cout<<endl<<"Arreglo 2"<<endl;
	for(int i = 0; i <= 4; i++){
		cout<<arreglo2[i]<<endl;
	}
	
	cout<<endl<<"Arreglo combinado"<<endl;
	for(int i = 0; i <= 9; i++){
		if(i <= 4){
			arreglo3[i] = arreglo1[i];
		} else if (i > 4){
			arreglo3[i] = arreglo2[i-5];
		}
	
	cout<<arreglo3[i]<<endl;
	}
	
	return 0;
}
