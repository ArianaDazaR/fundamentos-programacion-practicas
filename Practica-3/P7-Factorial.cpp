#include <iostream>
using namespace std;

int main () {

    int N, i;
    int factorial=1;

    cout << "Ingrese un valor para N: ";
    cin >> N;

    for (i=1; i<=N; i++) {
        factorial = factorial * i;
    }

    cout << "\nResultado: \n" << N << "! = " << factorial << endl;

return 0;
}
