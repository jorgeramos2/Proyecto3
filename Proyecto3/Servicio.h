#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED
#include"Contratacion.h"
/// La clase Servicio es una clase abstracta que contiene los metodos abstractos
/// muestra y calcula costo , tambien contiene metodos de acceso y modificacion
/// para cada uno de sus atributos
using namespace std;
class Servicio:public Contratacion{
public:
///Constructores
Servicio();
Servicio(string,char);
///Metodos acceso
string getClave();
char getTipo();
///Metodos de modificacion
void setClave(string clave);
void setTipo(char tipo);
///Metodos virtuales
virtual void muestra()=0;
virtual double calculaCosto(int diasDuracion)=0;
protected:
///Atributos
string clave;
char tipo;
};
///Constructores

Servicio::Servicio(string clave,char tipo):Contratacion(clave,idCliente,fechaContrato,diasDuracion)
{
    this->clave=clave;
    this->tipo=tipo;
}
///Metodos de acceso
string Servicio::getClave()
{
    return clave;
}
char Servicio::getTipo()
{
    return tipo;
}
///Metodos de modificacion
void Servicio::setClave(string clave)
{
    this->clave=clave;
}
void Servicio::setTipo(char tipo)
{
    this->tipo=tipo;
}
#endif // SERVICIO_H_INCLUDED
