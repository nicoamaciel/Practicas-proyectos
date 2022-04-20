#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;


///CONSTRUCTOR/ES: METODO QUE TIENE EL MISMO NOMBRE QUE LA CLASE
        ///NO DEVUELVE NADA
        ///SE EJECUTA DE MANERA AUTOMATICA CUANDO EL OBJETO NACE
        ///EN GENERAL SE LOS UTILIZA PARA DARLE VALOR INICIALES A LAS PROP.

///DESTRUCTOR: METODO QUE TIENE EL MISMO NOMBRE QUE LA CLASE CON EL CARACTER ~ ALT 126
        ///NO DEVUELVE NADA NI ACEPTA PARAMETROS
        ///SE EJECUTA DE MANERA AUTOMATICA AL FINALIZAR EL OBJETO


class Alumno{

private:///No es accesible desde fuera de la clase
    int legajo, edad;///propiedad-> variable de la clase
    char nombre [25], apellido[30];
public:///Es accesible desde fuera de la clase
    Alumno(int leg, int e, const char *n, const char *ape){
        legajo=leg;
        edad=e;
        strcpy(nombre,n);
        strcpy(apellido,ape);

    } //constructor
    void Cargar();
    void Mostrar();


    ///sets() --> permiten asignar valor a cada propiedad
    void setLegajo(int l){legajo=l;}
    void setEdad(int e){edad=e;}
    void setNombre (const char *n){strcpy(nombre,n);}
    void setapellido (const char *n){strcpy(apellido,n);}

    ///gets() --> permiten que el mundo externo sepa el valor de una propiedad
    int getLegajo(){return legajo;}
    int getEdad(){return edad;}
    const char *getNombre() {return nombre;}
    const char *getapellido() {return apellido;}

};

void Alumno::Mostrar(){ ///Scoup - operador de ambinto dice que mostrar pertenece a Alumno
        cout << "LEGAJO: ";
        cout << legajo << endl;
        cout << "EDAD: ";
        cout << edad << endl;
        cout << "NOMBRE: ";
        cout << nombre << endl;
        cout << "APELLIDO: ";
        cout << apellido << endl;

}
void Alumno::Cargar(){ ///Scoup - operador de ambinto dice que mostrar pertenece a Alumno
        cout << "LEGAJO: ";
        cout << "LEGAJO: ";
        cin >> legajo;
        cout << "EDAD: ";
        cin >> edad;
        cout << "NOMBRE: ";
        cin >> nombre;
        cout << "APELLIDO: ";
        cin >> apellido;
    }



int main (){
    Alumno obj(1234, 21, "OLGA", "PEREZ"); ///Declaro un objeto tipo alumno
    /*char nombre[]="Daiel";
    obj.Cargar();
    obj.setNombre("Daniel");*/
    obj.Mostrar();

return 0;
}
