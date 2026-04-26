#include <iostream>
#include <cmath>
using namespace std;

void LeerCoeficientes (float &a, float &b, float &c);
void resolverEcuacion(float a, float b, float c, float &x1, float &x2, float &parteReal, float &parteImag, int &tipo);

int main() {
    float a, b, c;
    LeerCoeficientes(a, b, c);
    float x1, x2, parteReal, parteImag;
    int tipo;
    resolverEcuacion(a, b, c, x1, x2, parteReal, parteImag, tipo);

    switch(tipo) {
        case 0:
            cout << "No hay solucion." << endl;
            break;
        case 1:
            cout << "Infinitas soluciones." << endl;
            break;
        case 2:
            cout << "Ecuacion lineal. Una solucion real: x = " << x1 << endl;
            break;
        case 3:
            cout << "Raiz real doble: x = " << x1 << endl;
            break;
        case 4:
            cout << "Dos raices reales distintas: x1 = " << x1 << ", x2 = " << x2 << endl;
            break;
        case 5:
            cout << "Raices complejas conjugadas: ";
            cout << parteReal << " + " << parteImag << "i  y  " << parteReal << " - " << parteImag << "i" << endl;
            break;
        default:
            cout << "Error interno." << endl;
    }

    return 0;
}

void LeerCoeficientes (float &a, float &b, float &c) {
    cout << "Para la ecuacion cuadratica de la forma ax^2 + bx + c = 0\n";
    cout << "Ingrese el valor a: ";
    cin >> a;
    cout << "Ingrese el valor b: ";
    cin >> b;
    cout << "Ingrese el valor c: ";
    cin >> c;
}

void resolverEcuacion(float a, float b, float c, float &x1, float &x2, float &parteReal, float &parteImag, int &tipo) {

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                tipo = 1;
            } else {
                tipo = 0;
            }
            x1 = x2 = parteReal = parteImag = 0;
            return;
        } else {
            tipo = 2;
            x1 = x2 = -c / b;
            parteReal = parteImag = 0;
            return;
        }
    }

    float discriminante = b*b - 4*a*c;

    if (discriminante > 0) {
        tipo = 4;
        x1 = (-b + sqrt(discriminante)) / (2*a);
        x2 = (-b - sqrt(discriminante)) / (2*a);
        parteReal = parteImag = 0;
    }
    else if (discriminante == 0) {
        tipo = 3;
        x1 = x2 = -b / (2*a);
        parteReal = parteImag = 0;
    } else {
        tipo = 5;
        parteReal = -b / (2*a);
        parteImag = sqrt(-discriminante) / (2*a);
        x1 = x2 = 0;
    }
}
