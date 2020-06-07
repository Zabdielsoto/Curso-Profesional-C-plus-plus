//Ejercicio Propuesto 1: Azul School

#include <iostream>

using namespace std;

int main() {
	float a = 5, b = 10, c = 15, d = 20, e = 25, f = 30, resultado = 0;
	
	//Expresion 1
	resultado = a/b + 1;
	cout<<"El resultado 1 es: "<<resultado<<endl;
	
	//Expresion 2
	resultado = (a+b) / (c+d);
	cout<<"El resultado 2 es: "<<resultado<<endl;
	
	//Expresion 3
	resultado = (a + b/c) / (d + e/f);
	cout<<"El resultado 3 es: "<<resultado<<endl;
	
	//Expresion 4
	resultado = a + (b / (c - d));
	cout<<"El resultado 4 es: "<<resultado<<endl;
	
	return 0;
}
