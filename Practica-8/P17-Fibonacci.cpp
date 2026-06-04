#include <iostream>
using namespace std;

void Fibonacci(int n, long fib[]);
void MostrarVector(long fib[], int n);

int main() {
    int n;
    cout << "Cuantos numeros de Fibonacci desea generar?: ";
    cin >> n;
    while (n <= 0) {
        cout << "Debe ser mayor a 0. Intente de nuevo: ";
        cin >> n;
    }
    long fib[n];
    Fibonacci(n, fib);
    MostrarVector(fib, n);
    return 0;
}

void Fibonacci(int n, long fib[]) {
    if (n >= 1) {
        fib[0] = 0;
    }
    if (n >= 2) {
        fib[1] = 1;
    }
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
}

void MostrarVector(long fib[], int n) {
    cout << "\nPrimeros " << n << " numeros de Fibonacci:" << endl;
    for (int i = 0; i < n; i++){
        cout << fib[i] << " ";
    }
}
