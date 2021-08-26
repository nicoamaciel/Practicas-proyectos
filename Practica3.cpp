/*Simon's Fishing Tournament es el torneo de pesca más importante del continente.
En él participan los mejores pescadores del año. Tienen todo un día para pescar la mayor cantidad de peces.
Por cada captura se registra la siguiente información:

-     Código de pescador (entero)
-     Hora (entero)
-     Código de especie (entero)
-     Tipo de carnada (1 - Carnada viva, 2 - Señuelo, 3 - Mosca)
-     Peso del pez (ﬂoat)

Los datos se encuentran agrupados por pescador. Cada uno de ellos ha registrado cinco capturas.
Se indica el ﬁn de la carga de datos ingresando un valor cero en el código de pescador. Se pide calcular e informar:

A) Por cada pescador, el porcentaje de capturas realizadas por tipo de carnada.
B) La cantidad total de pescadores que no hayan capturado ningún pez utilizando mosca.
C) El código de especie que haya registrado el pez menos pesado. Indicar también el peso del pez.
D) La cantidad de capturas que se realizaron entre las 13 y las 19 (ambas inclusive)
utilizando carnada viva.
NOTA: Sólo habrá una captura con el menor peso.*/


#include <iostream>
using namespace std;

int main (){

int codPesca;
int Hora=0;
int codEspecie=0;
int TipoCarnada=0;
float PesoPez=0;

//PuntoB

int sinMosca=0;

//PuntoC

int codMenPeso=0;
float menosPesado=0;

//PuntoD

int capEntra13y19=0;

cout << "Ingrese codigo de pescador: ";
cin >> codPesca;
while(codPesca!=0){
        int viva=0;
        int senuelo=0;
        int mosca=0;
        int totCarnada=0;

        float PorcViva=0;
        float PorcSenuelo=0;
        float PorcMosca=0;

        //----------------------------------------------------------------------

    for(int i=0; i<5; i++){
        cout << "Captura numero: "<< i+1 << endl;
        cout << "Ingrese hora de la captura: ";
        cin >> Hora;
        cout << "Ingrese codigo de especie: ";
        cin >> codEspecie;
        cout << "Ingrese tipo de carnada" << endl;
        cout << "1 - Carnada viva, 2 - Senuelo, 3 - Mosca: ";
        cin >> TipoCarnada;
        cout << "Ingrese peso del pez capturado: ";
        cin >> PesoPez;

        //PuntoA
        switch (TipoCarnada){
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

        totCarnada = viva+senuelo+mosca; //100%

        PorcViva=viva*100/totCarnada;
        PorcSenuelo=senuelo*100/totCarnada;
        PorcMosca=mosca*100/totCarnada;

        //Punto B

        if (mosca==0){
            sinMosca++;
        }


        //Punto C
        if(i==0){
            menosPesado=PesoPez;
            codMenPeso=codPesca;
        }
        else{
            if(PesoPez<menosPesado){
                menosPesado=PesoPez;
                codMenPeso=codPesca;
            }
        }


        //Punto D
        if (Hora>13 && Hora<19){
            capEntra13y19++;
        }

    }

cout << endl << "----------------------------" << endl;
cout << "Punto A: Porcentaje de captura por tipo de carnada" << endl;
cout << "Porcentaje carnada viva: " << PorcViva << " %" << endl;
cout << "Porcentaje carnada senuelo: " << PorcSenuelo << " %" << endl;
cout << "Porcentaje carnada mosca: " << PorcMosca << " %" << endl;



cout << endl << "------------------------------" << endl;
cout << "Ingrese codigo de pescador: ";
cin >> codPesca;
}

cout << endl << "----------------------------" << endl;
cout << "Punto B: Cantidad total de pescadores que no capturaron ningún pez utilizando mosca" << endl;
cout << "Total: " << sinMosca << endl;


cout << endl << "----------------------------" << endl;
cout << "Punto C: Codigo de pescador con el menor peso capturado" << endl;
cout << "Codigo: " << codMenPeso << " Peso de la captura: " << menosPesado << endl;

cout << endl << "----------------------------" << endl;
cout << "Punto D: Captura entre las 13 y las 19: " << endl;
cout << "Total: " << capEntra13y19  << endl;


/*---Fin---*/
return 0;
}
