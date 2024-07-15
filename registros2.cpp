#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

struct Persona {
    string nombres;
    string dni;
    int edad;
};

int main() {
    int n;

    cout << "Ingrese la cantidad de personas: ";
    cin >> n;
    cin.ignore(); 

    Persona personas[n];
    
    for (int i = 0; i < n; ++i) {
        cout << "Ingrese los datos de la PERSONA " << i + 1 << ":" << endl;
        
        cout << "Nombres: ";
        getline(cin, personas[i].nombres);

        cout << "DNI: ";
        getline(cin, personas[i].dni);

        cout << "Edad: ";
        cin >> personas[i].edad;
        cin.ignore();
    }
    
	int cantidadMayores50 = 0;
    double sumaEdades = 0.0;
    for (int i = 0; i < n; ++i) {
    sumaEdades += personas[i].edad;
        if (personas[i].edad > 50) {
            cantidadMayores50++;
        }

    }
    
    double promedioEdades = sumaEdades / n;

    return 0;
}

