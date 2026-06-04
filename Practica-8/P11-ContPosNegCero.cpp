#include <iostream>
using namespace std;

void LeerVector(float v[], int n);
void Contar(float v[], int n, int &neg, int &pos, int &cer);

int main() {
    int n;
    cout << "Cuantos numeros desea ingresar?: ";
    cin >> n;
    float v[n];
    LeerVector(v, n);
    int neg = 0, pos = 0, cer = 0;
    Contar(v, n, neg, pos, cer);
    cout << "\nNegativos: " << neg << endl;
    cout << "Positivos: " << pos << endl;
    cout << "Ceros: " << cer << endl;
    return 0;
}

void LeerVector(float v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> v[i];
    }
}

void Contar(float v[], int n, int &neg, int &pos, int &cer) {
    neg = pos = cer = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < 0) {
            neg++;
        } else {
            if (v[i] > 0) {
                pos++;
            } else {
                cer++;
            }
        }
    }
}
