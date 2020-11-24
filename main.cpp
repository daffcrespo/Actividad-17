#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <bits/stdc++.h>


#include "videoGame.h"
using namespace std;

int main() {
    VideoGame v;
    vector<Civilizacion> civilizaciones;
    
    string op;

    while (true)
    {
        cout << "1) Agregar Usuario" << endl;
        cout << "2) Agregar Civilizacion" << endl;
        cout << "3) Insertar" << endl;
        cout << "4) Inicializar" << endl;
        cout << "5) Mostrar Primera" << endl;
        cout << "6) Mostrar Ultima" << endl;
        cout << "7) Ordenar" << endl;
        cout << "8) Eliminar" << endl;
        cout << "9) Buscar" << endl;
        cout << "10) Modificar" << endl;
        cout << "11) Mostrar" << endl;
        cout << "12) Mostrar totales" << endl;
        cout << "13) Salir" << endl;
        getline(cin, op);


        if(op == "1"){
            VideoGame v;
            cin>>v;
            //v.setNombreUsuario();

        }
        else if (op == "2") {
            Civilizacion c;

            cin >> c;

            v.agregarCivilizacion(c); 
            cin.ignore();
        } 
        else if (op == "3") {
            Civilizacion c;
            cin >> c;

            size_t pos;
            cout << "posición: ";
            cin >> pos; cin.ignore();

            if (pos >= v.size()) {
                cout << "Posición no válida" << endl;
            }
            else {
                v.insertar(c, pos);
            }
        }
        else if (op == "4") {
            Civilizacion c;
            cin >> c;

            size_t n;
            cout << "n: ";
            cin >> n; cin.ignore();

            v.inicializar(c, n);
        }
        else if(op == "5"){
            if(v.empty()){
                 cout << "Vector esta vacio." << endl;
            }
            else{
                cout << "La primera civilizacion es: " << endl;
                Civilizacion civi = v.front();
                cout << civi << endl;
            }
        }
        else if(op == "6"){
            if(v.empty()){
                 cout << "Vector esta vacio." << endl;
            }
            else{
                cout << "La ultima civilizacion es: " << endl;
                cout << v.back() << endl;
            }
        }
        else if(op == "7"){
            int opcion;
            cout << "Como deseas ordenar?" << endl;
            cout<<"1)Nombre.\n2)Ubicacion X.\n3)Ubicacion Y.\n4)Puntuacion.\n";
            cin>>opcion;
            if(opcion == 1){
                v.ordenarNombre();
            }
            else if(opcion == 2){
                v.ordenarUbiX();
            }
            else if(opcion == 3){
                v.ordenarUbiY();
            }
            else if(opcion == 4){
                v.ordenarPuntuacion();
            }
            else{
                cout <<endl << "Opcion no valida." << endl;
            }

        }
        
        else if (op == "8") {
            size_t pos;
            cout << "posición a eliminar: ";
            cin >> pos; cin.ignore();

            if (pos >= v.size()) {
                cout << "Posición no válida" << endl;
            }
            else {
                v.eliminar(pos);
            }
        }
        
        else if (op == "9") {
            Civilizacion c;
            cin >> c; cin.ignore();

            Civilizacion *ptr = v.buscar(c);

            if (ptr == nullptr) {
                cout << "no encontrado" << endl;
            }
            else {
                cout << "Se encontro lo siguiente: " << endl;
                cout << *ptr << endl;
            }
        }
       
        else if(op == "10"){
            Civilizacion c;
            cout << endl << "Que civilizacion desea Modificar?" << endl;
           
            cin >> c; cin.ignore();

            Civilizacion *ptr = v.buscar(c);

            if (ptr == nullptr) {
                cout << "no encontrado" << endl;
            }
            else {
                cout << "Se encontro coincidencias con: " << endl;
                cout << *ptr << endl;
                
            }
            
            cout << "Modificar: " << endl;
          
            cin >> c;

           
            v.insertar(c, 0);
            

        }

        else if (op == "11") {
            if(v.empty()){
                cout << endl << "No se han registrado Civilizaciones." << endl << endl;
            }
            else{
                v.mostrarUsuario();
                v.mostrar();
                cout << endl << "El total de civilizaciones registradas es: " << endl;
                cout << v.size() << endl << endl;
            }
            
        }
        else if (op == "12") {
            if(v.empty()){
                cout << endl << "No se han registrado Civilizaciones." << endl << endl;
            }
            else{
                cout << "El total de civilizaciones registradas es: " << endl;
                cout << v.size() << endl << endl;
            } 
        }

        else if(op == "13"){
            break;
        }
    }

    return 0;
}