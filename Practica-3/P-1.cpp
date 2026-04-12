#include <iostream>
using namespace std;

int main () {

    int N, i;
    int suma=0;

    cout << "Ingrese el valor de N: ";
    cin >> N;

    for (i=1; i<=N; i++) {
        suma = suma+i;
    }

    cout << "\nLa suma de los numeros enteros entre 1 y " << N << " es " << suma << endl;

return 0;
}
