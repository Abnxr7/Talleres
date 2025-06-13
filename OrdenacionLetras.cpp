#include <iostream>
#include <string>
#include "Persona.h" 
using namespace std;

// funcion para ordenar por letras del nombre usando Bubble Sort

// Función para ordenar las letras de un nombre usando Bubble Sort y aritmética de punteros
void ordenarLetrasNombreAsc(string& nombre) {
    if (nombre.empty()) return;
    
    char* inicio = &nombre[0];
    char* final = inicio + nombre.length();
    
    for (char* i = inicio; i < final - 1; i++) {
        for (char* j = inicio; j < final - 1 - (i - inicio); j++) {
            // Comparar caracteres por su código ASCII
            if (*j > *(j + 1)) {
                // Intercambiar caracteres
                char temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;
            }
        }
    }
}

void ordenarLetrasNombreDes(string& nombre) {
    if (nombre.empty()) return;
    
    char* inicio = &nombre[0];
    char* final = inicio + nombre.length();
    
    for (char* i = inicio; i < final - 1; i++) {
        for (char* j = inicio; j < final - 1 - (i - inicio); j++) {
            // Comparar caracteres por su código ASCII
            if (*j < *(j + 1)) {
                // Intercambiar caracteres
                char temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;
            }
        }
    }
}

// Función para ordenar las letras dentro de cada nombre de las personas
void ordenarLetrasDeNombres(Persona* personas, int cantidad) {
    Persona* final = personas + cantidad;
    
    // Recorrer cada persona y ordenar las letras de su nombre
    for (Persona* p = personas; p < final; p++) {
        ordenarLetrasNombreAsc(p->nombre);
    }
}
