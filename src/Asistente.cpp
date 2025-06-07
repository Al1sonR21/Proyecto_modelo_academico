// Alison Rivera Cisneros C06510
//===============================
#include <list>
#include <iostream>
#include "Materias.h"
#include "Estudiante.h"
#include "Asistente.h"
#include "Equipo laboratorio.h"
using namespace std;

Asistente:: Asistente (string P_nombre, int P_numced, string E_carrera, string E_numcarnet,Materias materia1,Materias materia2,Materias materia3,Materias materia4,Materias materia5, string A_nombrelab, string A_codigolab, EquipoLab EquipoLab1, EquipoLab EquipoLab2) : Estudiante (P_nombre,P_numced,E_carrera,E_numcarnet, materia1, materia2, materia3, materia4, materia5) {
        codigolab = A_codigolab;
        nombrelab = A_nombrelab;
        L_EquipoLab.push_front(EquipoLab1);
        L_EquipoLab.push_front(EquipoLab2);
}

void Asistente :: Mostrar() {
  Estudiante :: Mostrar();
  cout <<"Esta persona cursa el laboratotio de: " << nombrelab <<endl;
  cout <<"Codigo: " << codigolab << endl;

  list<EquipoLab>::iterator Inicio = L_EquipoLab.begin();
  list<EquipoLab>::iterator Final  = L_EquipoLab.end();
  while (Inicio != Final) {
    Inicio -> Mostrar();
    Inicio++;
  }

}
