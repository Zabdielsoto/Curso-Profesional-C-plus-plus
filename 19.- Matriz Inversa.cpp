//Ejercicio propuesto 19
/*
4.- Un programa que pida al usuario los 
datos de una matriz de 3×3, y calcule y muestre 
su matriz inversa.
*/

#include<iostream>

using namespace std;

int main(){
	int matriz[3][3] = {};
	
	//LLenado de matriz
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
	
	//Matriz larga para determinante
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
	
	float multi = 1, multi2 = 1, suma = 0, resta = 0, det1 = 0;
	int contador = 1;
	
	//Calculo de determinante
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
	det1 = suma;
	cout<<endl<<"Determinante = "<<det1;
	
	float matriz3[2][2] = {}, dets[9] = {}, pot = 1;
	int b1 = 0, b2 = 0, cont = 1, ind = 0;
	//Ciclos recorrer matriz 3x3
	for(int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			//Ciclos para llenar matriz 2x2
			for(int k = 0; k < 3; k++){
				for(int l = 0; l < 3; l++){
					if(k == i || l == j){
					} else{
						matriz3[b1][b2] = matriz[k][l];
						cont++;
						if(cont == 2){b1 = 0; b2 = 1;}
						else if(cont == 3){b1 = 1; b2 = 0;}
						else if(cont == 4){b1 = 1; b2 = 1;}
					}
				}
			}
			b1 = 0;
			b2 = 0;
			cont = 1;
			//Determinantes de matrices 2x2
			dets[ind] = (matriz3[0][0] * matriz3[1][1]) - (matriz3[1][0] * matriz3[0][1]);
			for(int k = 0; k < i + j + 2; k++){
			pot *= -1; 	
			}
			//Datos adjunta
			dets[ind] *= pot;
			cout<<endl<<"Dets "<<dets[i+j]<<endl;
			pot = 1;
			ind++;
		}
	}
	ind = 0;
	//cout<<dets[1]<<"Hola";
	
	float adj[3][3] = {};
	//Llenamos matriz adjunta
	cout<<endl<<"Matriz adjunta"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			adj[i][j] = dets[ind];
			cout<<adj[i][j]<<"  ";
			ind++;
		}
		cout<<endl;
	}
	ind = 0;
	
	float inv[3][3] = {};
	//Calculamos inversa con transpuesta de adj
	cout<<endl<<"Matriz inversa"<<endl;
	for(int i = 0; i < 3; i ++){
		for(int j = 0; j < 3; j++){
			inv[i][j] = adj[j][i] / det1;
			cout<<inv[i][j]<<"  ";
		}
		cout<<endl;
	}
			
	
	return 0;
}
