#ifndef EMPRESA_H_INCLUDED
#define EMPRESA_H_INCLUDED
#include"Servicio.h"
/// La clase Empresa es una clase derivada de la clase Servicio. Implementa
/// los metodos abstractos muestra y calcula costo , tambien contiene metodos
/// acceso y modificacion para cada uno de sus atributos
using namespace std;
class Empresa:public Servicio{
public:
///Constructores
Empresa();
Empresa(double,int,string,double);
///Metodos de acceso
double getcostoXMes();
int getcantPersonas();
string getDescripcion();
double getAdicional();
///Metodos de modificaicon
void setcostoXMes(double costoXMes);
void setcantPersonas(int cantPersonas);
void setDescripcion(string descripcion);
void setAdicional(double adicional);
///Metodos Virtuales
void muestra();
double calculaCosto();

private:
///Atributos
double costoXMes;
int cantPersonas;
string descripcion;
double adicional;
};
///Constructores
Empresa::Empresa()
{
    costoXMes=0;
    cantPersonas=0;
    adicional=0;
}
Empresa::Empresa(double getcostoXMes,int cantPersonas,string descripcion,double adicional)
{
this->costoXMes=costoXMes;
this->cantPersonas=cantPersonas;
this->descripcion=descripcion;
this->adicional=adicional;
}
///Metodos de acceso
double Empresa::getcostoXMes()
{
    return costoXMes;
}
int Empresa::getcantPersonas()
{
    return cantPersonas;
}
string Empresa::getDescripcion()
{
    return descripcion;
}
double Empresa::getAdicional()
{
    return adicional;
}
///Metodos de modificacion
void Empresa::setcostoXMes(double costoXMes)
{
    this->costoXMes=costoXMes;
}
void Empresa::setcantPersonas(int cantPersonas)
{
   this->cantPersonas=cantPersonas;
}
void Empresa::setDescripcion(string descripcion)
{
  this->descripcion=descripcion;
}
void Empresa::setAdicional(double adicional)
{
  this->adicional=adicional;
}
///Metodos Virtuales
void Empresa::muestra()
{

}
double Empresa::calculaCosto()
{

}
#endif // EMPRESA_H_INCLUDED
