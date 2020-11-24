#include "civilizacion.h"

Civilizacion::Civilizacion()
{

}

Civilizacion::Civilizacion(const string &nombre,
              const string &ubiX,
              const string &ubiY,
              int puntuacion)
{
    this->nombre = nombre;
    this->ubiX = ubiX;
    this->ubiY = ubiY;
    this->puntuacion = puntuacion;
}

void Civilizacion::setNombre(const string &v)
{
    nombre = v;
}

string Civilizacion::getNombre()
{
    return nombre;
}

void Civilizacion::setubiX(const string &v)
{
    ubiX = v;
}

string Civilizacion::getubiX()
{
    return ubiX;
}

void Civilizacion::setubiY(const string &v)
{
    ubiY = v;
}

string Civilizacion::getubiY()
{
    return ubiY;
}

void Civilizacion::setpuntuacion(int v)
{
    puntuacion = v;
}

int Civilizacion::getpuntuacion()
{
    return puntuacion;
}