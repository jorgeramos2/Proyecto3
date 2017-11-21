#include <iostream>
#include <sstream>
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
string palabra,s;
int cont = 0, espacio = 0,num2,obj;
int dia, mes, anio;
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
			for (int i = 0; i < 7;i++){
				if (palabra[i] == ' '){
					ss << palabra.substr(0,i);
					ss >> costo;
					ss.clear();
					espacio = i;
				}
			}
			palabra.erase(0,espacio);
			for (int i = 0; i < 5;i++){
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
			for (int i = 0; i < 5;i++){
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
		obj = cont;
}	
openfile.close();
Contratacion contrataciones[20];
openfile2.open("Contratacion.txt");
cont = 0;
while (!openfile2.eof()){
	getline(openfile2,palabra);
	contrataciones[cont].setClave(palabra.substr(0,5));
	palabra.erase(0,6);
	for (int i = 0; i < 3;i++){
		if (palabra[i] == ' '){
			ss << palabra.substr(0,i);
			ss >> num2;
			contrataciones[cont].setIdCliente(num2);
			ss.clear();
			espacio = i;
		}
	}
	palabra.erase(0,espacio+1);
	for (int i = 0; i < 3;i++){
		if (palabra[i] == ' '){
			ss << palabra.substr(0,i);
			ss >> dia;
			ss.clear();
			espacio = i;
		}
	}
	palabra.erase(0,espacio+1);
	for (int i = 0; i < 3;i++){
		if (palabra[i] == ' '){
			ss << palabra.substr(0,i);
			ss >> mes;
			ss.clear();
			espacio = i;
		}
	}
	palabra.erase(0,espacio+1);
	for (int i = 0; i < 5;i++){
		if (palabra[i] == ' '){
			ss << palabra.substr(0,i);
			ss >> anio;
			ss.clear();
			espacio = i;
		}
	}
	palabra.erase(0,espacio+1);
	contrataciones[cont].setFecha(dia,mes,anio);
	ss << palabra;
	ss >> num2;
	ss.clear();
	contrataciones[cont].setDiasDuracion(num2);
	cont++;
}
openfile2.close();
int opcion;
 do {
  cout << endl
<< " 1 - Consultar la lista de Servicios.\n"
<< " 2 - Consultar la lista de contrataciones.\n"
<< " 3 - Consultar las contrataciones de un servicio dado.\n"
<< " 4 - Consulta las contrataciones de una fecha especifica.\n"
<< " 5 - Hacer una contratacion.\n"
<< " 6 - Terminar\n"

<< " Ingrese su opcion : ";
cin >> opcion;

switch (opcion)
{
case 1:
	cout << "Lista de servicios: " << endl;
	for (int i = 0; i < obj;i++)
		servicio[i]->muestra();
break;
case 2:
	cout << "Lista de contrataciones: " << endl;
	for(int i = 0;i < cont;i++){
		cout << "Clave del servicio: " << contrataciones[i].getClave() << endl;
		cout << "Id del cliente: " << contrataciones[i].getIdCliente() << endl;
		cout << "Fecha de inicio: " << endl;
		contrataciones[i].getFecha();
		cout << "Fecha fin de contrato: "<< endl;
	//	cout << contrataciones[i].calcularFinContrato();
		cout << endl;
	}
break;
case 3:
	cout << "Clave del servicio?" << endl;
	cin >> s;
	for(int i = 0;i < obj;i++){
		if(s == servicio[i]->getClave())
			servicio[i]->muestra();
	}
	for(int i = 0;i < cont;i++){
		if(s == contrataciones[i].getClave()){
			cout << "Id del cliente: " << contrataciones[i].getIdCliente() << endl;
			cout << "Fecha de contrato: ";
			contrataciones[i].getFecha();
			cout << "Fecha fin de contrato: "<< endl;
	//		cout << contrataciones[i].calcularFinContrato();	
		}
	}
break;
case 4:
	cout << "Fecha que se desea checar? (dd mm aaaa)" << endl;
	cin >> dia >> mes >> anio;
	for(int i = 0;i < cont;i++){
		if (contrataciones[i].checarFecha(dia,mes,anio)){
			for(int i = 0;i < obj;i++){
				if(servicio[i]->getClave() == contrataciones[i].getClave()){
					servicio[i]->muestra();
				}
			}
		}
	}
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
