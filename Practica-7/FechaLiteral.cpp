#include <iostream>
using namespace std;

void LeerFecha(int &d, int &m, int &a);
void Literal (int d, int m, int a);

int main() {
    int d, m, a;
    LeerFecha(d, m, a);
    Literal (d, m, a);
    return 0;
}

void LeerFecha(int &d, int &m, int &a) {
    cout << "Ingrese el dia: ";
    cin >> d;
    cout << "Ingrese el mes: ";
    cin >> m;
    cout << "Ingrese el año (dos últimos dígitos): ";
    cin >> a;
}

void Literal (int d, int m, int a) {
    string nombreMes;
    switch (m) {
        case 1:
            nombreMes = "Enero";
            break;
        case 2:
            nombreMes = "Febrero";
            break;
        case 3:
            nombreMes = "Marzo";
            break;
        case 4:
            nombreMes = "Abril";
            break;
        case 5:
            nombreMes = "Mayo";
            break;
        case 6:
            nombreMes = "Junio";
            break;
        case 7:
            nombreMes = "Julio";
            break;
        case 8:
            nombreMes = "Agosto";
            break;
        case 9:
            nombreMes = "Septiembre";
            break;
        case 10:
            nombreMes = "Octubre";
            break;
        case 11:
            nombreMes = "Noviembre";
            break;
        case 12:
            nombreMes = "Diciembre";
            break;
        default:
            nombreMes = "Mes invalido";
    }

    int aCompleto = (a < 100) ? 1900 + a : a;

    cout << "\nFecha literal: " << d << " de " << nombreMes << " de " << aCompleto << endl;
}
