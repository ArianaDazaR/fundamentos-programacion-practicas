#include <iostream>
using namespace std;

void LeerVector(float v[], int n);
int EliminarDuplicados(float v[], int n, float resultado[]);
void MostrarVector(float v[], int tam);

int main() {
    int n;
    cout << "Cuantos numeros desea ingresar?: ";
    cin >> n;
    float original[n];
    LeerVector(original, n);
    float sinDuplicados[n];
    int nuevoTam = EliminarDuplicados(original, n, sinDuplicados);
    MostrarVector(sinDuplicados, nuevoTam);
    return 0;
}

void LeerVector(float v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> v[i];
    }
}

int EliminarDuplicados(float v[], int n, float resultado[]) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        bool duplicado = false;
        for (int j = 0; j < k; j++) {
            if (v[i] == resultado[j]) {
                duplicado = true;
                break;
            }
        }
        if (!duplicado)
            resultado[k++] = v[i];
    }
    return k;
}

void MostrarVector(float v[], int tam) {
    cout << "\nVector sin duplicados: ";
    for (int i = 0; i < tam; i++) {
        cout << v[i] << " ";
    }
}
