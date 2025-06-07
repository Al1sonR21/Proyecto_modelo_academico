#ifndef MATERIAS_H_INCLUDED
#define MATERIAS_H_INCLUDED
#include <iostream>
using namespace std;

class Materias {
 private:
      string codigo;
      string nombre;
      int nota;
    public:
       Materias(string , string, int);
       void Mostrar();


};



#endif // MATERIAS_H_INCLUDED
