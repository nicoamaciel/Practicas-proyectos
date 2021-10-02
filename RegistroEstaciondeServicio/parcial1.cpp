/**Primer parcial

Enunciado - (100 puntos)
El due�o de una estaci�n de servicio dispone de algunos tanques de combustible en su estaci�n de servicio.
De cada tanque dispone de informaci�n del estado de combustible de los �ltimos tres d�as.
Por cada tanque y d�a registra:

- N�mero de tanque (entero)
- N�mero de d�a (1 a 3)
- Litros totales al comienzo del d�a (real)
- Litros totales al final del d�a (real)
- Facturaci�n del d�a (real)

La informaci�n se encuentra agrupada por n�mero de tanque.
Dentro de cada tanque los datos est�n ordenados por d�a.
Para indicar el fin de la carga de datos se ingresa un n�mero de tanque igual a cero. Se pide calcular e informar:

NOTA: La diferencia entre los litros totales al comienzo del d�a y los litros totales al final del d�a determinan
la cantidad de litros vendidos en el d�a. Por ejemplo:

	Tanque: 10
	D�a: 1
	Litros al comienzo: 50000 lts
	Litros al final: 44500 lts
	Facturaci�n: $ XXXXX

	Los litros vendidos en el d�a fueron (50000 - 44500) = 5500 lts

A) La cantidad de litros vendidos por d�a.
	Ejemplo:
	D�a 1: XXXX lts
	D�a 2: YYYY lts
	D�a 3: ZZZZ lts

B) El n�mero de tanque que haya registrado la menor cantidad de litros vendidos en un d�a.
Indicar tambi�n la cantidad de litros y qu� d�a fue.

C) Por cada tanque, el promedio de litros vendidos en total entre los tres d�as.

D) La cantidad de tanques distintos que vendieron m�s de 8000 lts en un d�a.

E) El n�mero de d�a en el que se despach� la mayor cantidad de litros.

ACLARACIONES:
No habr� m�s de un tanque con la menor cantidad de litros vendidos en un d�a.
No habr� m�s de un d�a con la mayor cantidad de litros despachados.
**/

#include <iostream>
using namespace std;
int main(){

int numTanq;
int numDia;
float litrosIni;
float litrosFin;
float facDia;

const int DIA=3;


//PuntoB
bool validacion=true;
float minLts=0;
int minTanq=0;
int minDia=0;


//PuntoD

int contMay8=0;



cout << "Bienvenido!" << endl;
cout << "Ingrese numero de tanque: ";
cin >> numTanq;
while(numTanq){
        //PuntoC
        float promedioLts=0;
        float acuLts=0;
        int contVend=0;

        //PuntoE
        int maxDespacho=0;
        int maxDia=0;


    for(int i=1; i<=DIA; i++){
    //PuntoA
    float ltsVendidos=0;

    cout << "Dia: "<< i << endl;
    cout << "--------------------" << endl;
    cout << "Ingrese litros al inicio del dia: ";
    cin >> litrosIni;
    cout << "Ingrese litros al final del dia: ";
    cin >> litrosFin;
    cout << "Ingrese facturacion del dia: ";
    cin >> facDia;
    //PuntoA
    ltsVendidos = litrosIni - litrosFin;


    //PuntoB
    if(validacion==true){
        minLts=ltsVendidos;
        validacion=false;
    }else{
        if(ltsVendidos<minLts){
            minLts=ltsVendidos;
            minTanq=numTanq;
            minDia=i;
        }
    }

    //PuntoC
    if(ltsVendidos>0){
        contVend++;
    }

    acuLts+=ltsVendidos;
    promedioLts = acuLts/contVend;

    //PuntoD
    if(ltsVendidos>8000){
        contMay8++;
    }

    //PuntoE
    if(ltsVendidos>maxDespacho){
        maxDespacho=ltsVendidos;
        maxDia=i;
    }

    //----------------------------------------------------------------------
    cout << endl << "Punto A: La cantidad de litros vendidos por dia: " << ltsVendidos << " lts" << endl;
    cout << "--------------------" << endl;
    }//FinDeFor


cout << endl << "Punto C: Por cada tanque, el promedio de litros vendidos en total entre los tres dias: " << promedioLts << " lts" <<endl;
cout << endl << "Punto E: Numero de dia en el que se despacho la mayor cantidad de litros: Dia " << maxDia << endl;
//-----------------------------------------------------------
cout << "--------------------" << endl;
cout << "Ingrese numero de tanque: ";
cin >> numTanq;
}//FinDeWhile

cout << endl << "Punto B: Numero de tanque que registro la menor cantidad de litros vendidos en un dia: " << minTanq << endl;
cout << endl << "Punto B: Cantidad de lts: " << minLts << " lts - Dia: " << minDia <<endl;
cout << endl << "Punto D: Cantidad de tanques distintos que vendieron mas de 8000 lts en un dia: " << contMay8 << endl;


/**MacielNicolas 1-10**/



return 0;
}
