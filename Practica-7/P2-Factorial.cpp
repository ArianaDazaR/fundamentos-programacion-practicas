#include <iostream>
using namespace std;

double factorial (int n);

int main () {
    int n;
    double resultado;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    resultado = factorial (n);
    cout << "FAC(x): " << resultado;
    return 0;
}

double factorial (int n) {
    double resultado = 1;
    for (int i=1; i<=n; i++) {
        resultado = resultado * i;
    }
    return resultado;
}
