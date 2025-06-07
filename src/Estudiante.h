#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED
#include "Persona.h"
#include "Materias.h"
#include <iostream>
using namespace std;


class Estudiante : public Persona {
  private:
     string carrera;
     string numcarnet;
     list <Materias> L_materias;


  public:
    Estudiante(string, int, string, string, Materias, Materias, Materias, Materias, Materias);
    void Mostrar();

};

#endif // ESTUDIANTE_H_INCLUDED
