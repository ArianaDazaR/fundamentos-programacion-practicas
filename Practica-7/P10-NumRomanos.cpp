#include <iostream>
#include <string>
using namespace std;

void LeerNumero(int &N);
void ConvertirARomano(int N);

int main() {
    int N;
    LeerNumero(N);
    ConvertirARomano(N);
    return 0;
}

void LeerNumero(int &N) {
    do {
        cout << "Ingrese un numero entre 1 y 3999: ";
        cin >> N;
    } while (N < 1 || N > 3999);
}

void ConvertirARomano(int N) {
    string romano = "";
    int valores[]   = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string letras[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++) {
        while (N >= valores[i]) {
            romano = romano + letras[i];
            N = N - valores[i];
        }
    }
    cout << "Equivalente en numeros romanos: " << romano << endl;
}
