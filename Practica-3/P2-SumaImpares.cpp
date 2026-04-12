#include <iostream>
using namespace std;

int main () {

    int N, i;
    int suma=0;

    cout << "Ingrese el valor de N:";
    cin >> N;

    for (i=0; i<=N; i++){
        if (i%2!=0) {
            suma = suma + i;
        }
    }

    cout << "\nLa suma de los numeros enteros impares entre 1 y " << N << " es " << suma << endl;

return 0;
}
