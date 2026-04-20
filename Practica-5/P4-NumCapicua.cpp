#include <iostream>
using namespace std;

int main () {

    int numero, digito, original;
    int invertido = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    original = numero;

    while (numero > 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero = numero / 10;
    }

    if (original == invertido) {
        cout << "El numero " << original << " es capicua." << endl;
    } else {
        cout << "El numero " << original << " no es capicua. El numero invertido es: " << invertido << endl;
    }

return 0;
}
