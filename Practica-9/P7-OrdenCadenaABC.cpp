#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    int n = palabra.length();
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (palabra[j] > palabra[j+1]) {
                char temp = palabra[j];
                palabra[j] = palabra[j+1];
                palabra[j+1] = temp;
            }
        }
    }

    cout << "Ordenada: " << palabra << endl;
    return 0;
}
