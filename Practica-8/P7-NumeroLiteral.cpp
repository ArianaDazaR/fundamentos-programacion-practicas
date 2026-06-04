#include <iostream>
#include <string>
using namespace std;

void leernumero (int &n);
string Literales (int n);
void mostrarliteral (string literal);

int main () {
    int n;
    leernumero(n);
    string literal = Literales (n);
    mostrarliteral (literal);
    return 0;
}

void leernumero (int &n) {
    cout << "Ingrese un numero: ";
    cin >> n;
    while (n<0) {
        cout << "El numero debe ser positivo. Intente de nuevo: ";
        cin >> n;
    }
}

string Literales (int n) {
    string u[]= {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve", "diez", "once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve"};
    string d[]= {"", "", "veinti", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};

    if (n<20) {
        return u[n];
    }

    int dec=n/10;
    int uni=n%10;
    if (dec==2&&uni>0) {
        return d[dec]+u[uni];
    }
    if (uni==0) {
        return d[dec];
    }
    return d[dec] + " y " + u[uni];
}

void mostrarliteral (string literal) {
    cout << "Numero Literal: " << literal << endl;
}
