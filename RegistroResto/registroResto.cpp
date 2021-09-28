/**
Un restaurant registró la información de todas las comandas atendidas la noche anterior por sus mozos.
Por cada comanda se registró:
- Número de comanda
- Número de mozo (entero)
- Tipo de plato (1 - Entrada, 2 - Plato Principal, 3 - Postre)
- Importe (float)

La información se encuentra agrupada por Número de mozo. Cada mozo atendió diez comandas.
Para indicar el fin de la carga de datos se registra un Número de mozo negativo.
Calcular e informar:

A) Por cada mozo, la cantidad de platos de cada tipo.
B) El número de mozo que haya atendido el Plato Principal de menor importe.
C) El importe promedio por comanda (entre todas las comandas).

NOTA: Una comanda es un servicio de mesa (pedido) atendido por un mozo en un restaurant.

**/

#include <iostream>
using namespace std;
int main(){

int numComanda;
int numMozo;
int tipoPlato;
float importe;

int const COM=2; ///Real 10 comadas

//PuntoB
float minImpor=0;
int minMozo=0;

//PuntoC
float contPlatos=0;
float recaudacion=0;
float promeImporte=0;

cout << "Ingrese numero de mozo: ";
cin >> numMozo;
while(numMozo>0){
    //PuntoA
    int platoEntrada=0;
    int platoPrin=0;
    int platoPostre=0;


    for (int i=1; i<=COM; i++){
    cout << "Ingrese numero comanda: ";
    cin >> numComanda;
    cout << "Ingrese tipo de plato opciones: 1 Entrada - 2 Principal - 3 Postre :";
    cin >> tipoPlato;
    cout << "Ingrese importe: ";
    cin >> importe;


    //PuntoB
    if(i==1){
        minImpor=importe;
    }

    //PuntoA
    switch(tipoPlato){
        case 1:
            platoEntrada++;
        break;
        case 2:
            platoPrin++;
            //PuntoB
            if(importe<minImpor){
                minImpor=importe;
                minMozo=numMozo;
            }
        break;
        case 3:
            platoPostre++;
        break;
    }

        //PuntoC
    if(tipoPlato>0){
        contPlatos+=1;
        recaudacion+=importe;
    }



    }///FinDeFor

    promeImporte = recaudacion/contPlatos;

    cout << endl << "-----------------------------------------" << endl;
    cout << "Punto A: Por cada mozo, la cantidad de platos de cada tipo " << endl;
    cout << endl << "Plato entrada :" << platoEntrada;
    cout << endl << "Plato principal :" << platoPrin;
    cout << endl << "Plato postre :" << platoPostre;


    cout << endl << "-----------------------------------------" << endl;
    cout << "Ingrese numero de mozo: ";
    cin >> numMozo;
}///FinDeWhile
cout << endl << "-----------------------------------------" << endl;
cout << "Punto B: Número de mozo que cobro el Plato Principal de menor importe: " << minMozo <<endl;
cout << endl << "-----------------------------------------" << endl;
cout << "Punto C: Importe promedio entre todas las comandas: " << promeImporte <<endl;




return 0;
}
