#include <iostream>
#include <cmath>
using namespace std;

void LeerVector(float numeros[], int n);
float MayorDiferencia(float numeros[], int n);

int main() {
    int n;
    cout << "Cuantos numeros desea ingresar?: ";
    cin >> n;
    while (n < 2) {
        cout << "Se necesitan al menos 2 numeros. Intente de nuevo: ";
        cin >> n;
    }
    float numeros[n];
    LeerVector(numeros, n);
    float dif = MayorDiferencia(numeros, n);
    cout << "\nMayor diferencia entre consecutivos: " << dif << endl;
    return 0;
}

void LeerVector(float numeros[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
}

float MayorDiferencia(float numeros[], int n) {
    float maxDif = fabs(numeros[1] - numeros[0]);
    for (int i = 1; i < n - 1; i++) {
        float dif = fabs(numeros[i+1] - numeros[i]);
        if (dif > maxDif)
            maxDif = dif;
    }
    return maxDif;
}
