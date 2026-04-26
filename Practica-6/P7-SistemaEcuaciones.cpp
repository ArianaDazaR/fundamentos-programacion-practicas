#include <iostream>
using namespace std;

void LeerCoeficientes (int &A, int &B, int &C, int &D, int &E, int &F);
void Resolvedor (int A, int B, int C, int D, int E, int F, int &det, int &detx, int &dety,int &x, int &y, int &tipo);

int main () {
    cout << "Sistema de Ecuacion por Regla de Cramer (2x2)\nAx + By = C\nDx + Ey = F\n";
    int A, B, C, D, E, F;
    LeerCoeficientes (A, B, C, D, E, F);
    int det, detx, dety, x, y, tipo;
    Resolvedor (A, B, C, D, E, F, det, detx, dety, x, y, tipo);
    switch (tipo) {
        case 1:
        cout << "Sistema indeterminado: Soluciones infinitas (0/0)" << endl;
        break;
        case 2:
        cout << "Sistema inconsistente: Sin solucion (x,y/0)" << endl;
        break;
        case 3:
        cout << "Resultados:\n" << "Valor x: " << x << "\nValor y: " << y << endl;
        break;
    }
}

void LeerCoeficientes (int &A, int &B, int &C, int &D, int &E, int &F) {
    cout << "Ingrese los coeficientes:\n";
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

void Resolvedor (int A, int B, int C, int D, int E, int F, int &det, int &detx, int &dety, int &x, int &y, int &tipo){
    det=A*E-B*D;
    detx=B*F-E*C;
    dety=A*F-C*D;
    const double tolneg=-0.0000000009, tolpos=0.0000000009;
    if (tolneg<det && det<tolpos){
        if (tolneg<detx && detx<tolpos && tolneg<dety && dety<tolpos) {
            tipo = 1;
        } else {
            tipo = 2;
        }
    } else {
        tipo = 3;
        x=detx/det;
        y=dety/det;
    }
}
