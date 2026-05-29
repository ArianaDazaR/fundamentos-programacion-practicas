#include <iostream>
using namespace std;

void LeerVector (float numeros [], int n);
float CalcPromedio (float numeros [], int n);
void MostrarNumero (float promedio);

int main () {
    int n;
    cout << "Cuantos numeros desea ingresar?:";
    cin >> n;
    float numeros [n];
    LeerVector(numeros, n);
    float promedio = CalcPromedio(numeros, n);
    MostrarNumero(promedio);
    return 0;
}

void LeerVector (float numeros [], int n) {
    for (int i=0; i<n; i++) {
        cout << "Numero " << i+1 << ": ";
        cin >> numeros [i];
    }
}

float CalcPromedio (float numeros [], int n) {
    int suma=0;
    for (int i=0; i<n; i++) {
        suma = suma + numeros [i];
    }
    return suma/n;
}

void MostrarNumero (float promedio) {
    cout << "\nPromedio: " << promedio;
}
