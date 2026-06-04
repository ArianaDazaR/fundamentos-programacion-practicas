#include <iostream>
using namespace std;

void LeerVector(float v[], int tam);
void Concatenar(float a[], int n, float b[], int m, float c[]);
void MostrarVector(float v[], int tam);

int main() {
    int n, m;
    cout << "Tamaño del primer vector: ";
    cin >> n;
    float a[n];
    LeerVector(a, n);

    cout << "Tamano del segundo vector: ";
    cin >> m;
    float b[m];
    LeerVector(b, m);

    float c[n + m];
    Concatenar(a, n, b, m, c);
    MostrarVector(c, n + m);
    return 0;
}

void LeerVector(float v[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> v[i];
    }
}

void Concatenar(float a[], int n, float b[], int m, float c[]) {
    for (int i = 0; i < n; i++) {
        c[i] = a[i];
    }
    for (int i = 0; i < m; i++){
        c[n + i] = b[i];
    }
}

void MostrarVector(float v[], int tam) {
    cout << "\nVector concatenado: ";
    for (int i = 0; i < tam; i++)
        cout << v[i] << " ";
}
