#include <iostream>
using namespace std;

int main () {

    int numero, digito, anterior;
    int ContDigito = 0;
    bool invalido = false;

    cout << "Ingrese su PIN: ";
    cin >> numero;

    while (numero > 0) {
        digito = numero % 10;
        ContDigito++;
        if (anterior == digito) {
            invalido = true;
        }
        anterior = digito;
        numero = numero / 10;
    }

    if (invalido && ContDigito != 4) {
        cout << "PIN Invalido. Existen dos digitos iguales consecutivos y solo debe contener cuatro digitos.";
    } else {
        if (invalido) {
            cout << "PIN Invalido. Existen dos digitos iguales consecutivos.";
        } else {
            if (ContDigito != 4) {
                cout << "PIN Invalido. Debe contener cuatro digitos.";
            } else {
                cout << "PIN Valido.";
            }
        }
    }

return 0;
}
