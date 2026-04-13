#include <iostream>
using namespace std;

int main () {

    int i, j, k;
    int n=10;

    cout << "Tabla de Sumar (1 al 10)\n\n";
    cout << "   |";

    for (i=0; i<=n; i++) {
        cout << " "<< i;
    }

    cout << "\n---+-------------------------\n";

    for (j=1; j<=n; j++) {
        cout << " " << j << " | ";
        for (k=1; k<=n; k++) {
            cout << " " << k+j;
        }
        cout << "\n";
    }

return 0;
}
