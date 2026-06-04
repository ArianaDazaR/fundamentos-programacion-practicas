#include <iostream>
#include <string>
using namespace std;

void LeerDatos(string alumnos[], float notas[], int n);
void OrdenarDescendente(string alumnos[], float notas[], int n);
void MostrarTresMejores(string alumnos[], float notas[]);

int main() {
    int n;
    cout << "Cuantos alumnos?: ";
    cin >> n;
    string alumnos[n];
    float notas[n];
    LeerDatos(alumnos, notas, n);
    OrdenarDescendente(alumnos, notas, n);
    MostrarTresMejores(alumnos, notas);
    return 0;
}

void LeerDatos(string alumnos[], float notas[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nombre del alumno " << i+1 << ": ";
        cin >> alumnos[i];
        cout << "Nota: ";
        cin >> notas[i];
    }
}

void OrdenarDescendente(string alumnos[], float notas[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (notas[j] < notas[j+1]) {

                float tempNota = notas[j];
                notas[j] = notas[j+1];
                notas[j+1] = tempNota;

                string tempNombre = alumnos[j];
                alumnos[j] = alumnos[j+1];
                alumnos[j+1] = tempNombre;
            }
        }
    }
}

void MostrarTresMejores(string alumnos[], float notas[]) {
    cout << "\nLas 3 mejores notas:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i+1 << ". " << alumnos[i] << " - " << notas[i] << endl;
    }
}
