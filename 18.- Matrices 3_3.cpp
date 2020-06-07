//Ejercicio Propuesto 18
/*
3.- Un programa que pida al usuario los datos 
de una matriz de 3×3, y calcule y muestre su matriz adjunta.
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
	
	cout<<endl<<"Matriz transpuesta"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<matriz[j][i]<<"  ";
		}
		cout<<endl;
	}
	
	return 0;
}
