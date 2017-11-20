#include <iostream>
#include <sstream>
#include "Servicio.h"
#include "Contratacion.h"
#include <fstream>
#include "Empresa.h"
#include "Hogar.h"

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
ifstream openfile,openfile2;
string palabra;
int cont = 0, espacio = 0,num2;
stringstream ss;
openfile.open("Servicio.txt");
while (!openfile.eof()){
	int cantP;
	double adicional = 0.0,costo;
	string desc, clave;
	char tipo;
	stringstream ss;
	getline(openfile,palabra);
		if(palabra[6] == 'V' || palabra[6] == 'D' || palabra[6] == 'N'){
			for (int i = 0;i < palabra.length();i++){
				if (palabra[i] == ' ')
					espacio = i;
			}
			ss << palabra.substr(espacio);
			ss >> adicional;
			ss.clear();
			palabra.erase(espacio);
			clave = palabra.substr(0,5);
			tipo = palabra[6];
			palabra.erase(0,8);
			for (int i = 0; i < palabra.length();i++){
				if (palabra[i] == ' '){
					ss << palabra.substr(0,i);
					ss >> costo;
					ss.clear();
					espacio = i;
				}
			}
			palabra.erase(0,espacio);
			for (int i = 0; i < palabra.length();i++){
				if (palabra[i] == ' '){
					ss << palabra.substr(0,i);
					ss >> cantP;
					ss.clear();
					espacio = i;
				}
			}
			palabra.erase(0,espacio);
			desc = palabra;
			servicio[cont] = new Empresa(costo, cantP, desc, adicional);
			servicio[cont]->setClave(clave);
			servicio[cont]->setTipo(tipo);
		}
		else{
			clave = palabra.substr(0,5);
			tipo = palabra[6];
			palabra.erase(0,8);
			for (int i = 0; i < palabra.length();i++){
				if (palabra[i] == ' '){
					ss << palabra.substr(0,i);
					ss >> costo;
					ss.clear();
					espacio = i;
				}
			}
			palabra.erase(0,espacio);
			desc = palabra;
			servicio[cont] = new Hogar(costo, desc);
			servicio[cont]->setClave(clave);
			servicio[cont]->setTipo(tipo);
		}
		cont++;
}	
openfile.close();
Contratacion contrataciones[20];
openfile2.open("Contratacion.txt");
cont = 0;
while (!openfile.eof()){
	int dia, mes, año;
	getline(openfile,palabra);
	contrataciones[cont].setClave(palabra.substr(0,5));
	palabra.erase(0,6);
	for (int i = 0; i < palabra.length();i++){
		if (palabra[i] == ' '){
			ss << palabra.substr(0,i);
			ss >> num2;
			contrataciones[cont].setIdCliente(num2);
			ss.clear();
			espacio = i;
		}
	}
	palabra.erase(0,espacio);
	for (int i = 0; i < palabra.length();i++){
		if (palabra[i] == ' '){
			ss << palabra.substr(0,i);
			ss >> dia;
			ss.clear();
			espacio = i;
		}
	}
	palabra.erase(0,espacio);
	for (int i = 0; i < palabra.length();i++){
		if (palabra[i] == ' '){
			ss << palabra.substr(0,i);
			ss >> mes;
			ss.clear();
			espacio = i;
		}
	}
	palabra.erase(0,espacio);
	for (int i = 0; i < palabra.length();i++){
		if (palabra[i] == ' '){
			ss << palabra.substr(0,i);
			ss >> año;
			ss.clear();
			espacio = i;
		}
	}
	palabra.erase(0,espacio);
	contrataciones[cont].setFecha(dia,mes,año);
	ss << palabra;
	ss >> num2;
	ss.clear();
	contrataciones[cont].setDiasDuracion(num2);
	cont++;
}
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
