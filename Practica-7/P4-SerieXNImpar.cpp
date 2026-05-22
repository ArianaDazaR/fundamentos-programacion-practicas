#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void LeerDatos(int &n, int &x);
double Serie(int n, int x);
void MostrarSerieYResultado(int x, int n, double suma);

int main() {
    int n, x;
    LeerDatos(n, x);
    double suma = Serie(n, x);
    MostrarSerieYResultado(x, n, suma);
    return 0;
}

void LeerDatos(int &n, int &x) {
    cout << "Ingrese el valor de x (entero positivo): ";
    cin >> x;
    cout << "Ingrese el valor de n (cantidad de terminos): ";
    cin >> n;
}

double Serie(int n, int x) {
    double suma = 0;
    double factorial = 1;
    int signo = 1;

    for (int i = 1; i <= n; i++) {
        factorial =factorial * i;
        if (i % 2 != 0) {
            suma += signo * (pow(x,i) / factorial);
            signo = -signo;
        }
    }
    return suma;
}

void MostrarSerieYResultado(int x, int n, double suma) {
    cout << "\nS = ";
    int signo = 1;
    for (int i = 1; i <= n; i = i+2) {
        cout << x << "^" << i << "/" << i << "!";
        if (i < n) {
            if (signo == 1) {
                cout << "-";
            } else {
                cout << "+";
            }
            signo = -signo;
        }
    }
    cout << " = " << fixed << setprecision(2) << suma << endl;
}
