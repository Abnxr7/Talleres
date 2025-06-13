#include <iostream>
#include <string>
using namespace std;

class Persona{
public:
    string nombre;
    int edad;
    string cedula;
    Persona(const string &n, int e, const string &c) : nombre(n), edad(e), cedula(c) {}
    Persona(const string &n) : nombre(n){}
    Persona() : nombre(""), edad(0), cedula("") {}

};