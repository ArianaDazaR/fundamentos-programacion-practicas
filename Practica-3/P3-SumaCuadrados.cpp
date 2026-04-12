#include <iostream>
#include <math.h>
using namespace std;

int main () {

    int N, i;
    int suma=0;

    cout << "Ingrese un valor para N: ";
    cin >> N;

    for (i=1; i<=N; i++){
        suma = suma + pow(i,2);
    }

    cout << "\nLa suma de los cuadrados de los numeros enteros entre 1 y " << N << " es " << suma << endl;

return 0;
}
