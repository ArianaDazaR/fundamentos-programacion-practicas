#include <iostream>
#include <math.h>
using namespace std;

int main () {

    int n, i;
    float x;
    float suma=0;

    cout << "Ingrese un valor para x (x^n): ";
    cin >> x;

    cout << "Ingrese un valor para n (x^n): ";
    cin >> n;

    for (i=1; i<=n; i++){
        suma = suma + pow(x, i);
    }

    cout << "\nLa suma de la serie, dada una base de " << x << ", elevada a los numeros enteros entre 1 y " << n << " es " << suma << endl;

return 0;
}
