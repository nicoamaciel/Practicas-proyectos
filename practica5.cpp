/*Problema 1 - (60 puntos)
La Secretaría de Espacios Verdes tiene un inventario de todos los árboles del Municipio de General Lara.
Por cada una de las cinco localidades del municipio se registró la información de algunos de los árboles censados.
Por cada árbol se registró:

-     Código de localidad (entero)
-     Código de árbol (entero)
-     Edad del árbol (entero)
-     Altura (ﬂoat)
-     Estado general del árbol (1 - Óptimo, 2 - Satisfactorio, 3 - Enfermo, 4 - Peligroso)
*/
/**La información se encuentra agrupada por localidad.
Para indicar el ﬁn de la carga de datos de una localidad se ingresa un código de árbol igual a cero. Se pide calcular e informar:**/
/*
A) Por cada localidad, el promedio de edad de los árboles.
B) El código de localidad que mayor porcentaje de árboles peligrosos haya registrado.
C) El código de árbol enfermo que mayor altura haya registrado. Indicar también la altura.
D) El porcentaje de árboles enfermos en relación al total de árboles.

NOTA: Sólo habrá un árbol enfermo que registre la mayor altura.
NOTA: Sólo habrá una localidad que registre el mayor porcentaje de árboles peligrosos.*/

#include <iostream>
using namespace std;
int main (){
    int codLocalidad;
    int codArbol;
    int edadArbol;
    float altura;
    int estado;

    int optimo=0;
    int satis=0;
    int enfermo=0;
    int peligroso=0;

    int totalArboles =0;

    //Punto B

    int maxCodigo=0;
    float porPeligroso=0;
    float maxPorcentajePel=0;

    //Punto C

    int maxAlturaEnf=0;
    int maxCodArbol=0;

    //Punto D
    float porArbolesEnf;


    for (int i=0; i<5; i++){
    //Punto A
    int acuEdad=0;
    int contArboles=0;
    float proEdadArboles=0;


    cout << "Ingrese codigo de localidad: ";
    cin >> codLocalidad;
    cout << "Ingrese codigo de arbol: ";
    cin >> codArbol;

        while (codArbol!=0){
        cout << "Ingrese edad del arbol: ";
        cin >> edadArbol;
        cout << "Ingrese altura del arbol: ";
        cin >> altura;
        cout << "Ingrese estado del arbol- opciones: 1) Optimo, 2) Satisfactorio, 3) Enfermo, 4) Peligroso: ";
        cin >> estado;

        ///Punto A
        contArboles++;
        acuEdad+=edadArbol;

        proEdadArboles = (float)acuEdad/contArboles;

        ///Punto B

        switch(estado){
        case 1:
            optimo++;
        break;
        case 2:
            satis++;
        break;
        case 3:
            enfermo++;
            //PUNTO 4
            if(altura>maxAlturaEnf){
                maxAlturaEnf=altura;
                maxCodArbol=codArbol;
            }
        break;
        case 4:
            peligroso++;
        break;
        }

        totalArboles = optimo + satis + enfermo + peligroso;
        porPeligroso = peligroso*100/(float)totalArboles;

        if(porPeligroso>maxPorcentajePel){
            maxPorcentajePel=porPeligroso;
            maxCodigo=codLocalidad;
        }

        //Punto D
        porArbolesEnf = enfermo*100/(float)totalArboles;


        cout << endl << "-------------------------------" << endl;
        cout << "Ingrese codigo de arbol: ";
        cin >> codArbol;
        }


        cout << endl << "-------------------------------" << endl;
        cout << "Punto A: Por cada localidad, el promedio de edad de los arboles: " << proEdadArboles << endl;


    }

    cout << endl << "-------------------------------" << endl;
    cout << "Punto B: Codigo de localidad que mayor porcentaje de arboles peligrosos registro: " << maxCodigo << endl;
    cout << endl << "-------------------------------" << endl;
    cout << "Punto C: Codigo de arbol enfermo que mayor altura registro: " << maxCodArbol << " Altura: "<< maxAlturaEnf << endl;
    cout << endl << "-------------------------------" << endl;
    cout << "Punto D: Porcentaje de Arboles enfermos en relacion al total: " << porArbolesEnf << " %" <<endl;

return 0;
}
