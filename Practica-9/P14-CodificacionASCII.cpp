#include <iostream>
#include <string>
using namespace std;

char codificarLetra(char c, int despl);
string Codifica(string texto, int despl);

int main() {
    string texto;
    int despl;
    cout << "Texto: ";
    getline(cin, texto);
    cout << "Desplazamiento: ";
    cin >> despl;

    string resultado = Codifica(texto, despl);
    cout << "Codificado: " << resultado << endl;

    return 0;
}

char codificarLetra(char c, int despl) {
    if (c >= 'A' && c <= 'Z') {
        int nuevaPos = (c - 'A' + despl) % 26;
        return 'A' + nuevaPos;
    }
    if (c >= 'a' && c <= 'z') {
        int nuevaPos = (c - 'a' + despl) % 26;
        return 'a' + nuevaPos;
    }
    return c;
}

string Codifica(string texto, int despl) {
    for (int i = 0; i < texto.length(); i++) {
        texto[i] = codificarLetra(texto[i], despl);
    }
    return texto;
}
