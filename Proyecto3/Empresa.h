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
double getAdicional();
///Metodos de modificaicon
void setcostoXMes(double costoXMes);
void setcantPersonas(int cantPersonas);
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


#endif // EMPRESA_H_INCLUDED
