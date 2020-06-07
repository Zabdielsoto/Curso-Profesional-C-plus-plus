//Ejercicio 21
/*
6.- Un programa que use una matriz de 3×4 
para resolver un sistema de 3 ecuaciones 
con 3 incógnitas usando el método de Gauss 
(hacer ceros por debajo de la diagonal principal 
para luego aplicar sustitución regresiva).
*/

#include<iostream>

using namespace std;

int main(){
	float matriz[3][4] = {}, arreglo1[3] = {}, arreglo2[3] = {}, 
		x = 0, y = 0, z = 0, numero = 0;
	
	cout<<"Ingrese los datos de la matriz"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			cout<<"Dato ["<<i<<"] ["<<j<<"]: >";
			cin>>matriz[i][j];
		}
	}
	
	cout<<endl<<"Matriz"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			cout<<matriz[i][j]<<"  ";
		}
		cout<<endl;
	}
	
		//Ordenamos las filas
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				if(matriz[i][j] == 0){
					for(int k = 0; k < 4; k++){
						arreglo1[k] = matriz[i][k];
						arreglo2[k] = matriz[2][k];
						matriz[i][k] = arreglo2[k];
						matriz[2][k] = arreglo1[k];
					}
				}
			}
		}
		
			cout<<endl<<"Matriz"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			cout<<matriz[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	for(int paso = 1; paso <= 5; paso++){
		for(int i = 0; i < 4; i++){
			switch(paso){
				//Hacer 1 el primer termino 
				case 1: if(i == 0){numero = matriz[0][0];}
					matriz[0][i] /= numero;
					break;
				//hacer 0 la segunda linea
				case 2: if(i == 0){numero = -matriz[1][0];}
					matriz[1][i] += numero * matriz[0][i];
					break;
				//hacer 0 la tercera linea con la primera
				case 3: if(i == 0){numero = -matriz[2][0];}
					matriz[2][i] += numero * matriz[0][i];
					break;
				//hacer 1 la segunda linea
				case 4: if(i == 0){numero = matriz[1][1];}
					matriz[1][i] /= numero;
				 	break;
				 	//hacer 0 la tercera linea con la segunda
				case 5: if(i == 0){numero = -matriz[2][1];}
				matriz[2][i] += numero * matriz[1][i];
					break;
			}
		}
		if(paso == 3 && matriz[1][0] == 0 && matriz[1][1] == 0){
			for(int j = 0; j < 4; j++){
				arreglo1[j] = matriz[1][j];
				matriz[1][j] = matriz[2][j];
				matriz[2][j] = arreglo1[j];	
				paso = 4;	
				}
		}
	}
		z = matriz[2][3] / matriz[2][2];
		y = (matriz[1][3] - (matriz[1][2] * z)) / (matriz[1][1]);
		x = (matriz[0][3] - (matriz[0][2] * z) - (matriz[0][1] * y)) / matriz[0][0];
		
	cout<<endl<<"Matriz"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			cout<<matriz[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	cout<<endl<<"los resultados de las ecuaciones son: "<<endl
		<<"x = "<<x<<endl<<"y = "<<y<<endl<<"z = "<<z;
	return 0;
}
