#include <iostream>
#include <string>
using namespace std;

struct Atleta {
    string nombre;
    string pais;
    string disciplina;
    int numMedallas;
};

int main() {
    int n; 
    cout << "Ingrese el numero de atletas: ";
    cin >> n;

Atleta atletas[n];

    for (int i = 0; i < n; ++i) {
        cout << "Atleta " << i + 1 << ":\n";
        cout << "Nombre: ";
        cin.ignore(); 
        getline(cin, atletas[i].nombre);
        cout << "Pais: ";
        getline(cin, atletas[i].pais);
        cout << "Disciplina: ";
        getline(cin, atletas[i].disciplina);
        cout << "Numero de medallas: ";
        cin >> atletas[i].numMedallas;
    }

 string paisBuscado;
    cout << "\nIngrese el nombre del pais para buscar atletas: ";
    cin.ignore();
    getline(cin, paisBuscado);
    
    bool encontrado = false;
    int maxMedallas = -1;
    string nombreMaxMedallas;
    
    cout << "\nAtletas de " << paisBuscado << ":\n";
    for (int i = 0; i < n; ++i) {
        if (atletas[i].pais == paisBuscado) {
            cout << "Nombre: " << atletas[i].nombre << endl;
            cout << "Disciplina: " << atletas[i].disciplina << endl;
            cout << "Numero de medallas: " << atletas[i].numMedallas << endl;
            cout << endl;
            
            if (atletas[i].numMedallas > maxMedallas) {
                maxMedallas = atletas[i].numMedallas;
                nombreMaxMedallas = atletas[i].nombre;
            }
            encontrado = true;
        }
    }
     if (!encontrado) {
        cout << "No se encontraron atletas de " << paisBuscado << ".\n";
    } else {
        cout << "Atleta con mas medallas de " << paisBuscado << ": " << nombreMaxMedallas << " con " << maxMedallas << " medallas.\n";
    }

    return 0;
}

