#include <iostream>
#include <math.h>
using namespace std;

int main () {

    float x;
    float suma=0, factorial=1;
    int n, i;

    cout << "Ingrese un valor para x (x^n/n!): ";
    cin >> x;

    cout << "Ingrese un valor para n (x^n/n!): ";
    cin >> n;

    for (i=1; i<=n; i++) {

        factorial = factorial * i;
        suma = suma + pow(x, i)/factorial;
    }

    cout << "\nLa suma de la serie de terminos x^n/n! es: " << suma << endl;

return 0;
}
