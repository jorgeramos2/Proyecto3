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
Contratacion();
///Metodos de acceso
string getClave();
int getIdCliente();
int getdiasDuracion();
void getFecha();
bool checarFecha(int,int,int);
///Metodos de modificacion
void setClave(string clave);
void setIdCliente(int idCliente);
void setDiasDuracion(int diasDuracion);
void setFecha(int,int,int);
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
Contratacion::Contratacion()
{
    clave = "";
    idCliente = 0;
    diasDuracion = 0;
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
void Contratacion::setDiasDuracion(int diasDuracion)
{
    this->diasDuracion=diasDuracion;
}
///Metodos
Fecha Contratacion::calcularFinContrato()
{
    Fecha fechaFin = fechaContrato;
    fechaFin + diasDuracion;
    return fechaFin;
}

void Contratacion::setFecha(int d,int m,int a){
    fechaContrato.setDia(d);
    fechaContrato.setMes(m);
    fechaContrato.setAnio(a);
}

void Contratacion::getFecha(){
    cout << fechaContrato.getDia() << "/";
    cout << fechaContrato.getMes() << "/";
    cout << fechaContrato.getAnio() << endl;
}

bool Contratacion::checarFecha(int d,int m,int a){
    return d == fechaContrato.getDia() && m == fechaContrato.getMes() && a == fechaContrato.getAnio();
}

#endif // CONTRATACION_H_INCLUDED
