#include <iostream>
#include <cstring>

using namespace std;


//Clase: molde; tipo de dato
//Objetos:Variables de una clase
//Private y public: Especificadores de acceso
//this: puntero que contiene la direccion de la variable que llama al metodo

class Fecha{
private:///Solo es accesible desde dentro de la clase
    int dia, mes, anio; ///Propiedades de la clase ENCAPSULAMIENTO


public:///Accesible dentro y fuera de la clase
    Fecha(int d=0, int m=0, int a=0){///Constructor x valores por omision
        dia=d;
        mes=m;
        anio=a;
    }

    void Mostrar();
    void Cargar();

    //Gets
    int getDia(){return dia;} //Realizar Get y Set con todas la propiedades siempre
    int getMes(){return mes;}
    int getAnio(){return anio;}
    //Sets
    void setDia(int d){dia=d;} //Set --> para realizar validaciones
    void setMes(int m){
        if (m>1 && m<=12){
        mes=m;
        }
    }
    void setAnio(int a){anio=a;}


    ~Fecha(){}; ///Destructor -->> En memoria dinamica devuelve dicha memoria

};

void Fecha::Mostrar(){
    //cout <<this<<endl;
    cout << this->dia << "/" << this->mes << "/" << this->anio << endl;
}

void Fecha::Cargar(){
    int d;

    cout << "DIA: ";
    cin >> d;
    setDia(d);
    cout << "MES: ";
    cin >> d;
    setMes(d);
    cout << "ANIO: ";
    cin >> d;
    setAnio(d);
}


int main (){
    Fecha actual;
    actual.Cargar();
    actual.Mostrar();
    cout << endl;

return 0;
}
