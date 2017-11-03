#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED
using namespace std;
class Servicio{
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
virtual double calculaCosto()=0;
protected:
string clave;
char tipo;
};
///Constructores
Servicio::Servicio()
{
    clave="nada";
    tipo=0;
}
Servicio::Servicio(string clave,char tipo)
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
