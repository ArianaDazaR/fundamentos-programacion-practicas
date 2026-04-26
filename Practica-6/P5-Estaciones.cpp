#include <iostream>
using namespace std;

void LeerFecha (int &DD, int &MM);
const char* DetEstacion (int DD, int MM);

int main () {
    int DD, MM;
    LeerFecha (DD, MM);
    const char* estacion = DetEstacion (DD, MM);
    cout << "En esta fecha es " << estacion << endl;
    return 0;
}

void LeerFecha (int &DD, int &MM) {
    char sep;
    cout << "Ingrese una fecha (DD/MM): ";
    cin >> DD >> sep >> MM;
    while (MM<1 || MM>12 || DD<1 || DD>31) {
        cout << "Fecha invalida. Intente de nuevo: ";
        cin >> DD >> sep >> MM;
    }
    while (sep != '/') {
        cout << "Formato invalido. Intente de nuevo: ";
        cin >> DD >> sep >> MM;
    }
}

const char* DetEstacion (int DD, int MM) {
    if ((MM==12 && DD>=21) || MM==1 || MM==2 || (MM==3 && DD<=20)) {
        return "Verano";
    }
    if ((MM==3 && DD>=21) || MM==4 || MM==5 || (MM==6 && DD<=20)) {
        return "Otono";
    }
    if ((MM==6 && DD>=21) || MM==7 || MM==8 || (MM==9 && DD<=20)) {
        return "Invierno";
    }
    return "Primavera";
}
