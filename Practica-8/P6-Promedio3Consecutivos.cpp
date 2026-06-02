#include <iostream>
using namespace std;

void LeerVector(float numeros[], int n);
void PromediosConsecutivos(float numeros[], int n);

int main() {
    int n;
    cout << "Cuantos numeros desea ingresar?: ";
    cin >> n;
    if (n < 3) {
        cout << "Se necesitan al menos 3 numeros." << endl;
        return 1;
    }
    float numeros[n];
    LeerVector(numeros, n);
    PromediosConsecutivos(numeros, n);
    return 0;
}

void LeerVector(float numeros[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
}

void PromediosConsecutivos(float numeros[], int n) {
    cout << "\nPromedios de cada 3 valores consecutivos:" << endl;
    for (int i = 0; i <= n - 3; i++) {
        float suma = numeros[i] + numeros[i+1] + numeros[i+2];
        float prom = suma / 3;
        cout << "P" << i+1 << " = " << prom << endl;
    }
}
