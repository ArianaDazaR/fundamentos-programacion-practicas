#include <iostream>
using namespace std;

int main () {

    int n, i, fib;
    int a=1, b=1;

    cout << "Que numero de Fibonacci desea encontrar?: ";
    cin >> n;

    if (n == 1) {
        cout << "F_1 = " << a << endl;
    } else {
        if (n == 2) {
        cout << "F_2 = " << b << endl;
        } else {
            for (i=3; i<=n; i++) {
                fib = a + b;
                a = b;
                b = fib;
            }
            cout << "F_" << n << " = " << fib << endl;
        }
    }

return 0;
}
