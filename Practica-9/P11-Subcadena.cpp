#include <iostream>
#include <string>
using namespace std;

string SubCadena(string texto, int pos, int longitud);

int main() {
    string texto;
    int pos, n;
    cout << "Texto: ";
    cin >> texto;
    cout << "Posición inicial: ";
    cin >> pos;
    cout << "Longitud: ";
    cin >> n;

    string resultado = SubCadena(texto, pos, n);
    cout << "Subcadena: " << resultado << endl;

    return 0;
}

string SubCadena(string texto, int pos, int longitud) {
    if (pos >= texto.length()) {
        return "";
    }
    if (pos + longitud > texto.length()) {
        longitud = texto.length() - pos;
    }
    return texto.substr(pos, longitud);
}
