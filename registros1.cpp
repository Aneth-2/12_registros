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

    return 0;
}

