#include <iostream>
#include"Empresa.h"
#include"Hogar.h"
using namespace std;

int main()
{
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
