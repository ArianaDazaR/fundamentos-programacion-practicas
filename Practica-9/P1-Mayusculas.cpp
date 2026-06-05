#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);

    for (int i = 0; i < texto.length(); i++) {
        texto[i] = toupper(texto[i]);
    }

    cout << "Texto en mayúsculas: " << texto << endl;
    return 0;
}
