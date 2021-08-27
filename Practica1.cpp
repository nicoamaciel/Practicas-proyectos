/*Simon's Fishing Tournament es el torneo de pesca más importante del continente.
 En él participan los mejores seis pescadores del año.
 Tienen todo un día para pescar la mayor cantidad de peces.

 Por cada captura se registra la siguiente información:
-     Código de pescador (entero)
-     Hora (entero)
-     Tipo de carnada (1 - Carnada viva, 2 - Señuelo, 3 - Mosca)
-     Peso del pez (ﬂoat)

Los datos se encuentran agrupados por pescador.
Cada uno de ellos puede pescar una cantidad indeﬁnida de peces.
Se indica el ﬁn de la carga de datos de un pescador ingresando un valor negativo en la hora de captura.
Se pide calcular e informar:

A) Por cada pescador, el promedio de peso de sus peces capturados.
B)  Indicar  el  código  de  pescador  que  totalizó  el  mayor  peso  entre  todos  los  peces capturados.
Indicar también el peso.
C) El porcentaje de capturas realizadas por tipo de carnada.
D) La cantidad de capturas que se realizaron entre las 13 y las 19 (ambas inclusive).
NOTA: Sólo habrá un pescador que totalice el mayor peso.
*/


#include <iostream>
using namespace std;

int main (){

int codPescador;
int hora;
int tipoCarnada;
float peso;


//B
float maxPeso=0;
int maxCodigo=0;
//C
int viva=0;
int senuelo=0;
int mosca=0;

int totalCarnada=0;

float porcentajeViva=0;
float porcentajeSenuelo=0;
float porcentajeMosca=0;

//D

int captura13y19 =0;


for (int p=0; p<2; p++){
    int captura=0;
    float acuPeso=0;
    float prom=0;

    cout << "Ingrese codigo de pescador numero " << p+1 <<":" << endl;
    cin >> codPescador;
    cout << "ingrese hora de la captura: ";
    cin >> hora;
    while(hora>0){
    cout << "ingrese tipo de carnada: ";
    cin >> tipoCarnada;
    cout << "ingrese peso del pez capturado: ";
    cin >> peso;
    /*-----------------------------------------------------------------------------------------------*/
    captura++;
    acuPeso+=peso;
    prom = acuPeso/captura;
    /*-----------------------------------------------------------------------------------------------*/

    if(peso>maxPeso){
        maxCodigo=codPescador;
        maxPeso=peso;
    }

    /*-----------------------------------------------------------------------------------------------*/
    switch(tipoCarnada){
        case 1:
            viva++;
        break;
        case 2:
            senuelo++;
        break;
        case 3:
            mosca++;
        break;
    }

    totalCarnada = viva+senuelo+mosca;

    porcentajeViva = viva*100/totalCarnada;
    porcentajeSenuelo = senuelo*100/totalCarnada;
    porcentajeMosca = mosca*100/totalCarnada;

    /*----------------------------------------------------------------------------------------------*/

    if (hora>13 && hora<19){
        captura13y19++;
    }

    /*----------------------------------------------------------------------------------------------*/

    cout << "ingrese hora de la captura: ";
    cin >> hora;
    }

    cout << endl << "------------------------------------------------" << endl;
    cout << "Punto A) Promedio de captura: " << prom << endl;
    cout << endl << "------------------------------------------------" << endl;
}
    cout << endl << "------------------------------------------------" << endl;
    cout << "Punto B) Codigo de maximo peso: " << maxCodigo << endl;
    cout << "Punto B) Maximo peso: " << maxPeso << endl;

    cout << endl << "------------------------------------------------" << endl;
    cout << "Punto C) Porcentaje carnada viva: " << porcentajeViva << endl;
    cout << "Punto C) Porcentaje carnada senuelo: " << porcentajeSenuelo << endl;
    cout << "Punto C) Porcentaje caranda mosca: " << porcentajeMosca << endl;

    cout << endl << "------------------------------------------------" << endl;
    cout << "Punto D) Capturas entre las 13 y las 19 : " << captura13y19 << endl;



 
 
 



return 0;
}
