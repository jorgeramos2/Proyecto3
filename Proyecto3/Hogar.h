#ifndef HOGAR_H_INCLUDED
#define HOGAR_H_INCLUDED
#include"Servicio.h"
using namespace std;
class Hogar:public Empleado{
public:
///Constructores
Hogar();
Hogar(double,string);
///Metodos de acceso
double getcostoXDia();
string getDescripcion();
///Metodos de modificacion
void setcostoXDia();
void setDescripcion();
///Metodos virtuales
void muestra();
double calculaCosto();
private:
double costoXDia;
string descripcion;
};

#endif // HOGAR_H_INCLUDED
