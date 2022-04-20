
/*Ejercicio 2
Además, una caja de ahorro debe poder garantizar las siguientes acciones:
Depósito: Debe poder ingresar dinero al saldo de la cuenta.
Extracción: Debe poder debitar dinero del saldo de la cuenta.
*/


#include <iostream>
#include <cstring>
using namespace std;

class CajaDeAhorro{
private:
    char nombre[20];
    char apellido[20];
    int numeroCuenta;
    float saldo;
public:
    void setNombre(const char *n){
        strcpy(nombre,n);
    }
    void setApellido(const char *a){
        strcpy(apellido,a);
    }

    void setNumeroCuenta(int n){
        numeroCuenta=n;
    }

    void setSaldo(float s){
        saldo=s;
    }

    void setDeposito(float d){
        saldo+=d;
    }




    const char *getNombre();
    const char *getApellido();
    int getNumeroCuenta();
    float getSaldo();



};


    const char *CajaDeAhorro::getNombre(){return nombre;}
    const char *CajaDeAhorro::getApellido(){return apellido;}
    int CajaDeAhorro::getNumeroCuenta(){return numeroCuenta;}
    float  CajaDeAhorro::getSaldo(){return saldo;}

main(){


    float monto;

    CajaDeAhorro obj;
    obj.setSaldo(100);

        //obj.setNombre(" Carlos");
        //cout<<obj.getNombre();
        cout << endl << obj.getSaldo() << endl;
        cout << endl << "Ingrese el deposito: " << endl;
        cin >> monto;
        obj.setDeposito(monto);

        cout << endl << obj.getSaldo() << endl;






}
