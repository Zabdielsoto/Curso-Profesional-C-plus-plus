//Ejercicio Propuesto 35: Funciones
/*
4.- Crea un programa en C++ que determinar si una 
matriz es simétrica utilizando una función.
*/

#include<iostream>

using namespace std;

void Ingresar();
void Simetrica(int m[][3], int&);
void Imprimir(int m[][3], int b);

int matriz[3][3];

int main(){
	int bandera = 0;
	
	Ingresar();
	Simetrica(matriz,bandera);
	Imprimir(matriz,bandera);
	return 0;
}

void Ingresar(){
	cout<<"Ingresa los datos de la matriz"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"Dato ["<<i<<"] ["<<j<<"]: >";
			cin>>matriz[i][j];
		}
	}
}

void Simetrica(int m[][3], int& b){
	int m1[3][3];
	
	b = 0;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			m1[i][j] = m[j][i];
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(m1[i][j] != m[i][j]){
				b = 1;
			}
		}
	}
}

void Imprimir(int m[][3], int b){
	if(b == 0){
		cout<<endl<<"La matriz: "<<endl;
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				cout<<m[i][j]<<"  ";
			}
			cout<<endl;
		}
		cout<<"Es simetrica"<<endl;
	} else if(b == 1){
		cout<<endl<<"La matriz: "<<endl;
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				cout<<m[i][j]<<"  ";
			}
			cout<<endl;
		}
		cout<<"No es simetrica";
	}
}
