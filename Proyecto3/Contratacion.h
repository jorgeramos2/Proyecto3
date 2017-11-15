#ifndef CONTRATACION_H_INCLUDED
#define CONTRATACION_H_INCLUDED
#include"Fecha.h"
using namespace std;
///La clase contratacion usa los atributos de la clase fecha para calcular la
/// fecha de culminacion del contrato. Al igual de tener metodos de aceso y modificacion
/// para sus atributos.
class Contratacion{
public:
///Constructores
Contratacion(string clave,int idCliente,Fecha fechaContrato,int diasDuracion);
///Metodos de acceso
string getClave();
int getIdCliente();
int getdiasDuracion();
///Metodos de modificacion
void setClave(string clave);
void setIdCliente(int idCliente);
void setdiasDUracion(int diasDuracion);
///Metodos
Fecha calcularFinContrato();
protected:
///Atributos
string clave;
int idCliente;
Fecha fechaContrato;
int diasDuracion;
};
///Constructores
Contratacion::Contratacion(string clave,int idCliente,Fecha fechaContrato,int diasDuracion)
{
    this->clave=clave;
    this->idCliente=idCliente;
    this->fechaContrato=fechaContrato;
    this->diasDuracion=diasDuracion;
}
///Metodos de acceso
string Contratacion::getClave()
{
    return clave;
}
int Contratacion::getIdCliente()
{
    return idCliente;
}
int Contratacion::getdiasDuracion()
{
    return diasDuracion;
}
///Metodos de modificacion
void Contratacion::setClave(string clave)
{
    this->clave=clave;
}
void Contratacion::setIdCliente(int idCliente)
{
    this->idCliente=idCliente;
}
void Contratacion::setdiasDUracion(int diasDuracion)
{
    this->diasDuracion=diasDuracion;
}
///Metodos
Fecha Contratacion::calcularFinContrato()
{

}
#endif // CONTRATACION_H_INCLUDED
