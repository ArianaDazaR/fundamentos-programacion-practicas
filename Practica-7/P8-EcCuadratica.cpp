#include <iostream>
#include <math.h>
using namespace std;

void LeerCoeficientes(double &a, double &b, double &c);
void ResolverCuadratica(double a, double b, double c);

int main() {
    double a, b, c;
    char opcion;
    do {
        LeerCoeficientes(a, b, c);
        ResolverCuadratica(a, b, c);
        cout << "\nResolver otra ecuacion? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');
    return 0;
}

void LeerCoeficientes(double &a, double &b, double &c) {
    cout << "Ingrese los coeficientes (a, b, c) de ax^2 + bx + c = 0:\n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
}

void ResolverCuadratica(double a, double b, double c) {
    if (a == 0) {
        cout << "No es una ecuacion cuadratica (a = 0).\n";
        return;
    }

    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Dos raices reales distintas: x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if (discriminante == 0) {
        double x = -b / (2 * a);
        cout << "Una raiz doble (real): x = " << x << endl;
    } else {
        double parteReal = -b / (2 * a);
        double parteImag = sqrt(-discriminante) / (2 * a);
        cout << "Dos raices complejas conjugadas:\n";
        cout << "x1 = " << parteReal << " + " << parteImag << "i\n";
        cout << "x2 = " << parteReal << " - " << parteImag << "i\n";
    }
}
