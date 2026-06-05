#include <iostream>
#include <string>
using namespace std;

void BorraCaracterDeCadena(string &texto, char c);

int main() {
    string texto;
    char c;
    cout << "Texto: ";
    getline(cin, texto);
    cout << "Caracter a borrar: ";
    cin >> c;

    BorraCaracterDeCadena(texto, c);
    cout << "Resultado: " << texto << endl;

    return 0;
}

void BorraCaracterDeCadena(string &texto, char c) {
    for (int i = 0; i < texto.length(); ) {
        if (texto[i] == c) {
            texto.erase(i, 1);
        } else {
            i++;
        }
    }
}
