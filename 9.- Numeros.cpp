//Ejercicio Propuesto 9: Ciclo for
/*
Ciclo FOR.
1.- Que pida un número y diga si es primo o no.

2.- Que muestre los números del 1 al 100.

3.- Que muestre los números del 100 al 1.

4.- Que muestre los números pares que haya del 1 al 100.

5.- Que muestre los números impares que haya del 1 al 100. 
*/

#include<iostream>

using namespace std;

int main(){
	int numero = 0, indicador = 0;
	
	//Ciclo 1
	cout<<"******** Ciclo 1: Determinar si es primo *********"<<endl;
	cout<<"Ingrese un numero para el primer ciclo: >";
	cin>>numero;
	
	for(int i = 1; i <= numero; i++ ){
		if(numero % i == 0){
			indicador++;
		}
	}
	
	if(indicador == 2){
		cout<<endl<<"El numero es primo"<<endl<<endl;
	} else {
		cout<<endl<<"El numero no es primo"<<endl<<endl;
	}
	
	//ciclo 2
	cout<<"******** Ciclo 2: Numeros del 1 al 100 *********"<<endl;
	for(int i = 1; i <= 100; i++){
		if(i < 100){
			cout<<i<<", ";
		} else {
			cout<<i<<endl<<endl;
		}
	}
	
	//Ciclo 3
	cout<<"******** Ciclo 3: Numeros del 100 al 1 *********"<<endl;
	for(int i = 100; i >= 1; i--){
		if(i > 1){
			cout<<i<<", ";
		}else{
			cout<<i<<endl<<endl;
		}
	}
	
	//Ciclo 4
	cout<<"******** Ciclo 4: Numeros Pares *********"<<endl;
	for (int i = 2; i <= 100; i+=2){
		if(i < 100){
			cout<<i<<", ";
		} else {
			cout<<i<<endl<<endl;
		}
	}
	
	//Ciclo 5
	cout<<"******** Ciclo 5: Numeros Impares *********"<<endl;
	for (int i = 1; i <= 100; i+=2){
		if(i < 100){
			cout<<i<<", ";
		} else {
			cout<<i;
		}
	}
	
	return 0;
}
