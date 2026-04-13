#include <iostream>
using namespace std;

int main() {
    int N;
    bool esPrimo = true;

    cout << "Ingrese un numero entero positivo: ";
    cin >> N;

    if (N <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i < N; i++) {
            if (N % i == 0) {
                esPrimo = false;
            }
        }
    }

    if (esPrimo == true) {
        cout << N << " es un numero primo." << endl;
    } else {
        cout << N << " no es un numero primo." << endl;
    }

    return 0;
}
