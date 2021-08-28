/*Simon's Fishing Tournament es el torneo de pesca más importante del continente.
Por cada captura realizada en el torneo se registra la siguiente información:

-     Código de pescador (entero)
-     Hora (entero)
-     Código de especie (entero)
-     Número de muelle (1 - Oeste, 2 - Este, 3 - Principal)
-     Peso del pez (ﬂoat)

El ﬁn de la carga de datos se indica con un código de pescador igual a cero. Se pide calcular e informar:

A) El muelle en el que más peces se hayan capturado.
B) El promedio de peso de peces capturados entre las 9 y las 12 (ambas inclusive)
C) El código de especie que haya registrado el pez de menor peso. Indicar también el peso.
NOTA: Sólo habrá una captura con el menor peso.*/



#include <iostream>
using namespace std;
int main(){

int codPescador;
int hora;
int codEspecie;
int numMuelle;
float peso;

//PuntoA
int capOeste=0;
int capEste=0;
int capPrincipal=0;
int totalCapturas=0;
int MaxCaptura=0;

//PuntoB
int captura9y12;
int peso9y12=0;
float prom9y12=0;

//PuntoC
bool validacion1=true;
int menorPeso=0;
int menorCod=0;


cout << "Ingrese codigo de pescador: ";
cin >> codPescador;
while(codPescador!=0){

cout << "Ingrese hora de la captura: ";
cin >> hora;
cout << "Ingrese codigo de especie: ";
cin >> codEspecie;
cout << "Ingrese numero de muelle - Opciones: 1) Oeste 2) Este 3) Principal: ";
cin >> numMuelle;
cout << "Ingrese peso de caputara: ";
cin >> peso;


//PuntoA

switch(numMuelle){
    case 1:
        capOeste++;
    break;
    case 2:
        capEste++;
    break;
    case 3:
        capPrincipal++;
    break;
}

totalCapturas = capOeste + capEste + capPrincipal;

if (capOeste>MaxCaptura){
    MaxCaptura=capOeste;
}
else{
    if(capEste>MaxCaptura){
        MaxCaptura=capEste;
    }
    else{
        if(capPrincipal>MaxCaptura){
            MaxCaptura=capPrincipal;
        }
    }
}

//PuntoB
if(hora>=9 && hora<=12){
    captura9y12++;
    peso9y12+=peso;
}

prom9y12 = peso9y12/captura9y12;


//PuntoC

if(validacion1==true){
    menorPeso=peso;
    menorCod=codEspecie;
    validacion1=false;
}
else{
    if(peso<menorPeso){
     menorPeso=peso;
     menorCod=codEspecie;
    }
}

cout << "Ingrese codigo de pescador: ";
cin >> codPescador;

}


cout << endl << "-----------------------------------" << endl;
cout << "Punto A: Muelle en el que mas peces se hayan capturado: " << MaxCaptura <<endl;
cout << endl << "-----------------------------------" << endl;
cout << "Punto B: Promedio de peso de peces capturados entre las 9 y las 12: " << prom9y12 <<endl;
cout << endl << "-----------------------------------" << endl;
cout << "Punto C: El codigo de especie que registro el menor peso: " << menorCod << " Peso: " << menorPeso <<endl;


return 0;
}
