#include <iostream>
using namespace std;

int main () {

    int a, b, aoriginal,boriginal, resto, mcd, mcm;

    cout << "Ingrese el primer valor entero: ";
    cin >> a;

    cout << "Ingrese el segundo valor entero: ";
    cin >> b;

    aoriginal=a;
    boriginal=b;

    while (b!=0) {
        resto = a%b;
        a=b;
        b=resto;
    }

    mcd=a;
    mcm = (aoriginal*boriginal)/mcd;

    cout << "\nEl MCM es: " << mcm << endl;

return 0;
}
