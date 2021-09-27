/**Problema 2
El SENASA dispone de la información de algunas frutas y verduras exportadas en el año 2017 por la República Argentina.
Por cada registro se ingresa:
- Código de producto
- Tipo ('F' - Fruta o 'V' - Verdura)
- Cantidad de toneladas exportadas
- Importe recaudado

La información no se encuentra ordenada ni agrupada. Hay un registro por cada producto.
Para indicar el fin de la carga de información se ingresa un código de producto igual a cero.

Se pide calcular e informar:
A) El código de producto de la fruta que menos haya recaudado.
B) La cantidad de verduras cuyo precio por kilo haya sido menor a $100.
C) El tipo de producto que haya exportado la menor cantidad de toneladas.

NOTA: Una tonelada equivale a mil kilos.**/


#include <iostream>
using namespace std;
int main(){

int codProductos;
char tipo;
float toneladas;
float impRecaudado;


int verdura=0;
int fruta=0;

///PuntoA
bool validacion=true;
int menosRecau=0;
int menCodigo=0;
///PuntoB
int puntoB=0;
///PuntoC
bool validacion2=true;
float menToneladas=0;
char menTipo;



    cout << "Ingrese codigo de producto: ";
    cin >> codProductos;

    while(codProductos!=0){
    cout << "Ingrese tipo ('f' - Fruta o 'v' - Verdura): ";
    cin >> tipo;
    cout << "Ingrese cantidad de toneladas importadas: ";
    cin >> toneladas;
    cout << "Ingrese importe recaudado: ";
    cin >> impRecaudado;

    switch(tipo){
        case 'v':
            verdura++;
        break;
        case 'f':
            fruta++;
        break;
    }

    ///PuntoA
    if(validacion==true){
        menosRecau=impRecaudado;
        menCodigo=codProductos;
        validacion=false;
    }
    if(impRecaudado<menosRecau){
        menosRecau=impRecaudado;
        menCodigo=codProductos;
    }
    ///PuntoB
    if(tipo == 'v' && impRecaudado < 100){
        puntoB++;
    }

    ///PuntoC

    if(validacion2==true){
        menToneladas=toneladas;
        menTipo=tipo;
        validacion2=false;
    }

    if(toneladas<menToneladas){
        menToneladas=toneladas;
        menTipo=tipo;
    }




    cout << endl << "----------------------------------------" << endl;
    cout << "Ingrese codigo de producto: ";
    cin >> codProductos;
    }///Fin de ciclo while

    cout << endl << "----------------------------------------" << endl;
    cout << "Punto A: Codigo de producto de la fruta que menos haya recaudado: " << menCodigo;
    cout << endl << "----------------------------------------" << endl;
    cout << "Punto B: Cantidad de verduras cuyo precio menor a $100: " << puntoB;
    cout << endl << "----------------------------------------" << endl;
    cout << "Punto C: tipo de producto que haya exportado la menor cantidad de toneladas: " << menTipo;
    cout << endl << "----------------------------------------" << endl;


return 0;
}

