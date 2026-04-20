#include <iostream>
using namespace std;

int main () {

    int numero, digito, SumaMinima;
    int suma = 0;
    int NumPar = 0;

    cout << "Bienvenido al Sistema\n\n";
    cout << "Ajustes de Seguridad\n";
    cout << "- Debe contener al menos dos digitos pares\n";
    cout << "- La suma de los digitos debe superar el valor de: ";
    cin >> SumaMinima;

    cout << "\nCambios guardados.\nPruebe un codigo: ";
    cin >> numero;

    while (numero > 0) {
        digito = numero % 10;
        if (digito % 2 == 0) {
            NumPar++;
        }
        suma = suma + digito;
        numero = numero / 10;
    }

    if (suma <= SumaMinima && NumPar < 2) {
        cout << "El codigo no es seguro. La suma de los digitos debe superar " << SumaMinima << " y debe contener al menos dos digitos pares.";
    } else {
        if (suma <= SumaMinima) {
            cout << "El codigo no es seguro. La suma de los digitos debe superar " << SumaMinima << ".";
        } else {
            if (NumPar < 2) {
                cout << "El codigo no es seguro. Debe contener al menos dos digitos pares.";
            } else {
                cout << "El codigo es seguro.";
            }
        }
    }

return 0;
}
