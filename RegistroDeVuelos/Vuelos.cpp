/*2) Una agencia de viaje posee la informaci�n de los cinco destinos tur�sticos que comercializa en algunos meses del a�o 2020.
Por cada registro se ingresa:
C�digo de destino tur�stico (entero)
N�mero de mes (entero entre 1 y 12)
Cantidad de pasajes vendidos (entero)
Total recaudado (float)

La informaci�n se encuentra agrupada por destino tur�stico pero no se encuentra ordenada bajo ning�n criterio.
No todos los destinos tuvieron informaci�n para todos los meses.
Para indicar que finaliza la carga de un destino se ingresa un mes igual a cero.

Se pide calcular e informar:
A) La cantidad totales de pasajes vendidos en el a�o 2020 entre todos los destinos tur�sticos.
B) Por cada destino tur�stico, el total recaudado.
*/

#include <iostream>
using namespace std;
int main (){

int codTuristico;
int numMes;
int cantPasajes;
int totRecaudado;
//Punto A
int pasVendidos=0;




    for (int i=0; i<5; i++){
        int totXdestino=0;
        cout << "Ingrese codigo de destino turistico: ";
        cin >> codTuristico;

        while(codTuristico!=0){
        cout << "Ingrese numero de mes: entre 1 y 12 : ";
        cin >> numMes;
        cout << "Ingrese cantidad de pasajes vendidos: ";
        cin >> cantPasajes;
        cout << "Ingrese total recaudado: ";
        cin >> totRecaudado;
        /*------------------------------------------------------------*/

        pasVendidos+=cantPasajes;

        totXdestino+=totRecaudado;

        cout << "--------------------------------------" << endl;
        cout << "Ingrese codigo de destino turistico: ";
        cin >> codTuristico;
        cout << "--------------------------------------" << endl;

        }

        cout << endl << "Punto B: Por cada destino tur�stico, el total recaudado: " << totXdestino << endl;
        cout << "--------------------------------------" << endl;

}
cout << "------------------------------------------------------------------" << endl;
cout << endl << "Punto A: La cantidad totales de pasajes vendidos en el a�o 2020 entre todos los destinos turisticos: " << pasVendidos << endl;









return 0;
}
