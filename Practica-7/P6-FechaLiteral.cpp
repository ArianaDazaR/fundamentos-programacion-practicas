#include <iostream>
#include <string>
using namespace std;

void LeerFecha(int &d, int &m, int &a, int defdias);
int DefMaxDias (int m, int a);
string DetM (int m);
void Literal (int d, string mes, int a);

int main() {
    int d, m, a;
    int defdias = DefMaxDias(m, a);
    LeerFecha(d, m, a, defdias);
    string mes = DetM (m);
    Literal (d, mes, a);
    return 0;
}

int DefMaxDias (int m, int a) {
    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
            break;
        case 2:
            if (a%4==0&&a%100!=0) {
                return 29;
            } else {
                return 28;
            }
            break;
        case 4: case 6: case 9: case 11:
            return 30;
            break;
        default:
            return 0;
    }

}

void LeerFecha(int &d, int &m, int &a, int defdias) {
    char sep;
    bool valido = false;

    cout << "Ingrese la fecha (d/m/a): ";

    do {
        cin >> d >> sep >> m >> sep >> a;

        if (sep != '/') {
            cout << "ERROR. Formato invalido, use '/' e intente de nuevo: ";
            continue;
        }

        if (m < 1 || m > 12) {
            cout << "ERROR. Mes invalido. Intente de nuevo: ";
            continue;
        }

        defdias = DefMaxDias(m, a);
        if (d > defdias || d < 0) {
            cout << "ERROR. Dias invalidos. Intente de nuevo: ";
            continue;
        }

        valido = true;

    } while (!valido);
}

string DetM(int m) {
    switch (m) {
        case 1:
            return "Enero";
            break;
        case 2:
            return "Febrero";
            break;
        case 3:
            return "Marzo";
            break;
        case 4:
            return "Abril";
            break;
        case 5:
            return "Mayo";
            break;
        case 6:
            return "Junio";
            break;
        case 7:
            return "Julio";
            break;
        case 8:
            return "Agosto";
            break;
        case 9:
            return "Septiembre";
            break;
        case 10:
            return "Octubre";
            break;
        case 11:
            return "Noviembre";
            break;
        case 12:
            return "Diciembre";
            break;
        default:
            return "Mes invalido";
    }
}

void Literal (int d, string mes, int a) {
    if (a < 10) {
        cout << "Fecha literal: " << d << " de " << mes << " del 190" << a << endl;
    } else {
        cout << "Fecha literal: " << d << " de " << mes << " del 19" << a << endl;
    }
}
