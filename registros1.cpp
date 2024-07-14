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

    return 0;
}

