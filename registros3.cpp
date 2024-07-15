#include <iostream>
#include <string>

using namespace std;

struct Persona {
    string nombre;
    int diaNacimiento;
    int mesNacimiento;
    int anioNacimiento;
};

void pedirDatos(Persona* personas, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre de la persona " << i + 1 << ": ";
        cin >> personas[i].nombre;
        cout << "Ingrese el dia de nacimiento de " << personas[i].nombre << ": ";
        cin >> personas[i].diaNacimiento;
        cout << "Ingrese el mes de nacimiento de " << personas[i].nombre << ": ";
        cin >> personas[i].mesNacimiento;
        cout << "Ingrese el anio de nacimiento de " << personas[i].nombre << ": ";
        cin >> personas[i].anioNacimiento;
    }
}


    return 0;
}

