#include "iostream"
#include "string"

using namespace std;

int main()
{
	//MENSAJE DE BIENVENIDA
	cout << "hola! este programa 1.6 describe los datos en orden inverso." << "\n";
	
	//se declaran los numeros que se sumarán (pueden ser decimales)
	int A,B,C,D;
	

	//Se le pide el primer numero
	cout << "Por favor ingrese el primer valor A:   "<< "\n";
	//Se asigna el primer numero a A:
	cin >> A;


	//Se le pide el segundo numero
	cout << "Por favor ingrese el segundo valor B:   "<< "\n";
	//Se asigna el segundo numero a B:
	cin >> B;


	//Se le pide el tercer numero
	cout << "Por favor ingrese el tercer valor C:   "<< "\n";
	//Se asigna el tercer numero a C:
	cin >> C;
	

	//Se le pide el cuarto numero
	cout << "Por favor ingrese el cuarto valor D:   "<< "\n";
	//Se asigna el cuarto numero a D:
	cin >> D;
	
	//se muestra el resultado.
	cout << D << "," << C << "," << B << "," << A;
	
	return 0;
}

