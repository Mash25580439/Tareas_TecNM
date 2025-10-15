#include "iostream"
using namespace std;
int main()
{   //probLema 1.4 Construya un diagrama de flujo que resuelva el problemo que tienen en una
// gasolinera. Los surtidores de la misma regisran lo que "surten" en galos, ero elprecio de l
//esta fijado en "Litros". El programa debe calcular e imprimir lo que hay que cobrarle al cli
//cada galon tiene 3.785 Litros, y el precio del Litro es 8.20
//Declaracion de variables

float GALONES, TOTAL;
const float GALON=3.785, PRECIOLITRO=8.20;

//Entrada de datos

cout<<" escribe cantidad de galos comprados "<<"\n";
cin>> GALONES;

//CALCULO
TOTAL= GALONES*GALON*PRECIOLITRO;
//SE IMPRIME RESULTADOS
cout<<" Hay que cobrar al cliente por "<<GALONES<<"  galones  "<<"debe pagar "<<TOTAL<<" pesos"<<"\n";
return 0;
}
