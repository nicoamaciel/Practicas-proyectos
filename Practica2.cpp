/*
La Secretaría de Espacios Verdes tiene un inventario de todos los árboles del Municipio de General Lara.
En total son 245800 árboles. Por cada uno de ellos se registró la siguiente información:
-     Código de árbol (entero)
-     Edad del árbol (entero)
-     Altura (ﬂoat)
-     Estado general del árbol (1 - Óptimo, 2 - Satisfactorio, 3 - Enfermo, 4 - Peligroso) Se pide calcular e informar:
A) El árbol peligroso más alto que se haya registrado.
B) El promedio de edad entre todos los árboles.
C) El porcentaje de árboles óptimos en relación al total de árboles registrados.
NOTA: Sólo habrá un árbol con la mayor altura.


*/


#include <iostream>
using namespace std;

int main (){

int codigoArbol;
int edadArbol;
float altura;
int estadoGeneral;


int arboles=0;

//A
int optimo=0;
int satis=0;
int enfermo=0;
int peligroso=0;

float maxAltura=0;

//B
float acuEdad=0;
float promEdad=0;

//C
float porceOptimos=0;


for (int a=0; a<245800; a++){
    cout << "Ingrese codigo del arbol: ";
    cin >> codigoArbol;
    cout << "Ingrese edad del arbol: ";
    cin >> edadArbol;
    cout << "Ingrese altura del arbol: ";
    cin >> altura;
    cout << "Ingrese estado general del arbol" << endl;
    cout << "1 - Optimo, 2 - Satisfactorio, 3 - Enfermo, 4 - Peligroso: ";
    cin >> estadoGeneral;
    cout << "---------------------------------------------------" << endl;


    arboles++;
    /*------------------------------------------------*/
    switch(estadoGeneral){
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
            if(altura>maxAltura){
                maxAltura=altura;
            }
        break;
    }

    /*--------------------------------------------------*/

    acuEdad+=edadArbol;
    promEdad = acuEdad/arboles;

    /*--------------------------------------------------*/

    porceOptimos=optimo*100/arboles;




}

cout << endl << "-----------------------------------------------" << endl;
cout << "Punto A: Arbol peligroso mas alto que se haya registrado:  " << maxAltura;
cout << endl << "-----------------------------------------------" << endl;
cout << "Punto B: Promedio de edad entre todos los arboles: " << promEdad;
cout << endl << "-----------------------------------------------" << endl;
cout << "Punto C: Porcentaje de arboles optimos respecto al total: %" << porceOptimos;

return 0;
}
