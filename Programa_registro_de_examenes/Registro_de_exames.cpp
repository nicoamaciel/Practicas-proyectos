/*
9
Se dispone de la información de los exámenes rendidos por algunos estudiantes de la UTN FRGP.
Por cada registro de examen se conoce:
Legajo del estudiante (entero)
Código de materia (entero)
Nota (float)

La finalización de la carga de datos se indica con un legajo de estudiante mayor a 30000.  Calcular e informar:

A) La nota promedio entre todos los estudiantes.
B) El legajo del estudiante con menor nota.
C) La cantidad de exámenes rendidos para la materia 10.
D) El porcentaje de aprobados y no aprobados.

NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.


*/



#include <iostream>
using namespace std;
int main(){
    int legajo;
    int codMateria;
    float nota;

    //Punto A
    float contNota=0;
    float acuNota=0;
    float proNota=0;

    //Punto B
    bool validacion1=true;
    int menLegajo=0;
    int menNota=0;

    //Punto C
    int exaRendidos=0;

    //Punto D
    float noAprobado=0;
    float Aprobado=0;
    float porApro=0;
    float porNoAprob=0;


    cout << "Ingrese numero de legajo: ";
    cin >> legajo;
    while(legajo<30000){

    cout << "Ingrese codigo de materia: ";
    cin >> codMateria;
    cout << "Ingrese nota: ";
    cin >> nota;

    //Punto A
    if(nota>0){
        contNota++;
        acuNota+=nota;
    }

    proNota=acuNota/contNota;

    //Punto B
    if(validacion1==true){
        menNota=nota;
        menLegajo=legajo;
        validacion1=false;
    }
    else{
        if(nota<menNota){
            menNota=nota;
            menLegajo=legajo;
        }
    }

    //Punto C
    if(codMateria==10){
        exaRendidos++;
    }

    //Punto D

    if(nota>=6){
        Aprobado++;
    }
    else{
        noAprobado++;
    }

    porApro = Aprobado*100/contNota;
    porNoAprob = noAprobado*100/contNota;


    cout << endl << "---------------------------" << endl;
    cout << "Ingrese numero de legajo: ";
    cin >> legajo;
    }





    cout << endl << "---------------------------" << endl;
    cout << "Punto A: Nota promedio entre todos los estudiantes: " << proNota <<endl;
    cout << endl << "---------------------------" << endl;
    cout << "Punto B: El legajo del estudiante con menor nota: " << menLegajo <<endl;
    cout << endl << "---------------------------" << endl;
    cout << "Punto C: La cantidad de examenes rendidos para la materia 10: " << exaRendidos <<endl;
    cout << endl << "---------------------------" << endl;
    cout << "Punto D: El porcentaje de aprobados :" << porApro << " % y no aprobados: " << noAprobado <<" % " << endl;



return 0;
}
