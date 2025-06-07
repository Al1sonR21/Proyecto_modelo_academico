// Alison Rivera Cisneros C06510
//===============================
#include <list>
#include <iostream>
#include "Materias.h"
#include "Estudiante.h"

using namespace std;

Estudiante :: Estudiante (string P_nombre, int P_numced, string E_carrera, string E_numcarnet,Materias materia1,Materias materia2,Materias materia3,Materias materia4,Materias materia5): Persona(P_nombre,P_numced) {
        carrera = E_carrera;
        numcarnet = E_numcarnet;
        L_materias.push_front(materia1);
        L_materias.push_front(materia2);
        L_materias.push_front(materia3);
        L_materias.push_front(materia4);
        L_materias.push_front(materia5);

}




void Estudiante :: Mostrar() {
  Persona :: Mostrar();
  cout <<"Esta persona cursa la carera de: " << carrera <<endl;
  cout <<"Su carnet es: " << numcarnet << endl;

  list<Materias>::iterator Inicio = L_materias.begin();
  list<Materias>::iterator Final  = L_materias.end();
  while (Inicio != Final) {
    Inicio -> Mostrar();
    Inicio++;
  }

}


