// Alison Rivera Cisneros C06510
//===============================
#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include <iostream>
using namespace std;

class Persona {
 private:
     string nombre;
     int numced;
 public:
    Persona(string , int);
    virtual void Mostrar();

};

#endif // PERSONA_H_INCLUDED
