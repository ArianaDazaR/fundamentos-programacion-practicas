#include <iostream>
using namespace std;

void LeerVector(float numeros[], int n);
void invertir(float numeros[], float invertido[], int n);
void MostrarNumero(float invertido[], int n);

int main() {
    int n;
    cout << "Cuantos numeros desea ingresar?: ";
    cin >> n;
    float numeros[n];
    float invertido[n];
    LeerVector(numeros, n);
    invertir(numeros, invertido, n);
    MostrarNumero(invertido, n);
    return 0;
}

void LeerVector(float numeros[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
}

void invertir(float numeros[], float invertido[], int n) {
    for (int i = 0; i < n; i++) {
        invertido[i] = numeros[n - 1 - i];
    }
}

void MostrarNumero(float invertido[], int n) {
    cout << "\nLista de numeros revertida: ";
    for (int i = 0; i < n; i++) {
        cout << invertido[i] << " ";
    }
}
