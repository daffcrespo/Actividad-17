#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include "civilizacion.h"
#include <vector>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>


class VideoGame{
private:
    string nombreUsuario;
    vector<Civilizacion> civilizaciones;
    vector<VideoGame> usuarios;
    size_t contador;

public:
    VideoGame();
    VideoGame(const string &getNombreUsuario);
    void agregarCivilizacion(const Civilizacion &c);
    void mostrar();
    void mostrarUsuario();
    
    void setNombreUsuario(const string &v);
    string getNombreUsuario();
    Civilizacion front();
    Civilizacion back();
    bool empty();

    void insertar(const Civilizacion &c, size_t pos);
    size_t size();
    void inicializar(const Civilizacion &c, size_t n);
    void eliminar(size_t pos);
    void ordenarNombre();
    void ordenarUbiX();
    void ordenarUbiY();
    void ordenarPuntuacion();
    int pos();
    
    Civilizacion* buscar(const Civilizacion &c);
    Civilizacion* modificar(const Civilizacion &c);
    friend VideoGame& operator<<(VideoGame &v, const Civilizacion &c)
    {
        v.agregarCivilizacion(c);

        return v;
    }

    friend istream& operator>>(istream &in, VideoGame &v)
    {

        cout << "Nombre Usuario: ";
        getline(cin, v.nombreUsuario);

        return in;
    }

    friend ostream& operator<<(ostream &out, const VideoGame &v)
    {
        out << left ;
        out << setw(10) << v.nombreUsuario;
        return out;
    }
};

#endif