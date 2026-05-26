#include <iostream>
#include <string>
using namespace std;

string Unidades(int n);
string Centenas(int n);
string NumeroALiteral(int entero, int centavos);
void LeerMonto(int &entero, int &centavos);
void MostrarLiteral(int entero, int centavos, string literal);

int main() {
    int bolivianos, centavos;
    LeerMonto(bolivianos, centavos);
    string literal = NumeroALiteral(bolivianos, centavos);
    MostrarLiteral(bolivianos, centavos, literal);
    return 0;
}

void LeerMonto(int &entero, int &centavos) {
    cout << "Ingrese la cantidad de bolivianos (parte entera): ";
    cin >> entero;
    cout << "Ingrese los centavos (0-99): ";
    cin >> centavos;
    while (centavos < 0 || centavos > 99) {
        cout << "Centavos inválidos. Ingrese nuevamente (0-99): ";
        cin >> centavos;
    }
}

string Unidades(int n) {
    string u[] = {"", "un", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve", "diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
    string d[] = {"", "", "veinti", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};

    if (n < 20){
        return u[n];
    }

    int dec = n / 10, uni = n % 10;
    if (dec == 2 && uni > 0){
        return d[dec] + u[uni];
    }
    if (uni == 0) {
        return d[dec];
    }
    return d[dec] + " y " + u[uni];
}

string Centenas(int n) {
    if (n == 100) {
        return "cien";
    }
    string c[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
    int cen = n / 100, resto = n % 100;
    if (cen == 0) {
        return Unidades(resto);
    }
    if (resto == 0) {
        return c[cen];
    }
    return c[cen] + " " + Unidades(resto);
}

string NumeroALiteral(int entero, int centavos) {
    string literal = "";

    if (entero == 0) {
        literal = "cero";
    } else {
        int miles = entero / 1000;
        int resto = entero % 1000;

        if (miles > 0) {
            if (miles == 1) {
                literal = "mil";
            } else {
                literal = Unidades(miles) + " mil";
            }
            if (resto > 0) {
                literal = literal + " ";
            }
        }
        if (resto > 0) {
            literal = literal + Centenas(resto);
        }
    }

    string fraccion;
    if (centavos < 10) {
        fraccion = "0" + to_string(centavos);
    } else {
        fraccion = to_string(centavos);
    }

    fraccion = fraccion + "/100";

    return literal + " " + fraccion + " bolivianos";
}

void MostrarLiteral(int entero, int centavos, string literal) {
    cout << "Bs " << entero << "." << centavos << "  ->  " << literal << endl;
}
