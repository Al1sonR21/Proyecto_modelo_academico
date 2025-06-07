// Alison Rivera Cisneros C06510
//===============================
#include <list>
#include <iostream>
#include "Persona.h"
#include "Materias.h"
#include "Estudiante.h"
#include "Asistente.h"
#include "Equipo laboratorio.h"

using namespace std;


 void APP_load(list<Persona*> &Alumnos ){

 //=============================MATERIAS==================================
    Materias M1("Humanidades I", "HU0302" , 88);
    Materias M2("Seminario I", "SM542" , 70);
    Materias M3("Humanidades II", "HU354" , 83);
    Materias M4("Seminario II", "SM354" , 75);
    Materias M5("Precalculo", "PC0302" , 90);
    Materias M6("Grafica I ", "GF0302" , 84);
    Materias M7("Quimica General I", "QG256", 81);
    Materias M8("Fisica General I", "FG6513", 96);
    Materias M9("Calculo I", "CA544", 79 );
    Materias M10("Programacion I", "PG543", 95);
    Materias M11("Quimica General II","QG354",73);
    Materias M12("Fisica General II","FG857",92);
    Materias M13("Calculo II","CA685",75);
    Materias M14("Mecanica I","MC584",80);
    Materias M15("Mecanica II","MC540",79);
//===========================LABORATORIOS====================================
    EquipoLab EQ1("BU354","Buretra graduada", 22);
    EquipoLab EQ2("AM654","Argolla Met�lica de Laboratorio", 60);
    EquipoLab EQ3("AG351","Agitador Magn�tico",10);
    EquipoLab EQ4("CL254","Centr�fuga de Laboratorio",13);
    EquipoLab EQ5("EG548","Esfera de Gravesande ",25);
    EquipoLab EQ6("BC873","Bloques Calorimetricos",50);
//=========================ESTUDIANTES=======================================
    Estudiante *E1= new Estudiante("Maria Calderon",11240852,"Ingenieria Quimica","C06468",M8,M15,M11,M13,M6);
    Estudiante *E2= new Estudiante("Jose Rodrigez",11240232,"Ingenieria Mecanica","C2543",M1,M5,M7,M9,M6);
    Estudiante *E3= new Estudiante("Camila Mora", 14542316,"Ingenieria Civil","C5412", M9,M10,M4,M6,M14 );
    Estudiante *E4= new Estudiante("Jostin Rivera",1643545, "Ingenieria Agronoma", "C5432", M1,M6,M7,M9,M8);
    Estudiante *E5= new Estudiante("Carolina Madrigal",1564368,"Ingenieria Industrial","C5643",M4,M11,M12,M13,M15);
    Estudiante *E6= new Estudiante("Brandon Alfaro",16543893,"Ingenieria Electrica","C6873",M3,M6,M10,M13,M14);
    Estudiante *E7= new Estudiante("Kenly Cisneros",112400284,"Ingenieria en sistemas","C4684",M2,M13,M15,M7,M10);
//==========================ASISTENTES=======================================
    Asistente *A1=new Asistente("Pablo Rivera",16838728,"Ingenieria Mecatronica","C39373",M7,M8,M10,M14,M4,"Laboratorio de Quimica I","LB643",EQ1,EQ2);
    Asistente *A2=new Asistente("Monica Carmona",1643878,"Ingenieria Quimica","C06854",M13,M14,M11,M12,M3,"Laboratorio de Quimica II","LB387",EQ3,EQ4);
    Asistente *A3=new Asistente("William Cordero",1867494,"Ingenieria Industrial","C0608",M3,M8,M9,M10,M14,"Laboratorio de Fisica II","LB813",EQ5,EQ6);
//==========================================================================
   Alumnos.push_back(E1);
   Alumnos.push_back(E2);
   Alumnos.push_back(E3);
   Alumnos.push_back(E4);
   Alumnos.push_back(E5);
   Alumnos.push_back(E6);
   Alumnos.push_back(E7);
   Alumnos.push_back(A1);
   Alumnos.push_back(A2);
   Alumnos.push_back(A3);


};



void Show_All(const list<Persona*> &Alumnos) {
    cout << "=========== LISTA DE PERSONAS ===========\n";

    for (const auto& persona : Alumnos) {
        cout << "\n------------------------------------------\n";

        // Mostrar tipo de persona
        if (dynamic_cast<Asistente*>(persona)) {
            cout << "[ASISTENTE]\n";
        } else if (dynamic_cast<Estudiante*>(persona)) {
            cout << "[ESTUDIANTE]\n";
        } else {
            cout << "[PERSONA]\n";
        }

        // Llamada polimórfica
        persona->Mostrar();
    }

    cout << "\n=========== FIN DE LA LISTA =============\n";
}


int main() {
    list<Persona*> Alumnos;
    APP_load(Alumnos);
    Show_All(Alumnos);

    // Liberar memoria 
    for (auto p : Alumnos) {
        delete p;
    }

    return 0;
}