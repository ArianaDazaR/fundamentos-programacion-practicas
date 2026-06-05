#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Cuantas palabras? ";
    cin >> n;
    cin.ignore();

    string frase = "";
    for (int i = 0; i < n; i++) {
        string palabra;
        cout << "Palabra " << i+1 << ": ";
        getline(cin, palabra);

        if (i > 0) {
            frase = frase + " ";
        }
        frase = frase + palabra;
    }

    cout << "Frase: " << frase << endl;
    return 0;
}
