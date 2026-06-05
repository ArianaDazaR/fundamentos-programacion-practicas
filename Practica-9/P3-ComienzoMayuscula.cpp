#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);

    bool inicio = true;
    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] == ' ') {
            inicio = true;
        } else if (inicio) {
            texto[i] = toupper(texto[i]);
            inicio = false;
        }
    }

    cout << "Texto modificado: " << texto << endl;
    return 0;
}
