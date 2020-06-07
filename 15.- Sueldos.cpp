//Ejercicio propuesto 15
/*
5.- Crea un programa en C++ donde el usuario ingrese 
el sueldo diario de 10 empleados, después calcular cuanto 
se le paga a cada uno por semana, mes y año, determinar 
cual es el empleado con mayor sueldo, y determinar cual
es el empleado con menor sueldo. Al final imprimir todos los resultados en pantalla.
*/

#include<iostream>

using namespace std;

int main(){
	int dia[10] = {}, max = 0, min = 0, max1 = 0, min1 = 0;
	
	cout<<"Ingrese los sueldos diarios"<<endl;
	for(int i = 0; i <= 9; i++){
		cout<<"Sueldo para el empleado "<<i+1<<" > ";
		cin>>dia[i];
		if(i == 0){
			min1 = dia[i];
		}
		if(dia[i] > max1){
			max = i;
			max1 = dia[i];
		}
		if(dia[i] < min1){
			min = i;
			min1 = dia[i];
		}
	}
	
	cout<<endl<<"Sueldos semanales"<<endl;
	for(int i = 0; i <= 9; i++){
		cout<<"Sueldo semanal para el empleado "<<i+1<<": $"
			<<dia[i] * 7<<endl;
	}
	
	cout<<endl<<"Sueldos mensuales (30 dias)"<<endl;
	for(int i = 0; i <= 9; i++){
		cout<<"Sueldo mensual para el empleado "<<i+1<<": $"
			<<dia[i] * 30<<endl;
	}
	
	cout<<endl<<"Sueldos anuales"<<endl;
	for(int i = 0; i <= 9; i++){
		cout<<"Sueldo anual para el empleado "<<i+1<<": $"
			<<dia[i] * 365<<endl;
	}
	
	cout<<"El empleado "<<max+1<<" tiene el mayor sueldo con $"<<dia[max]<<endl
		<<"El empleado "<<min+1<<" tiene el menor sueldo con $"<<dia[min];
		
		return 0;
}
