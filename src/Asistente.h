#ifndef ASISTENTE_H_INCLUDED
#define ASISTENTE_H_INCLUDED
#include "Estudiante.h"
#include "Materias.h"
#include "Equipo laboratorio.h"

class Asistente : public Estudiante {
 private:
     string codigolab;
     string nombrelab;
     list <EquipoLab> L_EquipoLab;
 public:
    Asistente(string, int, string, string, Materias, Materias, Materias, Materias, Materias, string, string,EquipoLab, EquipoLab );
    void Mostrar ();

};



#endif // ASISTENTE_H_INCLUDED
