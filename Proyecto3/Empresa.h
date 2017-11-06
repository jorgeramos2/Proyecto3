#ifndef EMPRESA_H_INCLUDED
#define EMPRESA_H_INCLUDED
#include"Servicio.h"
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
double costoXMes;
int cantPersonas;
string descripcion;
double adicional;
};
///Constructores


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
#endif // EMPRESA_H_INCLUDED
