#include <iostream>
using namespace std;

void LeerVector(float v[], int n);
void RevertirEnSi(float v[], int n);
void MostrarVector(float v[], int n);

int main() {
    int n;
    cout << "Cuantos numeros desea ingresar?: ";
    cin >> n;
    float v[n];
    LeerVector(v, n);
    RevertirEnSi(v, n);
    MostrarVector(v, n);
    return 0;
}

void LeerVector(float v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> v[i];
    }
}

void RevertirEnSi(float v[], int n) {
    for (int i = 0; i < n / 2; i++) {
        float temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    }
}

void MostrarVector(float v[], int n) {
    cout << "\nVector revertido en el mismo sitio: ";
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}
