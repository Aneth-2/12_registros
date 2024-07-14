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


    return 0;
}

