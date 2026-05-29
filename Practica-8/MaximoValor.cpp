#include <iostream>
using namespace std;

void LeerVector (float numeros [], int n);
float BuscarMayor (float numeros [], int n);
void MostrarNumero (float maximo);

int main () {
    int n;
    cout << "Cuantos numeros desea ingresar?:";
    cin >> n;
    float numeros [n];
    LeerVector(numeros, n);
    float maximo = BuscarMayor(numeros, n);
    MostrarNumero(maximo);
    return 0;
}

void LeerVector (float numeros [], int n) {
    for (int i=0; i<n; i++) {
        cout << "Numero " << i+1 << ": ";
        cin >> numeros [i];
    }
}

float BuscarMayor (float numeros [], int n) {
    float mayor = numeros [0];
    for (int i=0; i<n; i++) {
        if (mayor < numeros [i]) {
            mayor = numeros [i];
        }
    }
    return mayor;
}

void MostrarNumero (float maximo) {
    cout << "\nMaximo valor en el conjunto: " << maximo << endl;
}
