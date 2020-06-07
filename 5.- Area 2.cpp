//Ejercicio propuesto 5

#include<iostream>

using namespace std;

int main(){
	
	float radio = 10, altura = 13, areat = 0, areac = 0, areatotal = 0, pi = 3.1416;
	
	areat = ((radio + radio) * altura) / 2;
	areac = pi * radio * radio / 2;
	
	areatotal = areat + areac;
	
	cout<<"El area de la figura es: "<<areatotal<<endl;
	
	return 0;
}
