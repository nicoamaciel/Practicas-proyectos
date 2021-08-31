
/*
10
El festival Larapalooza, el mejor festival musical del mundo, brindará una serie de conciertos distribuidos
en tres jornadas distintas. Se desea un programa que registre los artistas que participarán. Por cada artista se registró:

Número de artista (entero)
Integrantes (entero)
Jornada (1, 2 o 3)
Duración del show en minutos (entero)

La información no se encuentra ordenada bajo ningún criterio.
La carga de datos se finaliza con un número de artista igual a cero. Calcular e informar:

A) El número de artista que realice el show más largo de la jornada 1.
B) La cantidad de solistas (artistas de 1 integrante) que participaron en cada una de las jornadas.
(se muestran tres resultados).
C) La jornada más extensa (en minutos).
D) Duración promedio de show por artista (se muestra un resultado).

*/


#include <iostream>
using namespace std;
int main(){

    int numArtista;
    int integrantes;
    int jornada;
    int duracionShow;

    //Punto A
    int NumShowMasLargo=0;
    int showMasLargo=0;

    //Punto B
    int intJornada1=0;
    int intJornada2=0;
    int intJornada3=0;

    //Punto C

    int jornadaMasExt=0;

    //Punto D
    float acuDuracion=0;
    float contDuracion=0;
    float promShow=0;


    cout << "Ingrese numero de artista: ";
    cin >> numArtista;
    while(numArtista!=0){
    cout << "Ingrese numero de integrantes : ";
    cin >> integrantes;
    cout << "Ingrese numero de jornada: (1 - 2 -3): ";
    cin >> jornada;
    cout << "Ingrese duracion del show: ";
    cin >> duracionShow;

    //Punto A
    if(jornada==1){
        if(duracionShow>showMasLargo){
            showMasLargo=duracionShow;
            NumShowMasLargo=numArtista;
        }
    }

    //Punto B
    if(jornada==1 && integrantes==1){
        intJornada1++;
    }
    else{
        if(jornada==2 && integrantes==1){
            intJornada2++;
        }
        else{
            if(jornada==3 && integrantes==1){
                intJornada3++;
            }
        }
    }

    //Punto C
    if(duracionShow>jornadaMasExt){
        jornadaMasExt=duracionShow;
    }

    //Punto D
    if(duracionShow>0){
        contDuracion++;
        acuDuracion+=duracionShow;
    }

    promShow = acuDuracion/contDuracion;


    cout << endl << "-------------------------------------------------" << endl ;
    cout << "Ingrese numero de artista: ";
    cin >> numArtista;
    }


    cout << endl << "---------------------------------------------------" << endl ;
    cout << "Punto A: El numero de artista que realizo el show mas largo de la jornada 1: " << NumShowMasLargo << endl;
    cout << endl << "-------------------------------------" << endl ;
    cout << "Punto B: Cantidad de solistas que participaron en cada una de las jornadas: "<< endl;
    cout << "Cantidad de solistas jornada 1: "<< intJornada1 << endl;
    cout << "Cantidad de solistas jornada 2: "<< intJornada2 <<endl;
    cout << "Cantidad de solistas jornada 3: "<< intJornada3 <<endl;
    cout << endl << "---------------------------------------------------" << endl ;
    cout << "Punto C: La jornada mas extensa (en minutos): "<< duracionShow <<endl;
    cout << endl << "---------------------------------------------------" << endl ;
    cout << "Punto D: Duración promedio de show por artista (se muestra un resultado): "<< promShow << endl;


return 0;
}
