#include <iostream>
#include <string>
using namespace std;

bool EsPalindromo(string texto);

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    if (EsPalindromo(palabra) == true) {
        cout << "La palabra si es palindromo." << endl;
    } else {
        cout << "La palabra no es palindromo." << endl;
    }

    return 0;
}

bool EsPalindromo(string texto) {
    int n = texto.length();
    for (int i = 0; i < n / 2; i++) {
        if (texto[i] != texto[n - 1 - i]) {
            return false;
        }
    }
    return true;
}
