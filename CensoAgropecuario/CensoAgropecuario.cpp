/*Problema 1
Un censo agropecuario recabó información de 10 productores a lo largo de los últimos 5 años. Por cada año y productor registró:

- Código de productor
- Número de año (1 a 5)
- Cantidad de nacimientos de cerdos
- Cantidad de nacimientos de ovejas
- Cantidad de nacimientos de vacas

Los datos se encuentran agrupados por código de productor. Por cada productor,
la información está ordenada por año. Se pide calcular e informar:

A) Por cada productor, la cantidad de años en que no haya producido cerdos.
B) El productor que menos animales haya producido en el primer año de trabajo.
C) El porcentaje de cerdos, ovejas y vacas producidos en total.
D) La cantidad de años en los que se hayan producido únicamente cerdos.
E) Los años en los que se produjeron cerdos.
*/

#include <iostream>
using namespace std;
int main (){

int codProductor;
int numAnio;
int nacCerdos;
int nacOvejas;
int nacVacas;

//Punto B
int prodAnimales=0;
int menPruduccion=0;
int menCodPro=0;

//Punto C
float totProduccion=0;

float totCerdos=0;
float totOvejas=0;
float totVacas=0;

float porCerdos=0;
float porOvejas=0;
float porVacas=0;

//Punto D
int soloCerdos=0;

//Punto E
int AñoCerdos=0;


for(int i=1; i<=2; i++){
    int sinCerdos=0;
    cout << endl << "-------------------------------------" << endl;
    cout << "Ingrese codigo del productor numero " << i << " :";
    cin >>codProductor;
    for(int j=1; j<=2; j++){

        cout << "Ingres cuatro digitos del año numero " << j << " :";
        cin >>numAnio;
        cout << endl << "-------------------------------------" << endl;
        cout << "Ingrese cantidad de nacimientos de cerdos: ";
        cin >> nacCerdos;
        cout << "Ingrese cantidad de nacimientos de ovejas: ";
        cin >> nacOvejas;
        cout << "Ingrese cantidad de nacimientos de vacas: ";
        cin >> nacVacas;
        cout << endl << "-------------------------------------" << endl;

        //Produccion x año
        prodAnimales = nacCerdos + nacOvejas + nacVacas;
        //Acumulacion produccion total
        totProduccion += prodAnimales;


        totCerdos+=nacCerdos;
        totOvejas+=nacOvejas;
        totVacas+=nacVacas;

        //PuntoA
        if(nacCerdos==0){
            sinCerdos++;
        }

        //PuntoB
        if(i==1){
            menPruduccion = prodAnimales;
            menCodPro = codProductor;
        }

        if(j==1){
            if(prodAnimales < menPruduccion){
                menPruduccion=prodAnimales;
                menCodPro=codProductor;
            }
        }

        //PuntoC
        porCerdos = totCerdos*100/totProduccion;
        porOvejas = totOvejas*100/totProduccion;
        porVacas = totVacas*100/totProduccion;

        //PuntoD

        if(nacCerdos>0){
            if(nacOvejas==0 && nacVacas==0){
                soloCerdos++;
            }
        }

        //PuntoE

        if(nacCerdos>0){
            AñoCerdos++;
        }



    }//Fin ciclo años
    cout << "Punto A: Años sin cerdos prodcutor: " << i << " :"<< sinCerdos << endl;


}//Fin ciclo productor

cout << "Punto B: Productor que menos animales producion el primer año de trabajo: " << menCodPro << endl;
cout << endl << "---------------------------------------------------------------------------------------" << endl;
cout << "Punto C: Porcentaje produccion cerdos: " << porCerdos << endl;
cout << "Punto C: Porcentaje produccion ovejas: " << porOvejas << endl;
cout << "Punto C: Porcentaje produccion vacas: " << porVacas << endl;
cout << endl << "---------------------------------------------------------------------------------------" << endl;
cout << "Punto D: Solo produccion de cerdos: " << soloCerdos << endl;
cout << endl << "---------------------------------------------------------------------------------------" << endl;
cout << "Punto E: Años en los que se produjeron cerdons: " << AñoCerdos << endl;



return 0;
}
