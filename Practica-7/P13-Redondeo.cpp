#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void LeerDatos(float &R, int &x);
float Redondeo(float R, int x);
void MostrarRedondeo(float R, int x, float redondeado);

int main() {
    float R, redondeado;
    int decimales;

    LeerDatos(R, decimales);
    redondeado = Redondeo(R, decimales);
    MostrarRedondeo(R, decimales, redondeado);

    return 0;
}

void LeerDatos(float &R, int &x) {
    cout << "Ingrese un numero real: ";
    cin >> R;
    cout << "Ingrese cuantos decimales desea: ";
    cin >> x;
}

float Redondeo(float R, int x) {
    float factor = pow(10, x);
    return (R * factor) / factor;
}

void MostrarRedondeo(float R, int x, float redondeado) {
    cout << fixed << setprecision(x);
    cout << "Numero redondeado a " << x << " decimales: " << redondeado << endl;
}
