/*Hacer un programa que le pida al usuario una lista de
10 números enteros y luego de ingresarlos muestre cuáles de ellos fueron positivos.*/


#include <iostream>
using namespace std;
int main (){

const int TAM=10;

int vec[TAM]={};
int positivos=0;


for (int i=0; i<TAM; i++){
    int comprobacion=0;

    cout << "Ingrese numero => " << i+1 << " de la lista: ";
    cin >> vec[i];

    comprobacion = vec[i]%2;
    if(comprobacion==0){
        positivos++;
    }

}
cout << endl << "------------------" << endl;
cout << "Cantidad de positivos: " << positivos;
cout << endl << "------------------" << endl;



return 0;
}
