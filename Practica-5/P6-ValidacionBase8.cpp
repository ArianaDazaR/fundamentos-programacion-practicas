#include <iostream>
using namespace std;

int main () {

    int numero, digito, original;
    bool DigitoInvalido = false;

    cout << "Ingrese un numero: ";
    cin >> numero;

    original = numero;

    while (numero > 0) {
        digito = numero % 10;
        if (digito >= 8) {
            DigitoInvalido=true;
            break;
        }
        numero = numero / 10;
    }

    if (DigitoInvalido) {
        cout << "Numero invalido. El numero " << original << " contiene un digito mayor o igual a 8." << endl;
    } else {
        cout << "Numero de base 8 valido." << endl;
    }

return 0;
}
