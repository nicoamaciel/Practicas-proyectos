/*En una empresa los empleados cobran un sueldo según la categoría a la que pertenecen.
Son 50 empleados y los sueldos son:

Categoría 1: $38000
Categoría 2: $70000
Categoría 3: $105000

Al sueldo se le suma además $ 1200 por cada año trabajado. Para cada empleado se tienen los siguientes datos:
- Categoría (1 a 3)
- Antigüedad (entero)

Hay un registro por cada empleado. La información no está agrupada ni ordenada. Se pide calcular e informar:
a) ¿Cuantos empleados hay para cada categoría?
b) Total de sueldos (en $) pagados para cada categoría.
c) Sueldo Promedio.
d) ¿Cual fue el sueldo máximo y a que categoría pertenece?
*/


#include <iostream>
using namespace std;

int main (){

const int EMPLEADOS=5;

int categoria;
int antiguedad;


//A
int contCat1=0;
int contCat2=0;
int contCat3=0;
//B
int acuSueldoCat1=0;
int acuSueldoCat2=0;
int acuSueldoCat3=0;
//C
float proSueldo=0;
//D
int maxSueldo=0;
int maxCategoria=0;


for (int i=0; i<EMPLEADOS; i++){
    int sueldo=0;

    cout << "Ingrese numero de categoria (1 a 3): ";
    cin >> categoria;
    cout << "Ingrese antiguedad, ejemplo para cinco anios ingrese 5:  ";
    cin >> antiguedad;

    /*-----------------------------------------------------------------------------------------------------------*/

    sueldo = antiguedad*1200;

    switch(categoria){
        case 1:
            sueldo+=38000;
            contCat1++;
        break;
        case 2:
            sueldo+=70000;
            contCat2++;
        break;
        case 3:
            sueldo+=105000;
            contCat3++;
        break;
    }

    //B
    if(categoria==1){
        acuSueldoCat1+=sueldo;
    }else{
        if(categoria==2){
        acuSueldoCat2+=sueldo;
        }else{
            if(categoria==3){
            acuSueldoCat3+=sueldo;
            }
        }
    }
    //C
    proSueldo+=sueldo;

    //D
    if(sueldo>maxSueldo){
        maxSueldo=sueldo;
        maxCategoria=categoria;
    }

}

cout << endl << "--------------------------------" << endl;
cout << "Punto A: Empleados para cada categoria:" << endl;
cout << endl << "Categoria 1: " << contCat1;
cout << endl << "Categoria 2: " << contCat2;
cout << endl << "Categoria 3: " << contCat3;
cout << endl << "--------------------------------" << endl;
cout << "Punto B: Sueldos para cada categoria ? :" << endl;
cout << endl << "Categoria 1: " << acuSueldoCat1;
cout << endl << "Categoria 2: " << acuSueldoCat2;
cout << endl << "Categoria 3: " << acuSueldoCat3;
cout << endl << "--------------------------------" << endl;
cout << "Punto C: Sueldo promedio :" <<proSueldo/EMPLEADOS;
cout << endl << "--------------------------------" << endl;
cout << "Punto D: Sueldo maximo: " << maxSueldo << " Categoria: " << maxCategoria;



return 0;
}
