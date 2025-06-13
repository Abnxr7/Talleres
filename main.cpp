#include <iostream>
#include <string>
using namespace std;
#include "OrdenacionLetras.cpp"
#include "Validacion.h"

int main()
{

    int cantidad = 0;

    cout << "Ingrese la cantidad de personas: ";
    cin >> cantidad;

    string *nombres = new string[cantidad];
    Persona *personas = new Persona[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        string nombre;
        bool nombreValido = false;
        
        do {
            cout << "Ingrese el nombre de la persona " << (i + 1) << " (solo letras): ";
            cin >> nombre;
            
            // Validar que el nombre contenga solo letras
            nombreValido = Validacion::soloLetras(nombre);
            
            if (!nombreValido) {
                cout << "Error: El nombre debe contener solo letras (sin espacios, números ni símbolos)." << endl;
            }
        } while (!nombreValido);
        
        ordenarLetrasNombreAsc(nombre);
        personas[i] = Persona(nombre);
    }

    // impresion de los nombres por letras ordenados
    cout << "Nombres ordenados por letras ascendente: " << endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout << personas[i].nombre << endl;
    }

    cout << "Nombres ordenados por letras descendente: " << endl;
    // Ordenar los nombres por letras descendente
    for (int i = 0; i < cantidad; i++)
    {
        ordenarLetrasNombreDes(personas[i].nombre);
        cout << personas[i].nombre << endl;
    }

    delete[] personas;

    delete[] nombres;
    return 0;
}