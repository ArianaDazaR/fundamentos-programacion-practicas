#include <iostream>
using namespace std;

int main () {

    int numero, digito;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Numero invertido: ";

    while (numero > 0) {
        digito = numero % 10;
        cout << digito;
        numero = numero / 10;
    }

return 0;
}
