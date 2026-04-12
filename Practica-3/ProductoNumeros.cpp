#include <iostream>
using namespace std;

int main () {

    int N, i;
    int producto=1;

    cout << "Ingrese un valor para N: ";
    cin >> N;

    for (i=1; i<=N; i++){
        producto = producto * i;
    }

    cout << "\nEl producto de los numeros enteros entre 1 y " << N << " es " << producto << endl;

return 0;
}
