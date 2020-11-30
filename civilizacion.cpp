#include "civilizacion.h"

Civilizacion::Civilizacion()
{

}

Civilizacion::Civilizacion(const string &nombre,
                float ubiX,
                float ubiY,
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

void Civilizacion::setubiX(float v)
{
    ubiX = v;
}

float Civilizacion::getubiX()
{
    return ubiX;
}

void Civilizacion::setubiY(float v)
{
    ubiY = v;
}

float Civilizacion::getubiY()
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