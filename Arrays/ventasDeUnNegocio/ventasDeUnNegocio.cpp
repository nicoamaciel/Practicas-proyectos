/*Se dispone de las ventas de un negocio durante el mes pasado. Por cada venta se registr� el n�mero de venta
, el n�mero de d�a y el importe de la venta. El fin de la carga de datos se indica con n�mero de venta igual a 0.
Se pide calcular e informar:
Por cada d�a, la recaudaci�n total (s�lo de aquellos d�as que tuvieron recaudaci�n).
El n�mero de d�a que m�s se recaud� en total y cu�l fue la recaudaci�n m�xima.*/


#include <iostream>
using namespace std;
int main (){

const int TAM=3; //Real-31dias


int numVenta;
int numDia[TAM]={};
float importe;




//PuntoB
float recaudacion2[3]={};//Real-31dias
int numMax=0;
float maxReca=0;



    for (int x=0; x<TAM; x++){
    //PuntoA
    float recaudacion[3]={}; //Real-31dias
    cout << "Ingrese numero de dia: ";
    cin >> numDia[x];
    cout << "------------------" << endl;
    cout << "Ingrese numero de venta: ";
    cin >> numVenta;
    while(numVenta!=0){
        //PuntoA
        cout << "Ingrese numero de importe: ";
        cin >> importe;

        recaudacion[x]+=importe;

        //PuntoB
        recaudacion2[x]+=importe;

        if(recaudacion2[x]>maxReca){
            numMax=numDia[x];
            maxReca=recaudacion2[x];
        }

        cout << "------------------" << endl;
        cout << "Ingrese numero de venta: ";
        cin >> numVenta;
        }//FinDeWhile

        //PuntoA
        for (int y=0; y<3; y++){
            if(recaudacion[y]>0){
                cout << endl << "Dia: " << numDia[y];
                cout << endl << "Recaudacion: " << recaudacion[y] << endl;
                }
            }
        cout << "------------------" << endl;

    }//FinDeCicloWhile

    cout << endl << "Dia de maxima recaudacion: " << numMax;
    cout << endl << "Max recaudacion: " << maxReca << endl;





return 0;
}
