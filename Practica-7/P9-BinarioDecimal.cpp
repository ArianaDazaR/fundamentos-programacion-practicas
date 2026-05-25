#include <iostream>
using namespace std;

int LeerBinario();
int BinarioDecimal(int binario);
void MostrarResultado(int binario, int decimal);

int main() {
    int binario = LeerBinario();
    int decimal = BinarioDecimal(binario);
    MostrarResultado(binario, decimal);
    return 0;
}

int LeerBinario() {
    int bin;
    cout << "Ingrese un número binario (solo dígitos 0 y 1): ";
    cin >> bin;
    return bin;
}

int BinarioDecimal(int binario) {
    int decimal = 0, potencia = 1;
    while (binario > 0) {
        int digito = binario % 10;
        if (digito != 0 && digito != 1) {
            cout << "El número contiene dígitos no binarios.\n";
            return 1;
        }
        decimal = decimal + digito * potencia;
        potencia = potencia * 2;
        binario = binario / 10;
    }
    return decimal;
}

void MostrarResultado(int binario, int decimal) {
    if (decimal != -1)
        cout << "Binario " << binario << " = Decimal " << decimal << endl;
}
