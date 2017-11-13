#ifndef CONTRATACION_H_INCLUDED
#define CONTRATACION_H_INCLUDED
using namespace std;
class Contratacion{
public:
///Constructores
Contratacion();
///Metodos de acceso
string getClave();
int getIdCliente();
int getdiasDuracion();
///Metodos de modificacion
void setClave(string clave);
void setIdCliente(int idCliente);
void setdiasDUracion(int diasDuracion);
private:
///Atributos
string clave;
int idCliente;
int diasDuracion;
};
///Constructores

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
#endif // CONTRATACION_H_INCLUDED
