/*La Secretar�a de Espacios Verdes tiene un inventario de todos los �rboles del Municipio de
General Lara. Por cada uno de ellos se registr� la siguiente informaci�n:

- C�digo de �rbol (entero)
- Edad del �rbol (entero)
- Altura (float)
- Estado general del �rbol (1 - �ptimo, 2 - Satisfactorio, 3 - Enfermo, 4 - Peligroso)*/

/***El fin de datos se ingresa con un c�digo de �rbol negativo. Se pide calcular e informar:***/

/*
A) La edad del �rbol m�s alto que no sea peligroso. Indicar tambi�n la altura.
B) El promedio de altura de los �rboles.
C) El estado general del �rbol que menos cantidad de �rboles haya registrado.*/


#include <iostream>
using namespace std;

int main (){
    int codArbol;
    int edadArbol;
    float altura;
    int estado;

    //Punto A
    int edadNoPeligroso=0;
    float maxAltura=0;

    //Punto B
    float contadorAlt=0;
    float acuAltu=0;
    float promedioAltura=0;

    //Punto C
    int optimo;
    int satis;
    int enfermo;
    int peligroso;
    int menosEstado=0;

    //---------------------------------------------------------------------

    cout << "Ingrese codigo de arbol: ";
    cin >> codArbol;

    while(codArbol!=0){
    cout << "Ingrese edad del arbol: ";
    cin >> edadArbol;
    cout << "Ingrese altura del arbol: ";
    cin >> altura;
    cout << "Ingrese estado del arbol de las sieguientes opciones: " << endl;
    cout << "1 - Optimo, 2 - Satisfactorio, 3 - Enfermo, 4 - Peligroso: ";
    cin >> estado;

    //----------------------------------------------------------------------

    //PUNTO B
    if(altura>0){
      contadorAlt++;
      acuAltu+=altura;
    }
    promedioAltura = acuAltu/contadorAlt;


    //PUNTO A
    if(estado!=4 ){
        if(altura>maxAltura){
            maxAltura=altura;
            edadNoPeligroso=edadArbol;
        }
    }

    //PUNTUO C
    switch(estado){
    case 1:
        optimo++;
    break;
    case 2:
        satis++;
    break;
    case 3:
        enfermo++;
    break;
    case 4:
        peligroso++;
    break;
    }

    if(optimo<satis && optimo<enfermo && optimo<peligroso){
        menosEstado=1;
    }
    else{
        if(satis<optimo && satis<enfermo && satis<peligroso){
            menosEstado=2;
        }
        else{
            if(enfermo<optimo && enfermo<satis && enfermo<peligroso){
                menosEstado=3;
            }
            else{
                menosEstado=4;
            }
        }
    }


    //------------------------------------------------------------------------------

    cout << endl << "--------------------------------------" << endl;
    cout << "Ingrese codigo de arbol: ";
    cin >> codArbol;
    }//---------FIN DE CICLO WHILE---------------------------------------------------------------
    cout << endl << "--------------------------------------" << endl;
    cout << "Punto A: " << endl;
    cout << "Edad del arbol mas alto que no sea peligroso: "  << edadNoPeligroso << " Anos - Altura: " << maxAltura << endl;
    cout << endl << "--------------------------------------" << endl;
    cout << "Punto B:" << endl;
    cout << "Promedio de altura de los �rboles: #" << promedioAltura << endl;
    cout << endl << "--------------------------------------" << endl;
    cout << "Punto C: " << endl;
    cout << "El estado general del �rbol que menos cantidad de �rboles haya registrado: " << endl;
    if(menosEstado == 1) {
        cout << "Optimo" << endl;
    }
    else{
        if(menosEstado==2){
            cout << "Satisfactorio" << endl;
        }
        else{
            if(menosEstado==3){
                cout << "Enfermo" << endl;
            }
            else{
                cout << "Peligroso" << endl;
            }
        }
    }


return 0;
}
