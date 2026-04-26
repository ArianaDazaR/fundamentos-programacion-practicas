#include <iostream>
using namespace std;

void LeerHora1 (int &h1, int &m1, int &s1);
void LeerHora2 (int h1, int &h2, int &m2, int &s2);
void Diferencia (int h1, int m1, int s1, int h2, int m2, int s2, int &difh, int &difm, int &difs);

int main () {
    int h1, m1, s1, h2, m2, s2;
    LeerHora1 (h1, m1, s1);
    LeerHora2 (h1, h2, m2, s2);
    int difh, difm, difs;
    Diferencia (h1, m1, s1, h2, m2, s2, difh, difm, difs);
    cout << "La diferencia entre ambos horarios es: " << difh << ":" << difm << ":" << difs << endl;
    return 0;
}

void LeerHora1 (int &h1, int &m1, int &s1) {
    char dospuntos;
    cout << "Ingrese el primer horario: ";
    cin >> h1 >> dospuntos >> m1 >> dospuntos >> s1;
    while (dospuntos != ':') {
        cout << "Formato incorrecto. Ingrese nuevamente el primer horario: ";
        cin >> h1 >> dospuntos >> m1 >> dospuntos >> s1;
    }
    while (h1>24 || h1 <0 || m1>=60 || m1<0 || s1>=60 || s1<0) {
        cout << "Revise el primer horario ingresado e intente de nuevo: ";
        cin >> h1 >> dospuntos >> m1 >> dospuntos >> s1;
    }
}

void LeerHora2 (int h1, int &h2, int &m2, int &s2) {
    char dospuntos;
    cout << "Ingrese el segundo horario: ";
    cin >> h2 >> dospuntos >> m2 >> dospuntos >> s2;
    while (dospuntos != ':') {
        cout << "Formato incorrecto. Ingrese nuevamente el segundo horario: ";
        cin >> h2 >> dospuntos >> m2 >> dospuntos >> s2;
    }
    while (h2>24 || h2<h1 || m2>=60 || m2<0 || s2>=60 || s2<0) {
        cout << "Revise el segundo horario ingresado e intente de nuevo: ";
        cin >> h2 >> dospuntos >> m2 >> dospuntos >> s2;
    }
}

void Diferencia(int h1, int m1, int s1, int h2, int m2, int s2, int &difh, int &difm, int &difs) {
    int prestamo = 0;
    // Restar segundos
    if (s2 >= s1) {
        difs = s2 - s1;
    } else {
        difs = s2 + 60 - s1;
        prestamo = 1;
    }
    int m2_aux = m2 - prestamo;
    if (m2_aux >= m1) {
        difm = m2_aux - m1;
        prestamo = 0;
    } else {
        difm = m2_aux + 60 - m1;
        prestamo = 1;
    }
    difh = h2 - prestamo - h1;
}
