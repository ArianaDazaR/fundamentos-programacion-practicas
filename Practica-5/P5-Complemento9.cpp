#include <iostream>
using namespace std;

int main () {

    int numero, digito, complemento, original;
    int invertido = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    original = numero;

    while (numero > 0) {
        digito = numero % 10;
        complemento = 9 - digito;
        invertido = invertido * 10 + complemento;
        numero = numero / 10;
    }

    cout << "El complemento del numero " << original << " es ";

    while (invertido > 0) {
        digito = invertido % 10;
        cout << digito;
        invertido = invertido / 10;
    }

return 0;
}
