#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
class Fecha{
public:
Fecha();
Fecha(int,int,int);
/// Metodos de acceso
int getDia();
int getMes();
int getAnio();
/// Metodos de modificacion
void setDia(int dia);
void setMes(int mes);
void setAnio(int anio);
private:
int dia;
int mes;
int anio;
};

Fecha::Fecha()
{
    dia=0;
    mes=0;
    anio=0;
}
Fecha::Fecha(int dia,int mes,int anio)
{
    this->dia=dia;
    this->mes=mes;
    this->anio=anio;
}
/// Metodos de acceso
int Fecha::getDia()
{
    return dia;
}
int Fecha::getMes()
{
    return mes;
}
int Fecha::getAnio()
{
    return anio;
}
/// Metodos de modificacion
void Fecha::setDia(int dia)
{
    this->dia=dia;
}
void Fecha::setMes(int mes)
{
    this->mes=mes;
}
void Fecha::setAnio(int anio)
{
    this->anio=anio;
}

#endif // FECHA_H_INCLUDED
