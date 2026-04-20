#include <iostream>
using namespace std;

int main () {

    int numero, digito;
    int suma = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero > 0) {
        digito = numero % 10;
        suma = suma + digito;
        numero = numero / 10;
    }

    cout << "La suma de los digitos es: " << suma << endl;

return 0;
}
