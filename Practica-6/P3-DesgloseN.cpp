#include <iostream>
using namespace std;

int LeerNumero ();
void Desglose (int n, int &u, int &d, int &c, int &m);

int main () {
    int n = LeerNumero ();
    int u, d, c, m;
    Desglose(n, u, d, c, m);
    cout << "\nDesglose del numero " << n <<":\n";
    cout << "Unidades de mil: " << m << endl;
    cout << "Centenas: " << c << endl;
    cout << "Decenas: " << d << endl;
    cout << "Unidades: " << u << endl;
    return 0;
}

int LeerNumero () {
    int n;
    cout << "Ingrese un numero entero positivo menor a 10000: ";
    cin >> n;
    while (n <= 0 || n >= 10000) {
        cout << "Revise el numero ingresado. Intente de nuevo: ";
        cin >> n;
    }
    return n;
}

void Desglose (int n, int &u, int &d, int &c, int &m) {
    u = n % 10;
    d = (n / 10) % 10;
    c = (n / 100) % 10;
    m = (n / 1000) % 10;
}
