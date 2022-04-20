#include <iostream>
#include <string>
using namespace std;


class Examen
{
    private:
    string _nombre, _apellido; //Guion bajo propiedas privadas
    int _nota, _dia, _mes, _anio; //Guion bajo propiedades privadas

    public:
    void cargar();
    void mostrar();

};

    void Examen::cargar(){
    cout << "Nombre: ";
    cin >> _nombre;
    cout << "Apellido: ";
    cin >> _apellido;
    cout << "Dia: ";
    cin >> _dia;
    cout << "Mes: ";
    cin >> _mes;
    cout << "Anio: ";
    cin >> _anio;
    cout << "Nota: ";
    cin >> _nota;
    }

    void Examen::mostrar(){
    cout << endl << "Nombre: " << _nombre << " Apellido: " << _apellido <<endl;
    cout << endl << "-----------------------" << endl;
    cout << _dia << "/" << _mes << "/" << _anio << endl;
    cout << endl << "-----------------------" << endl;
    cout << endl << "Nota: " << _nota;
    }


int main()
{
    Examen obj;
    obj.cargar();
    obj.mostrar();

    return 0;
}
