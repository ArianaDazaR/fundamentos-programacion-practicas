#include <iostream>
#include <string>
using namespace std;

int MAX = 100;

void MostrarMenu();
void IngresarAlumno(string nombres[], float notas[], int &cantidad, int MAX);
void ListarAlumnos(string nombres[], float notas[], int cantidad);
void OrdenarAlfabeticamente(string nombres[], float notas[], int cantidad);
void MejorNota(string nombres[], float notas[], int cantidad);
void PromedioNotas(float notas[], int cantidad);

int main() {
    string nombres[MAX];
    float notas[MAX];
    int cantidad = 0;
    int opcion;

    do {
        MostrarMenu();
        cout << "Elija opcion: ";
        cin >> opcion;
        switch(opcion) {
            case 1: IngresarAlumno(nombres, notas, cantidad, MAX); break;
            case 2: ListarAlumnos(nombres, notas, cantidad); break;
            case 3: OrdenarAlfabeticamente(nombres, notas, cantidad); break;
            case 4: MejorNota(nombres, notas, cantidad); break;
            case 5: PromedioNotas(notas, cantidad); break;
            case 6: cout << "\nTerminado." << endl; break;
            default: cout << "Opcion invalida." << endl;
        }
    } while (opcion != 6);

    return 0;
}

void MostrarMenu() {
    cout << "\n--- MENU ALUMNOS ---" << endl;
    cout << "1. Ingresar alumno y nota" << endl;
    cout << "2. Listar alumnos" << endl;
    cout << "3. Ordenar alfabeticamente" << endl;
    cout << "4. Sacar la mejor nota" << endl;
    cout << "5. Sacar el promedio de notas" << endl;
    cout << "6. Salir" << endl;
}

void IngresarAlumno(string nombres[], float notas[], int &cantidad, int MAX) {
    if (cantidad >= MAX) {
        cout << "Capacidad maxima alcanzada (100)." << endl;
    }
    cout << "Nombre: ";
    cin >> nombres[cantidad];
    cout << "Nota: ";
    cin >> notas[cantidad];
    cantidad++;
}

void ListarAlumnos(string nombres[], float notas[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay alumnos registrados." << endl;
        return;
    }
    cout << "\nLista de alumnos:" << endl;
    for (int i = 0; i < cantidad; i++) {
        cout << nombres[i] << " - Nota: " << notas[i] << endl;
    }
}

void OrdenarAlfabeticamente(string nombres[], float notas[], int cantidad) {
    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = 0; j < cantidad - i - 1; j++) {
            if (nombres[j] > nombres[j+1]) {

                string tempNom = nombres[j];
                nombres[j] = nombres[j+1];
                nombres[j+1] = tempNom;

                float tempNota = notas[j];
                notas[j] = notas[j+1];
                notas[j+1] = tempNota;
            }
        }
    }
    cout << "Lista ordenada alfabeticamente." << endl;
}

void MejorNota(string nombres[], float notas[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay alumnos." << endl;
        return;
    }
    float mejor = notas[0];
    string mejorNombre = nombres[0];
    for (int i = 1; i < cantidad; i++) {
        if (notas[i] > mejor) {
            mejor = notas[i];
            mejorNombre = nombres[i];
        }
    }
    cout << "Mejor nota: " << mejorNombre << " con " << mejor << endl;
}

void PromedioNotas(float notas[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay alumnos." << endl;
        return;
    }
    float suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma = suma + notas[i];
    }
    float promedio = suma / cantidad;
    cout << "Promedio de notas: " << promedio << endl;
}
