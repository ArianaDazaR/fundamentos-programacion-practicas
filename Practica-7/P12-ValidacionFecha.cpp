#include <iostream>
using namespace std;

bool EsBisiesto(int a);
bool FechaValida(int d, int m, int a);
void LeerFecha(int &d, int &m, int &a);
void MostrarValidacion(int d, int m, int a, bool valida);

int main() {
    int d, m, a;
    LeerFecha(d, m, a);
    bool valida = FechaValida(d, m, a);
    MostrarValidacion(d, m, a, valida);
    return 0;
}

bool EsBisiesto(int a) {
    return (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0);
}

bool FechaValida(int d, int m, int a) {
    if (m < 1 || m > 12){
        return false;
    }
    if (d < 1){
        return false;
    }
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (EsBisiesto(a)){
        diasPorMes[2] = 29;
    }
    return d <= diasPorMes[m];
}

void LeerFecha(int &d, int &m, int &a) {
    cout << "Ingrese dia: "; cin >> d;
    cout << "Ingrese mes: "; cin >> m;
    cout << "Ingrese año: "; cin >> a;
}

void MostrarValidacion(int d, int m, int a, bool valida) {
    cout << d << "/" << m << "/" << a;
    if (valida) cout << " es una fecha valida.\n";
    else cout << " NO es una fecha valida.\n";
}
