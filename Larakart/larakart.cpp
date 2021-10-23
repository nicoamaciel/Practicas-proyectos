/*LaraKart es un torneo que se realiza todos los años en la Ciudad de Buenos Aires.
Durante el lapso de un día los participantes pueden dirigirse a la pista de karting y realizar el circuito.
Luego de que haya terminado el torneo se anunciará al ganador de la competencia.
El organizador del torneo prevé que la edición 2021 tendrá una gran cantidad de
participantes. Cada participante realizará exactamente 4 vueltas a la pista de carrera, por
cada vuelta de cada participante se registra:

- Código de participante (entero)
- Número de vuelta (1 a 4)
- Tiempo empleado (en minutos)
- Descalificado (1 - Sí; 0 - No)

La información se encuentra agrupada por participante y dentro de cada participante la
información de las vueltas se encuentra ordenada por número de vuelta (de menor a mayor).
Para indicar el fin de la carga de datos se ingresa un código de participante negativo.

Se pide calcular e informar:
A) Informar el ganador de la competencia. El mismo es aquella persona que haya
demorado menos tiempo en completar el circuito completo (las 4 vueltas) y nunca
haya sido descalificado. Informar el código de participante y el tiempo demorado.

NOTA: No habrá más de una persona que haya completado el circuito con el menor
tiempo.

B) Por cada participante, indicar el número de participante y la velocidad media.
Expresarla en Km/h.

NOTA: La pista de carrera tiene una longitud de 2000 metros.
NOTA: La fórmula de la velocidad media es V = Distancia / Tiempo.

C) La cantidad total de participantes que hayan sido descalificados al menos una vez.

D) La cantidad total de participantes que no hayan sido descalificados en la última


vuelta.
Puntajes
Estructura general → 10 puntos
Punto A → 25 puntos
Punto B → 25 puntos
Punto C → 20 puntos
Punto D → 20 puntos*/

#include <iostream>
using namespace std;
int main(){

int const VUELTAS=4;
int numParticipante, numVuelta, descalificado;
float tiemEmpleado;

//PuntoA
float menosTiempo=0;
int codGanador=0;
bool bandera1 = true;

//PuntoC
int puntoC=0;

//PuntoD

int puntoD=0;


cout << "Numero de participante: ";
cin >> numParticipante;
while (numParticipante>0)
{
    //Punto A
    int clasificado=0;
    float acuTiempo=0;

    //Punto B
    float velMedia=0;
    int participante=0;

    for (int i=1; i<=VUELTAS; i++ )
    {
    cout << "Numero de vuelta: " << i << endl;
    cout << "Tiempo empleado: ";
    cin >> tiemEmpleado;
    cout << "Descalificado? - 1 SI - 2 NO: ";
    cin >> descalificado;

    //Punto A
    acuTiempo+=tiemEmpleado;

    switch(descalificado)
    {
    case 1:
    break;
    case 2:
        clasificado+=1;
    break;
    }

    if(clasificado==4 && bandera1==true)
    {
    menosTiempo=acuTiempo;
    codGanador=numParticipante;
    bandera1=false;
    }

    if(clasificado==4)
        {
        //Punto C
        puntoC++;

        if(acuTiempo<menosTiempo)
            {
            menosTiempo=acuTiempo;
            codGanador=numParticipante;
            }
        }


    //Punto B
    velMedia=2000/(acuTiempo/60);
    participante=numParticipante;



    //Punto D

    if(i==4 && descalificado==2)
    {
        puntoD++;
    }


    }/***Termina for ***/


cout << "------------------" << endl;
cout << "Punto B: Velocidad media: " << velMedia << " numero de participante: " << participante << endl;

cout << "------------------" << endl;
cout << "Numero de participante: ";
cin >> numParticipante;

}/***Termina while ***/
cout << "------------------" << endl;
cout << "Punto A: Ganador, menos tiempo: " << menosTiempo << " Num participante: " << codGanador << endl;
cout << "------------------" << endl;
cout << "Punto C: Participantes descalificados descalificados al menos una vez: " << puntoC << endl;
cout << "------------------" << endl;
cout << "Punto D: No fueron sidos descalificados en la ultima vuelta: " << puntoD << " participantes " << endl;

return 0;
}





















