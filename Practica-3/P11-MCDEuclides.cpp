#include <iostream>
using namespace std;

int main () {

    int a, b, resto;

    cout << "Ingrese el primer valor entero: ";
    cin >> a;

    cout << "Ingrese el segundo valor entero: ";
    cin >> b;

    while (b!=0) {
        resto = a%b;
        a=b;
        b=resto;
    }

    cout << "El MCD es: " << a << endl;

return 0;
}
