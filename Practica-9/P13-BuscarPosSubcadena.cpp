#include <iostream>
#include <string>
using namespace std;

int BuscarSubCadena(string sub, string cadena);

int main() {
    string sub, cad;
    cout << "Subcadena a buscar: ";
    cin >> sub;
    cout << "Cadena donde buscar: ";
    cin >> cad;

    int pos = BuscarSubCadena(sub, cad);
    cout << "Posicion: " << pos << endl;

    return 0;
}

int BuscarSubCadena(string sub, string cadena) {
    int lenSub = sub.length();
    int lenCad = cadena.length();

    if (lenSub == 0) {
        return 0;
    }
    if (lenSub > lenCad) {
        return -1;
    }

    for (int i = 0; i <= lenCad - lenSub; i++) {
        bool encontrado = true;
        for (int j = 0; j < lenSub; j++) {
            if (cadena[i + j] != sub[j]) {
                encontrado = false;
                break;
            }
        }
        if (encontrado == true) {
            return i;
        }
    }
    return -1;
}
