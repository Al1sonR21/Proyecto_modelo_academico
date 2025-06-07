#ifndef EQUIPO_LABORATORIO_H_INCLUDED
#define EQUIPO_LABORATORIO_H_INCLUDED
#include <iostream>
using namespace std;

class EquipoLab{
 private:
     string codequipo;
     string descripequipo;
     int numequipo;
 public:
    EquipoLab(string, string, int);
    void Mostrar ();

//     void setcodequipo(string S_codequipo) {
//        codequipo = S_codequipo;
//    }
//    void setdescripequipo(string S_descripequipo) {
//        descripequipo = S_descripequipo,
//    }
//    void setnumequipo(int S_numequipo) {
//        numequipo = S_numequipo,
//    }
//     string getcodequipo() {
//      return codequipo
//    }
//     string getdescripequipo() {
//      return descripequipo
//    }
//     int getnumequipo() {
//      return numequipo
//    }
};


#endif // EQUIPO_LABORATORIO_H_INCLUDED
