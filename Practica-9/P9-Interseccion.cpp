#include <iostream>
#include <string>
using namespace std;

bool existeEn(string cadena, char c);
string interseccion(string A, string B);

int main() {
    string A, B;
    cout << "Conjunto A (sin espacios): ";
    cin >> A;
    cout << "Conjunto B (sin espacios): ";
    cin >> B;

    string C = interseccion(A, B);
    cout << "Intersección: {" << C << "}" << endl;

    return 0;
}

bool existeEn(string cadena, char c) {
    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] == c)
            return true;
    }
    return false;
}

string interseccion(string A, string B) {
    string resultado = "";
    for (int i = 0; i < A.length(); i++) {
        if (existeEn(B, A[i])) {
            if (!existeEn(resultado, A[i])) {
                resultado = resultado + A[i];
            }
        }
    }
    return resultado;
}
