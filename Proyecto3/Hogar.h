#ifndef HOGAR_H_INCLUDED
#define HOGAR_H_INCLUDED
#include"Servicio.h"
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
void setcostoXDia(double costoXDia);
void setDescripcion(string descripcion);
///Metodos virtuales
void muestra();
double calculaCosto();
private:
double costoXDia;
string descripcion;
};
///Constructores
Hogar::Hogar()
{
    costoXDia=0;
}
Hogar::Hogar(double costoXDia,string descripcion)
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
void Hogar::setcostoXDia(double costoXDia)
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

}
double Hogar::calculaCosto()
{

}
#endif // HOGAR_H_INCLUDED
