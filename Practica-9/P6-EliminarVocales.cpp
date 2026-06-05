#include <iostream>
#include <string>
using namespace std;

bool esVocal(char c);
void eliminarVocalesInPlace(string &texto);

int main() {
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);
    eliminarVocalesInPlace(texto);
    cout << "Sin vocales: " << texto << endl;
    return 0;
}

bool esVocal(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    }
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return true;
    }
    return false;
}

void eliminarVocalesInPlace(string &texto) {
    for (int i = 0; i < texto.length(); i) {
        if (esVocal(texto[i]))
            texto.erase(i, 1);
        else
            i++;
    }
}
