//Ejercicio 17
/*
2.- Un programa que pida al usuario 
los datos de una matriz de 3×3, 
y muestre su determinante.
*/

#include<iostream>

using namespace std;

int main(){
	int matriz[3][3] = {};
	
	cout<<"Ingrese los datos de la matriz"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"Dato ["<<i<<"] ["<<j<<"]: >";
			cin>>matriz[i][j];
		}
	}
	
	cout<<endl<<"Matriz"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<matriz[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl<<"Matriz larga"<<endl;
	int matriz2[3][5] = {};
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 5; j++){
			if(j < 3){
				matriz2[i][j] = matriz[i][j];
			} else{
			matriz2[i][j] = matriz[i][j - 3];	
			}
			cout<<matriz2[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	float multi = 1, multi2 = 1, suma = 0, resta = 0;
	int contador = 1;
	
	while(contador <= 3){
	for(int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if (contador == 1){
				if(j == i){
					multi *= matriz2[i][j];
					j = 0;
					multi2 *= matriz2[i][j+4-i];
					j = i; 
				} }
			if(contador == 2){
				if(i == j){
					multi *= matriz2[i][j+1];
					j = 0;
					multi2 *= matriz2[i][j+3-i];
					j = i; 
				}}
			if(contador == 3){
				if(i == j){
					multi *= matriz2[i][j+2];
					j = 0;
					multi2 *= matriz2[i][j+2-i];
					j = i;
				}}
			}
		}
	suma += multi;
	resta += multi2;
	multi = 1;
	multi2 = 1;
	contador++;
	}
	suma -= resta;
	cout<<endl<<"El determinante de la matriz es: "<<suma;
	return 0;
}
