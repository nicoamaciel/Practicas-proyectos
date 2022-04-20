#include <iostream>
#include <cstring>
using namespace std;

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




class Persona{ //Clase Base
protected: //Permite acceder por parte de clases derivadas
    int DNI;
    char nombre[25], apellido[25];
    Fecha fechaNacimiento;
public:
    ///gets
    int getDNI (){
    return DNI;
    }
    const char *getNombre(){
    return nombre;
    }
    const char *getApellido(){
    return apellido;
    }
    Fecha getfechaNacimiento(){
    return fechaNacimiento;
    }

    ///sets
    int setDNI (int d){
     DNI=d;
    }
    void setNombre(const char *n){
    strcpy(nombre, n);
    }

    void setApellido(const char *n){
    strcpy(apellido, n);
    }
    void setfechaNacimiento(Fecha fN){
        fechaNacimiento=fN;
    }

    void Cargar();
    void Mostrar();

};

void Persona::Cargar(){
    cout << "INGRESE DNI: ";
    cin >>DNI;
    cout << "INGRESE EL NOMBRE: ";
    cin >>nombre;
    cout << "INGRESE EL APELLIDO: ";
    cin >>apellido;
    cout << "INGRESE LA FECHA DE NACIMIENTO: ";
    fechaNacimiento.Cargar();
}

void Persona::Mostrar(){
    cout << "DNI: ";
    cout << DNI << endl;
    cout << "NOMBRE: ";
    cout << nombre << endl;
    cout << "APELLIDO: ";
    cout << apellido << endl;
    cout << "FECHA DE NACIMIENTO: ";
    fechaNacimiento.Mostrar();
}


class Alumno: public Persona{ //Herencia a clase base Alumno deriva a public
private:
    /// prop de persona
    int legajo;
public:

    ///metodo de persona
    int getLegajo(){
    return legajo;

    }
    void setLegajo(int l){
    legajo=l;
    }

    void ponerCeroDNI(){
    DNI=0;
    }

    void Cargar();
    void Mostrar();

};

void Alumno::Cargar(){
    Persona::Cargar();
    cout << "INGRESE EL LEGAJO: ";
    cin >>legajo;
}

void Alumno::Mostrar(){
    Persona::Mostrar();
    cout << "LEGAJO: ";
    cout << legajo << endl;
}


class Docente:Persona{
private:
    char legajo[10];
public:
    const char *getLegajo(){
    return legajo;
    }
    void setLegajo(const char *l){
    strcpy(legajo,l);

    }

    void Cargar();
    void Mostrar();

};

void Docente::Cargar(){
    Persona::Cargar();
    cout << "INGRESE EL LEGAJO: ";
    cin >> legajo;
}

void Docente::Mostrar(){
    Persona::Mostrar();
    cout << "LEGAJO: ";
    cout << legajo << endl;
}


int main(){
    Docente obj;
    obj.Cargar();
    obj.Mostrar();
    cout<<endl;



return 0;
}
