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

    cout << "\nResumen de datos:" << endl;
    cout << "Cantidad de personas mayores a 50 a�os: " << cantidadMayores50 << endl;
    cout << "Promedio de edades: " << fixed << setprecision(2) << promedioEdades << endl;
    cout << "\nDatos de las personas ingresadas:" << endl;
   
    for (int i = 0; i < n; ++i) {
        cout << "PERSONA " << i + 1 << ":" << endl;
        cout << "Nombres: " << personas[i].nombres << endl;
        cout << "DNI: " << personas[i].dni << endl;
        cout << "Edad: " << personas[i].edad << endl;
        cout << endl;
    }

    return 0;
}

