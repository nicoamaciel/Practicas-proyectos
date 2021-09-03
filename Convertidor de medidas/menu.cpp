
/*Convertidor de medidas con menu*/
/*Ejercicio 15*/


#include <iostream>
using namespace std;
int main (){

int opcion=0;
float metros=0;


float centimetros=0;
float kilo=0;
float pulgadas=0;
float pies=0;


do{
        cout << "Menu principal " << endl;
        cout << "-----------------------" << endl;
        cout << "1 - Ingresa medida en metros" << endl;
        cout << "2 - Convertir a centimetros" << endl;
        cout << "3 - Convertir a kilometros" << endl;
        cout << "4 - Convertir a pulgadas" << endl;
        cout << "5 - Convertir a pies" << endl;
        cout << "-----------------------" << endl;
        cout << "0 - Salir del programa" << endl;
        cout << "-----------------------" << endl;
        cout << endl << "Ingrese opcion: ";
        cin >> opcion;





        switch(opcion){
        case 1:
            cout << "ingrese medida: ";
            cin >> metros;
        break;
        case 2:
            centimetros = metros*100;
            cout << endl << "----------------------" << endl;
            cout << "Conversion centimetros: " << centimetros << endl;
            cout << endl << "----------------------" << endl;
        break;
        case 3:
            kilo = metros/1000;
            cout << endl << "----------------------" << endl;
            cout << "Conversion kilometros: " << kilo << endl;
            cout << endl << "----------------------" << endl;
        break;
        case 4:
            pulgadas = metros*39.370;
            cout << endl << "----------------------" << endl;
            cout << "Conversion pulgadas: " << pulgadas << endl;
            cout << endl << "----------------------" << endl;
        break;
        case 5:
            pies = metros*3.28;
            cout << endl << "----------------------" << endl;
            cout << "Conversion pies: " << pies << endl;
            cout << endl << "----------------------" << endl;
        break;
        }
}
while(opcion!=0);




return 0;
}
