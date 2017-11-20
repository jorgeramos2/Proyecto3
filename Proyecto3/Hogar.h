#ifndef HOGAR_H_INCLUDED
#define HOGAR_H_INCLUDED
#include"Servicio.h"
/// La clase Hogar es una clase derivada de la clase Servicio. Implementa
/// los metodos abstractos muestra y calcula costo , tambien contiene metodos
/// acceso y modificacion para cada uno de sus atributos
using namespace std;
class Hogar:public Servicio{
public:
///Constructores
Hogar();
Hogar(double,string);
///Metodos de acceso
double getcostoXDia();
string getDescripcion();
///Metodos de modificacion
void setCostoXDia(double costoXDia);
void setDescripcion(string descripcion);
///Metodos virtuales
void muestra();
double calculaCosto(double dias);
private:
///Atributos
double costoXDia;
string descripcion;
};
///Constructores
Hogar::Hogar():Servicio(){
	costoXDia = 0;
	descripcion = "";
}
Hogar::Hogar(double costoXDia,string descripcion):Servicio(clave,tipo)
{
    this->costoXDia=costoXDia;
    this->descripcion=descripcion;
}
///Metodos de acceso
double Hogar::getcostoXDia()
{
    return costoXDia;
}
string Hogar::getDescripcion()
{
    return descripcion;
}
///Metodos de modificacion
void Hogar::setCostoXDia(double costoXDia)
{
 this->costoXDia=costoXDia;
}
void Hogar::setDescripcion(string descripcion)
{
  this->descripcion=descripcion;
}
///Metodos Virtuales
void Hogar::muestra()
{
cout<<"Tipo de servicio : Hogar"<<endl;
cout<<"Detalles  "<<descripcion<<endl;
cout<<"Costo(dia):  "<<costoXDia<<endl;
cout<<"Clave:  "<<clave;
cout<<"Tipo:  "<<tipo;
}
double Hogar::calculaCosto(double diasDuracion)
{
return diasDuracion*costoXDia;
}
#endif // HOGAR_H_INCLUDED
