#ifndef VALIDACION_H
#define VALIDACION_H

#include <string>

class Validacion {
public:
    
    static bool soloLetras(const char* cadena) {
        // Caso especial: cadena vacía
        if (*cadena == '\0') {
            return false;
        }
        
        // Recorrer la cadena usando aritmética de punteros
        const char* ptr = cadena;
        while (*ptr != '\0') {
            // Verificar que el carácter sea una letra mayúscula o minúscula
            if ((*ptr < 'A' || *ptr > 'Z') && (*ptr < 'a' || *ptr > 'z')) {
                return false;
            }
            // Avanzar el puntero
            ptr++;
        }
        
        // Si llegamos aquí, todos los caracteres son letras
        return true;
    }
    
    static bool soloLetras(const std::string& cadena) {
        return soloLetras(cadena.c_str());
    }
    
    static bool soloLetrasLongitudMinima(const char* cadena, unsigned int longitudMinima) {
        // Verificar que no sea una cadena vacía
        if (*cadena == '\0') {
            return false;
        }
        
        // Contar caracteres mientras validamos
        unsigned int contador = 0;
        const char* ptr = cadena;
        
        while (*ptr != '\0') {
            // Verificar que el carácter sea una letra mayúscula o minúscula
            if ((*ptr < 'A' || *ptr > 'Z') && (*ptr < 'a' || *ptr > 'z')) {
                return false;
            }
            contador++;
            ptr++;
        }
        
        // Verificar que cumpla con la longitud mínima
        return contador >= longitudMinima;
    }
    
    static void aMayusculas(char* cadena) {
        char* ptr = cadena;
        while (*ptr != '\0') {
            // Si es minúscula, convertir a mayúscula
            if (*ptr >= 'a' && *ptr <= 'z') {
                *ptr = *ptr - 'a' + 'A';
            }
            ptr++;
        }
    }
    
    static void aMinusculas(char* cadena) {
        char* ptr = cadena;
        while (*ptr != '\0') {
            // Si es mayúscula, convertir a minúscula
            if (*ptr >= 'A' && *ptr <= 'Z') {
                *ptr = *ptr - 'A' + 'a';
            }
            ptr++;
        }
    }
};

#endif // VALIDACION_H
