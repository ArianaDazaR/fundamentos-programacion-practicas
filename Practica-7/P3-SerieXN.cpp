#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void LeerDatos(int &n, int &x);
float Serie(int n, int x);
void MostrarSerieYResultado(int x, int n, float suma);

int main() {
    int n, x;
    LeerDatos(n, x);
    float suma = Serie(n, x);
    MostrarSerieYResultado(x, n, suma);
    return 0;
}

void LeerDatos(int &n, int &x) {
    cout << "Ingrese el valor de x (entero positivo): ";
    cin >> x;
    cout << "Ingrese el valor de n (cantidad de terminos): ";
    cin >> n;
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
    cout << "\nResultado = " << fixed << setprecision(2) << suma << endl;
}
