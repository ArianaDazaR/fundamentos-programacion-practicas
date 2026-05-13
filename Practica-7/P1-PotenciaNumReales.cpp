#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void LeerDatos (float &x, float &y);
float potencia (float x, float y);
void MostrarResultado (float resultado);

int main () {
    float x, y, resultado;
    LeerDatos(x, y);
    resultado = potencia (x, y);
    MostrarResultado(resultado);
    return 0;
}

void LeerDatos (float &x, float &y) {
    cout << "Ingrese un valor x (x^y): ";
    cin >> x;
    cout << "Ingrese un valor y (x^y): ";
    cin >> y;
}

float potencia(float x, float y) {
    return pow(x,y);
}

void MostrarResultado (float resultado) {
    cout << "Resultado: " << fixed << setprecision(2) << resultado << endl;
}
