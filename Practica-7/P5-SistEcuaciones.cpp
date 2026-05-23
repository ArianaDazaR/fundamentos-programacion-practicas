#include <iostream>
#include <string>
using namespace std;

void LeerCoeficientes(double &A, double &B, double &C, double &D, double &E, double &F);
bool Sistema(double A, double B, double C, double D, double E, double F, double &X, double &Y);
void MostrarSolucion(double X, double Y, bool solucionUnica);

int main() {
    double A, B, C, D, E, F, X, Y;
    char opcion;

    do {
        LeerCoeficientes(A, B, C, D, E, F);
        bool solucionUnica = Sistema(A, B, C, D, E, F, X, Y);
        MostrarSolucion(X, Y, solucionUnica);

        cout << "\nDesea resolver otro sistema? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    return 0;
}

void LeerCoeficientes(double &A, double &B, double &C, double &D, double &E, double &F) {
    cout << "Ingrese los coeficientes del sistema:\n";
    cout << "A: ";
    cin >> A;
    cout << "B: ";
    cin >> B;
    cout << "C: ";
    cin >> C;
    cout << "D: ";
    cin >> D;
    cout << "E: ";
    cin >> E;
    cout << "F: ";
    cin >> F;
}

bool Sistema(double A, double B, double C, double D, double E, double F, double &X, double &Y) {
    double determinante = A * E - B * D;

    if (determinante == 0) {
        return false;
    }

    X = (B * F - C * E) / determinante;
    Y = (C * D - A * F) / determinante;
    return true;
}

void MostrarSolucion(double X, double Y, bool solucionUnica) {
    if (solucionUnica) {
        cout << "\nSolución del sistema:" << endl;
        cout << "X = " << X << endl;
        cout << "Y = " << Y << endl;
    } else {
        cout << "\nEl sistema no tiene solución única (determinante=0)." << endl;
        cout << "Puede que no tenga solución o tenga infinitas soluciones." << endl;
    }
}
