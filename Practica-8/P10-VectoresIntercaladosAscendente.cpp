#include <iostream>
using namespace std;

void LeerVector(float v[], int tam);
void Intercalar(float a[], int n, float b[], int m, float c[]);
void MostrarVector(float v[], int tam);

int main() {
    int n, m;
    cout << "Tamano del primer vector (ordenado): ";
    cin >> n;
    float a[n];
    LeerVector(a, n);

    cout << "Tamano del segundo vector (ordenado): ";
    cin >> m;
    float b[m];
    LeerVector(b, m);

    float c[n + m];
    Intercalar(a, n, b, m, c);
    MostrarVector(c, n + m);
    return 0;
}

void LeerVector(float v[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> v[i];
    }
}

void Intercalar(float a[], int n, float b[], int m, float c[]) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        }else{
            c[k++] = b[j++];
        }
    }
    while (i < n) {
        c[k++] = a[i++];
    }
    while (j < m) {
        c[k++] = b[j++];
    }
}

void MostrarVector(float v[], int tam) {
    cout << "\nVector intercalado y ordenado: ";
    for (int i = 0; i < tam; i++)
        cout << v[i] << " ";
    cout << endl;
}
