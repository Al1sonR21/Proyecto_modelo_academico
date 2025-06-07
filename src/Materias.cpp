// Alison Rivera Cisneros C06510
//===============================
#include <list>
#include <iostream>
#include "Materias.h"

using namespace std;

Materias :: Materias(string M_nombre,string M_codigo, int M_nota) {
        codigo = M_codigo;
        nombre = M_nombre;
        nota = M_nota;
}


void Materias :: Mostrar() {
   cout << "Esta cursando: " << nombre << endl;
   cout << "De codigo: " << codigo << endl;
   cout << "Con una nota de: " << nota << endl;
}


