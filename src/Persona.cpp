// Alison Rivera Cisneros C06510
//===============================
#include <list>
#include <iostream>
#include "Persona.h"

using namespace std;

Persona :: Persona(string P_nombre, int P_numced) {
        nombre = P_nombre;
        numced = P_numced;
         }


void Persona:: Mostrar(){
   cout << "El nombre de la persona es: " << nombre << endl;
   cout << "El numero de cedula de la persona es: " << numced << endl;

  }

