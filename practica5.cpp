/*Problema 1 - (60 puntos)
La Secretaría de Espacios Verdes tiene un inventario de todos los árboles del Municipio de General Lara.
 Se censaron 50 árboles en cada una de las localidades del municipio. Por cada árbol se registró:

-     Código de localidad (entero)
-     Código de árbol (entero)
-     Edad del árbol (entero)
-     Altura (ﬂoat)
-     Estado general del árbol (1 - Óptimo, 2 - Satisfactorio, 3 - Enfermo, 4 - Peligroso)*/

/***La información se encuentra agrupada por localidad.
Para indicar el ﬁn de la carga de datos se ingresa un código de localidad igual a cero. Se pide calcular e informar:***/

/*
A) Por cada localidad, el porcentaje de árboles peligrosos en relación al total de árboles de
la localidad.
B) La cantidad de localidades que no registraron árboles enfermos.
C) La edad del árbol más viejo que se haya registrado en la primera localidad ingresada.
D) El promedio de altura de los árboles óptimos.
NOTA: Sólo habrá un árbol de la primera localidad que registre la mayor edad*/



#include <iostream>
using namespace std;
int main (){

int codLocalidad;
int codArbol;
int edadArbol;
float altura;
int estado;

//------------------------
//Punto A
int optimo=0;
int satis=0;
int enfermo=0;
int peligroso=0;

int totalArboles=0;

//PUNTO B
int sinEnfermos=0;

//Punto C

bool primerLoca = true;
int masViejo = 0;

//Punto D

float altOptimos=0;
float promAltOptimos=0;


cout << "Ingrese codigo de localidad: ";
cin >> codLocalidad;

while(codLocalidad!=0){

    float porPeligroso=0;

    for (int i=0; i<2; i++){
        cout << "Ingrese codigo de arbol: ";
        cin >> codArbol;
        cout << "Ingrese edad del arbol: ";
        cin >> edadArbol;
        cout << "Ingrese altura del arbol: ";
        cin >> altura;
        cout << "Ingrese estado del arbol 1)optimo - 2)satisfactorio - 3)enfermo - 4)peligroso: ";
        cin >> estado;


        switch(estado){
        case 1:
            optimo++;
            altOptimos+=altura;
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

        totalArboles = optimo + satis + enfermo + peligroso;
        porPeligroso = peligroso*100/(float)totalArboles;

        //--------------------------------------------------------------------------------

        if(primerLoca==true){
            if (edadArbol>masViejo){
                masViejo=edadArbol;
            }
        }

    } ///Final de for

    //-----------------------------------------------------------------------------------

    if(enfermo==0){
        sinEnfermos++;
    }

    //----------------------------------------------------------------------------------

    primerLoca=false;

    //---------------------------------------------------------------------------------

    promAltOptimos= altOptimos/optimo;


cout << endl << "----------------------------" << endl;
cout << "Punto A: El porcentaje de arboles peligrosos en relacion al total de arboles de la localidad: " << porPeligroso <<endl;
cout << endl << "----------------------------" << endl;
//-------------------------------------
cout << "Ingrese codigo de localidad: ";
cin >> codLocalidad;


}///Final de while



cout << endl << "----------------------------" << endl;
cout << "Punto B: La cantidad de localidades que no registraron arboles enfermos: " << sinEnfermos << endl;
cout << endl << "----------------------------" << endl;
cout << "Punto C: La edad del arbol mas viejo que se haya registrado en la primera localidad ingresada: " << masViejo << endl;
cout << endl << "----------------------------" << endl;
cout << "Punto D: El promedio de altura de los arboles optimos: " << promAltOptimos << endl;




return 0;
}




