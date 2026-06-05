#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);

    int palabras = 1;
    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] == ' ')
            palabras++;
    }

    if (texto.length() == 0){
        palabras = 0;
    }else{
        if (texto[0] == ' '){
            palabras--;
        }
        if (texto[texto.length()-1] == ' '){
            palabras--;
        }
    }
    cout << "Número de palabras: " << palabras << endl;
    return 0;
}
