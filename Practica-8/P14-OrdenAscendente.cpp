#include <iostream>
using namespace std;

void LeerVector(float v[], int n);
void OrdenarAscendente(float v[], int n);
void MostrarVector(float v[], int n);

int main() {
    int n;
    cout << "Cuantos numeros desea ingresar?: ";
    cin >> n;
    float v[n];
    LeerVector(v, n);
    OrdenarAscendente(v, n);
    MostrarVector(v, n);
    return 0;
}

void LeerVector(float v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> v[i];
    }
}

void OrdenarAscendente(float v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j+1]) {
                float temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

void MostrarVector(float v[], int n) {
    cout << "\nVector ordenado ascendentemente: ";
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}
