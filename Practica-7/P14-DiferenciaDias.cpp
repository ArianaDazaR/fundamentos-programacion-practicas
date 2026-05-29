#include <iostream>
using namespace std;

bool EsBisiesto(int anio);
int DiasDelMes(int mes, int anio);
int DiasDesdeInicio(int dia, int mes, int anio);
void LeerFecha(int &dia, int &mes, int &anio);
void CalcularDiasTranscurridos(int d1, int m1, int a1, int d2, int m2, int a2);

int main() {
    int d1, m1, a1, d2, m2, a2;
    cout << "Primera fecha:\n";
    LeerFecha(d1, m1, a1);
    cout << "Segunda fecha:\n";
    LeerFecha(d2, m2, a2);
    CalcularDiasTranscurridos(d1, m1, a1, d2, m2, a2);
    return 0;
}

bool EsBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int DiasDelMes(int mes, int anio) {
    int dias[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && EsBisiesto(anio)) {
        return 29;
    }
    return dias[mes];
}

int DiasDesdeInicio(int dia, int mes, int anio) {
    int total = dia;
    for (int i = 1; i < mes; i++) {
        total = total + DiasDelMes(i, anio);
    }
    for (int i = 1; i < anio; i++) {
        if (EsBisiesto(i)) {
            total = total + 366;
        } else {
            total = total + 365;
        }
    }
    return total;
}

void LeerFecha(int &dia, int &mes, int &anio) {
    char barra;
    cout << "Ingrese fecha (dd/mm/aaaa): ";
    cin >> dia >> barra >> mes >> barra >> anio;
}

void CalcularDiasTranscurridos(int d1, int m1, int a1, int d2, int m2, int a2) {
    int dias1 = DiasDesdeInicio(d1, m1, a1);
    int dias2 = DiasDesdeInicio(d2, m2, a2);
    int diferencia = dias2 - dias1;
    if (diferencia < 0) {
        diferencia = -diferencia;
    }
    cout << "Días transcurridos entre las dos fechas: " << diferencia << endl;
}
