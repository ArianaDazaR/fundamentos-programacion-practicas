#include <iostream>
using namespace std;

void LeerVector(int numeros[], int n);
bool EsCapicua(int numeros[], int n);
void MostrarResultado(bool capicua);

int main() {
    int n;
    cout << "Cuantos numeros desea ingresar?: ";
    cin >> n;
    int numeros[n];
    LeerVector(numeros, n);
    bool capicua = EsCapicua(numeros, n);
    MostrarResultado(capicua);
    return 0;
}

void LeerVector(int numeros[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
}

bool EsCapicua(int numeros[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (numeros[i] != numeros[n - 1 - i])
            return false;
    }
    return true;
}

void MostrarResultado(bool capicua) {
    if (capicua)
        cout << "\nEl vector es capicua." << endl;
    else
        cout << "\nEl vector NO es capicua." << endl;
}
