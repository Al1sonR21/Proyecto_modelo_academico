// Alison Rivera Cisneros C06510
//===============================
#include <list>
#include <iostream>
#include "Equipo laboratorio.h"
using namespace std;

EquipoLab :: EquipoLab(string E_codequipo, string E_descripequipo, int E_numequipo ) {
        codequipo = E_codequipo;
        descripequipo = E_descripequipo;
        numequipo = E_numequipo;
}

void EquipoLab :: Mostrar(){
   cout << "El laboratotio cuenta con: " << descripequipo << endl;
   cout << "De codigo: " << codequipo << endl;
   cout << "Numero: " << numequipo << endl;
}
