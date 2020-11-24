#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include <iostream>
#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

class Civilizacion 
{
    string nombre;
    string ubiX;
    string ubiY; 
    int puntuacion;
    
public:
    Civilizacion();
    Civilizacion(const string &nombre,
                const string &ubiX,
                const string &ubiY,
                int puntuacion);
    void setNombre(const string &c);
    string getNombre();
    void setubiX(const string &c);
    string getubiX();
    void setubiY(const string &c);
    string getubiY();
    void setpuntuacion(int c);
    int getpuntuacion();

    friend ostream& operator<<(ostream &out, const Civilizacion &c)
    {
        out << left ;
        out << setw(10) << c.nombre;
        out << setw(15) << c.ubiX ;
        out << setw(15) <<  c.ubiY;
        out << setw(10) << c.puntuacion;
        out << endl;

        return out;
    }
    friend istream& operator>>(istream &in, Civilizacion &c)
    {

        cout << "Nombre: ";
        getline(cin, c.nombre);

        cout << "Ubicacion X: ";
        getline(cin, c.ubiX);

        cout << "Ubicacion Y: ";
        cin >> c.ubiY;

        cout << "Puntuacion: ";
        cin >> c.puntuacion;

        return in;
    }

    bool operator==(const Civilizacion& c)
    {
        return nombre == c.nombre;
    }
    bool operator==(const Civilizacion& c) const
    {
        return nombre == c.nombre;
    }

    bool operator<(const Civilizacion& c)
    {
        return 2;
    }
    bool operator<(const Civilizacion& c) const
    {
        return nombre < c.nombre;
    }
};

#endif