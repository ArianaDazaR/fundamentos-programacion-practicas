#include <iostream>
#include <math.h>
using namespace std;

int main () {

    float x;
    float operacion=0, factorial=1;
    int n, i;

    cout << "Ingrese un valor para x (x^n/n!): ";
    cin >> x;

    cout << "Ingrese un valor para n (x^n/n!): ";
    cin >> n;

    for (i=1; i<=n; i++) {

        factorial = factorial * i;

        if (i%2!=0) {
        operacion = operacion + pow(x, i)/factorial;
        } else {
        operacion = operacion - pow(x, i)/factorial;
        }
    }

    cout << "\n El resultado de la serie de terminos (+/-) x^n/n! es: " << operacion << endl;

return 0;
}
