//Ejercicio propuesto 16
/*
1.- Un programa pida datos al usuario los datos
de una matriz de 2×2 y muestra su traspuesta 
(el resultado de intercambiar filas por columnas).
*/

#include<iostream>

using namespace std;

int main(){
	int matriz[2][2] = {};
	
	cout<<"Ingrese los datos de la matriz"<<endl;
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout<<"Dato ["<<i<<"] ["<<j<<"]: >";
			cin>>matriz[i][j];
		}
	}
	
	cout<<endl<<"Matriz"<<endl;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout<<matriz[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	cout<<endl<<"Transpuesta de la matriz"<<endl;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout<<matriz[j][i]<<"  ";
		}
		cout<<endl;
	}
	
	return 0;
}
