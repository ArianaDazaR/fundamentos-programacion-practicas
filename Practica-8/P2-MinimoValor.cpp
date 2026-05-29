#include <iostream>
using namespace std;

void LeerVector (float numeros [], int n);
float BuscarMinimo (float numeros [], int n);
void MostrarNumero (float minimo);

int main () {
    int n;
    cout << "Cuantos numeros desea ingresar?:";
    cin >> n;
    float numeros [n];
    LeerVector(numeros, n);
    float minimo = BuscarMinimo(numeros, n);
    MostrarNumero(minimo);
    return 0;
}

void LeerVector (float numeros [], int n) {
    for (int i=0; i<n; i++) {
        cout << "Numero " << i+1 << ": ";
        cin >> numeros [i];
    }
}

float BuscarMinimo (float numeros [], int n) {
    float menor = numeros [0];
    for (int i=0; i<n; i++) {
        if (menor > numeros [i]) {
            menor = numeros [i];
        }
    }
    return menor;
}

void MostrarNumero (float minimo) {
    cout << "\nMaximo valor en el conjunto: " << minimo << endl;
}
