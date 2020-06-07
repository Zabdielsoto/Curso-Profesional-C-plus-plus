//Ejercicio Propuesto 20
/*
5.- Un programa que pida al usuario los datos 
de dos matrices de 2×2, y calcule y muestre su producto.
*/

#include<iostream>

using namespace std;

int main(){
	float matriz1[2][2] = {}, matriz2[2][2] = {}, matriz3[2][2] = {};
	
	cout<<"Ingrese los datos de la matriz 1"<<endl;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout<<"Dato ["<<i<<"] ["<<j<<"]: >";
			cin>>matriz1[i][j];
		}
	}
	
	cout<<endl<<"Ingrese los datos de la matriz 2"<<endl;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout<<"Dato ["<<i<<"] ["<<j<<"]: >";
			cin>>matriz2[i][j];
		}
	}
	
	cout<<endl<<"Resultado de la multiplicacion de matrices"<<endl;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			for(int l = 0; l < 2; l++){	
				matriz3[j][i] += matriz1[j][l] * matriz2[l][i];
			}
		}
	}
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout<<matriz3[i][j]<<"  ";	
		}
		cout<<endl;
	}
	
	return 0;
}
