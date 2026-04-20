#include <iostream>
using namespace std;

int main () {

    int numero, digito;
    int NumPar = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero > 0) {
        digito = numero % 10;
        if (digito % 2 == 0){
            NumPar++;
        }
        numero = numero / 10;
    }

    cout << "Cantidad de digitos pares: " << NumPar << endl;

return 0;
}
