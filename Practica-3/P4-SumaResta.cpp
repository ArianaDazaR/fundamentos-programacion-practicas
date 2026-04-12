#include <iostream>
using namespace std;

int main () {

    int N, i;
    int operacion=0;

    cout << "Ingrese un valor para N: ";
    cin >> N;

    for (i=0; i<=N; i++){
        if (i%2!=0) {
            operacion = operacion + i;
        } else {
            operacion = operacion - i;
        }
    }

    cout << "\nLa suma de los numeros impares y la resta de los numeros pares enteros entre 1 y " << N << " es " << operacion << endl;

return 0;
}
