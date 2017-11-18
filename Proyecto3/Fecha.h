#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
/// La clase Fecha contiene metodos de acceso y modificacion para todos sus atributos
/// al igual contiene una sobrecarga que sirve para sumarle dias a un objeto tipo fecha
/// y para poder utilizar objetos de tipo Fecha con cin y cout.
#include <iostream>
using namespace std;
class Fecha{
public:
///Constructores
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
/// Sobrecarga del operador +
friend void operator + (Fecha f1, int d);
/// Sobrecarga del operador <<
friend ostream& operator<< (ostream& stream, Fecha& f);
/// Sobrecarga del operador >>
friend istream& operator>> (istream& stream, Fecha& f);

private:
///Atributos
int dia;
int mes;
int anio;
};
///Constructores
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

void operator + (Fecha f1, int d)
{
    f1.dia+=d;
    while (f1.mes > 12 || ((!f1.mes%2==0 && f1.dia > 31) || (f1.mes%2==0 && f1.dia > 30) || (f1.mes==2 && f1.dia > 28))){
        if (!f1.mes%2==0){
            if (f1.dia > 31){
            f1.mes++;
            f1.dia-=31;
            }
        if (f1.mes > 12)
            f1.mes-=12;
        }
        else if (f1.mes%2==0 && f1.mes != 2){
            if (f1.dia > 30){
            f1.mes++;
            f1.dia-=30;
            }
        if (f1.mes > 12)
            f1.mes-=12;
        }
        else {
            if(((f1.anio % 4 == 0)&&(f1.anio % 100 != 0) )||((f1.anio % 400 == 0)&&(f1.anio % 4 == 0))){
                if (f1.dia > 29){
                f1.mes++;
                f1.dia-=29;
                }
                if (f1.mes > 12)
                f1.mes-=12;
            }
            else {
                if (f1.dia > 28){
                f1.mes++;
                f1.dia-=28;
                }
                if (f1.mes > 12)
                f1.mes-=12;
            }
        }
    }  
}

ostream& operator<<(ostream& os, Fecha& f)
{
    os << f.dia << "/" << f.mes << f.anio;
    return os;
}

istream& operator>>(istream& input,Fecha& f)
{
    input >> f.dia;
    input >> f.mes;
    input >> f.anio;
    return input;
}

#endif // FECHA_H_INCLUDED
