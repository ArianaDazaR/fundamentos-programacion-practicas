#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void LeerDatos(int &n, int &x);
float Serie(int n, int x);
void MostrarSerieYResultado(int x, int n, int suma);

int main() {
    int n, x;
    LeerDatos(n, x);
    MostrarSerieYResultado(x, n, suma);
    return 0;
}

void LeerDatos(int &n, int &x) {
    cout << "Ingrese el valor de x (entero positivo): ";
    cin >> x;
    while (x < 0) {
        cout << "x debe ser positivo. Intente de nuevo: ";
        cin >> x;
    }
    cout << "Ingrese el valor de n (cantidad de terminos): ";
    cin >> n;
    while (n < 0) {
        cout << "n debe ser positivo. Intente de nuevo: ";
        cin >> n;
    }
}

float Serie(int n, int x) {
    float suma = 0;
    float factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
        suma = suma + pow(x, i) / factorial;
    }
    return suma;
}

void MostrarSerieYResultado(int x, int n, float suma) {
    cout << "\nS = ";
    for (int i = 1; i <= n; i++) {
        cout << x << "^" << i << "/" << i << "!";
        if (i < n) cout << " + ";
    }
    cout << "= " << fixed << setprecision(2) << suma << endl;
}
