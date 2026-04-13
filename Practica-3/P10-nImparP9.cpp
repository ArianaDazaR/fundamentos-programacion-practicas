#include <iostream>
#include <math.h>
using namespace std;

int main () {

    float x, j, k, factorial;
    float operacion=0;
    int n, i;
    int signo=1;

    cout << "Ingrese un valor para x (x^n/n!): ";
    cin >> x;

    cout << "Ingrese un valor para n (x^n/n!): ";
    cin >> n;

    for (i=1; i<=n; i++) {

        if (i%2!=0) {
            factorial = 1;
            for (j=1; j<=i; j++) {
                factorial = factorial * j;
            }
            k = pow(x, i)/factorial;
            operacion = operacion + signo * k;
            signo=-signo;
        }
    }

    cout << "\n El resultado de la serie de terminos (+/-) x^n/n!, donde n es impar, es: " << operacion << endl;

return 0;
}
