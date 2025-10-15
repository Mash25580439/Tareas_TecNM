#include "iostream"
#include <stdio.h>
using namespace std;

int main()
{
	int A,B;
	float RES;
	//Mensaje de bienvenida
	cout << "Hola! estre programa 1.7 escribe el resultado de la expresion" << "\n";
	
	//se declaran los numeros que pueden ser decimales (pueden ser decimales)
	
	//se pide el primer numero
	cout << "por favor ingrese el primer valor A:  " <<"\n";
	//se asigna el primer valor a A
	cin >> A;
	
	//se pide el segundo numero
	cout << "por favor ingrese el segundo valor B:  " <<"\n";
	//se asigna el segundo valor a B
	cin >> B;
	
	RES=((A+B)*(A+B))/3.0;
	
	//Se muestra el resultado.
	printf ("\n El resultado de la expresion %5.4f \n", RES);
	cout << "EL RESULTADO DE LA EXPRESIÓN ES   " << RES <<"\n";
	
	return 0;
}
