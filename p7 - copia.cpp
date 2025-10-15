#include "iostream"
#include "iostream"
using namespace std;

int main()
{
	//problema 1.3 Escribe un programa tal que dado como datos el nombre del dinosaurio
	//su peso y su longitud, expresado estos ultimos en libras y pies respectivamente
	//escriba el nombre del dinosaurio, su peso expresado en kilogramos y la longitud expresada en metros
	
	//Declaracion en variables
	string NOMBRE;
	float PESOLIBRAS, LONGITUDENPIES;
	float PESOENKILOS, LONGITUDENMETROS;
	
	//entrada de datos
	
	cout<< " Escribe el nombre del dinosauiro" << "\n";
	cin>> NOMBRE;
	
	cout<< " Escribe el peso del dinosauiro en libras" << "\n";
	cin>> PESOLIBRAS;
	
	cout<< " Escribe el longitud del dinosauiro en pies" << "\n";
	cin>> LONGITUDENPIES;
	
	
	//CALCULO
	PESOENKILOS=PESOLIBRAS*1000;
	LONGITUDENMETROS=LONGITUDENPIES*0.3047;
	
	
	//SE IMPRIME RESULTADOS
	cout <<" El peso em kilos del dinosaurio "<<NOMBRE<< "ES "<<PESOENKILOS<<" y la longitud en metros es "<<LONGITUDENMETROS<< "\n";
	return 0;
}
