#include <iostream>
using namespace std;


class alumno{
private: ///se definen las propiedades, o variables de la clase
    int legajo, edad, ingreso;
    char apellido[30];
public: ///se define el comportamiento por medio de los metodos, o funciones de la clase
    void Cargar(){
    cout<< "LEGAJO: ";
    cin >> legajo;
    cout<< "EDAD: ";
    cin>> edad;
    cout<< "AÑO DE INGRESO: ";
    cin>> ingreso;
    cout<< "APELLIDO: ";
    cin>> apellido;
    }

    void Mostrar(){
    cout<< "LEGAJO: ";
    cout<< legajo << endl;
    cout<< "EDAD: ";
    cout<< edad << endl;
    cout<< "AÑO DE INGRESO: ";
    cout<< ingreso<< endl;
    cout<< "APELLIDO: ";
    cout<< apellido << endl;
    }

};

/*PROGRAMACION ORIENTADA A OBJETOS*/
int main(){
    alumno aux; /// aux es un tipo de dato alumno
    aux.Cargar(); ///Usando metodo cargar de la parte publica
    aux.Mostrar();///Usando metodo cargar la parte publica
    cout << endl;


return 0;
}


