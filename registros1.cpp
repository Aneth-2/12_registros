#include <iostream>
#include <string>
#include <limits> 

using namespace std;

struct Empleado {
    string nombre;
    string sexo;
    int sueldo;
};

int main() {
    int n;
    
    cout << "Ingrese cantidad de empleados: ";
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    
    Empleado empleados[n];  
    
    for (int i = 0; i < n; ++i) {
        cout << "EMPLEADO " << i + 1 << endl;
        
        cout << "Nombre: ";
        getline(cin, empleados[i].nombre);
        
        cout << "Sexo: ";
        getline(cin, empleados[i].sexo);
        cout << "Sueldo: ";
        cin >> empleados[i].sueldo;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }
    
    int indiceMayorSueldo = 0;
    for (int i = 1; i < n; ++i) {
        if (empleados[i].sueldo > empleados[indiceMayorSueldo].sueldo) {
            indiceMayorSueldo = i;
        }
    }
    
	int indiceMenorSueldo = 0;
   for (int i = 1; i < n; ++i) {
        if (empleados[i].sueldo < empleados[indiceMenorSueldo].sueldo) {
            indiceMenorSueldo = i;
        }
    }

    cout << "\nEmpleado con mayor sueldo:\n";
    cout << "Nombre: " << empleados[indiceMayorSueldo].nombre << endl;
    cout << "Sexo: " << empleados[indiceMayorSueldo].sexo << endl;
    cout << "Sueldo: " << empleados[indiceMayorSueldo].sueldo << endl;
    
    cout << "\nEmpleado con menor sueldo:\n";
    cout << "Nombre: " << empleados[indiceMenorSueldo].nombre << endl;
    cout << "Sexo: " << empleados[indiceMenorSueldo].sexo << endl;
    cout << "Sueldo: " << empleados[indiceMenorSueldo].sueldo << endl;

    return 0;
}

