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
    
    return 0;
}

