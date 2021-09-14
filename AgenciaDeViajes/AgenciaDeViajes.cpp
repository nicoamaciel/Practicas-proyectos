/*
1) Una agencia de viajes posee la información de los cinco destinos turísticos que comercializa en cada uno de los meses del año 2020.
Por cada destino y mes registra:

Código de destino turístico (entero)
Número de mes (entero entre 1 y 12)
Cantidad de pasajes vendidos (entero)
Total recaudado (float)

La información se encuentra agrupada por destino turístico pero no se encuentra ordenada bajo ningún criterio.
Hay un registro para cada destino turístico y mes.

Se pide calcular e informar:
A) La cantidad totales de pasajes vendidos en el año 2020 entre todos los destinos turísticos.
B) Por cada destino turístico, el total recaudado.

*/

#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main(){
setlocale(LC_ALL, "");

const int DESTINOS=2; //Real 5

int codDestino;
int mes;
int pasajesVend;
float totRecaudado;

//A

int totPasajes=0;


for (int i=0; i<DESTINOS; i++){
        float recxDestino=0;
        cout << "Ingrese código de destino turístico: ";
        cin >> codDestino;

    for (int i=0; i<2; i++){
        cout << "Ingrese numero de mes (entre 1 y 12): ";
        cin >> mes;
        cout << "Ingrese cantidad de pasajes vendidos: ";
        cin >> pasajesVend;
        cout << "Ingrese total recaudado: ";
        cin >> totRecaudado;

        totPasajes += pasajesVend;
        recxDestino += totRecaudado;
    }

cout << endl <<"----------------------------------" << endl;
cout << "Punto B: Por cada destino turístico, el total recaudado: $" << recxDestino << endl;
cout << endl <<"----------------------------------" << endl;


}


cout << endl <<"----------------------------------" << endl;
cout << "Punto A: Cantidad totales de pasajes vendidos en el año 2020: #" << totPasajes << endl;





system("pause");
}
