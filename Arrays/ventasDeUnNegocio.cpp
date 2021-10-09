/*Se dispone de las ventas de un negocio durante el mes pasado. Por cada venta se registró el número de venta
, el número de día y el importe de la venta. El fin de la carga de datos se indica con número de venta igual a 0.
Se pide calcular e informar:
Por cada día, la recaudación total (sólo de aquellos días que tuvieron recaudación).
El número de día que más se recaudó en total y cuál fue la recaudación máxima.*/


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
