//Ejercicio Propuesto 13:
/*
3.- Crea un programa en C++ donde el usuario ingrese 5 números, 
después estos números se debe de copiar a otro array multiplicados 
por 2 y muestre el segundo array.
*/

#include<iostream>

using namespace std;

int main(){
	int arreglo1[5] = {}, arreglo2[5] = {};
	
	cout<<"Ingrese los numeros a duplicar: "<<endl;
	for(int i = 0; i <= 4; i++){
		cout<<i+1<<"> ";
		cin>>arreglo1[i];
	}
	
	cout<<endl<<"Los numeros duplicados son: "<<endl;
	for(int i = 0; i <= 4; i++){
		arreglo2[i] = arreglo1[i] * 2;
		cout<<i+1<<".- "<<arreglo2[i]<<endl;
	}
	
	return 0;
}
