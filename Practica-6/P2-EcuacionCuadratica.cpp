#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void LeerCoeficientes (int &a, int &b, int &c);
void cuadratica (int a, int b, int c, float &x1, float &x2);

int main () {
    int a, b, c;
    LeerCoeficientes (a, b, c);
    float x1, x2;
    cuadratica (a, b, c, x1, x2);
    cout << "Raiz 1 (x1): " << fixed << setprecision(3) << x1 << endl;
    cout << "Raiz 2 (x2): " << fixed << setprecision(3) << x2 << endl;
    return 0;
}

void LeerCoeficientes (int &a, int &b, int &c) {
    cout << "Para la ecuacion cuadratica de la forma ax^2 + bx + c = 0\n";
    cout << "Ingrese el valor a: ";
    cin >> a;
    cout << "Ingrese el valor b: ";
    cin >> b;
    cout << "Ingrese el valor c: ";
    cin >> c;
}

void cuadratica(int a, int b, int c, float &x1, float &x2) {
    float discriminante = b*b - 4*a*c;
    if (discriminante < 0) {
        x1 = x2 = 0;
        cout << "No hay raices reales" << endl;
    } else {
        x1 = (-b + sqrt(discriminante)) / (2*a);
        x2 = (-b - sqrt(discriminante)) / (2*a);
    }
}
