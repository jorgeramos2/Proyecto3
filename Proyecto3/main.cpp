#include <iostream>
#include "Servicio.h"
#include"Contratacion.h"

using namespace std;
///Proyecto #3
///Jorge Ramos y Alexis Virgen
///11/7/2017
/// Este programa simula una empresa provedora de telecomunicaciones. El programa permite consultar
/// los servicios disponibles , las contrataciones, las contrataciones de un servicio, las contrataciones en una fecha especifica
/// y realizar una contratacion de un servicio.
int main()
{
Servicio *servicio[10];
Contratacion contrataciones[20];
int opcion;
 do {
  cout << endl
<< " 1 - Consultar la lista de Servicios.\n"
<< " 2 - Consultar la lista de contrataciones.\n"
<< " 3 - Consultar las contrataciones de un servicio dado.\n"
<< " 4 - Consulta las contrataciones de una fecha específica.\n"
<< " 5 - Hacer una contratación.\n"
<< " 6 - Terminar\n"

<< " Ingrese su opcion : ";
cin >> opcion;

switch (opcion)
{
case 1:
	cout << "Lista de servicios: " << endl;
	for (int i = 0; i < 10;i++)
		servicio[i]->muestra();
break;
case 2:

break;
case 3:

break;
case 4:

break;
case 5:

break;
case 6:

break;
default:
cout << "No existe esta opcion. \n";

break;
}

}while (opcion !=6);
return 0;

}
