#include <iostream>
#include <string>
using namespace std;

bool esVocal(char c);
void contarVocalesJuntas(string texto);

int main() {
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);
    contarVocalesJuntas(texto);
    return 0;
}

bool esVocal(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return true;
    }
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        return true;
    }
    return false;
}

void contarVocalesJuntas(string texto) {
    int contador = 0;
    string pares = "";

    for (int i = 0; i < texto.length() - 1; i++) {
    if (esVocal(texto[i]) && esVocal(texto[i + 1])) {
        contador++;
        string par = texto.substr(i, 2);

        if (pares != "") {
            pares = pares + ", ";
        }

        pares = pares + par;
    }
}

    if (contador > 0)
        cout << contador << " vocales juntas: " << pares << endl;
    else
        cout << "No hay vocales juntas." << endl;
}
