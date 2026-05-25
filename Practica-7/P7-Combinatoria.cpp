#include <iostream>
using namespace std;

void LeerDatos(int &n, int &r);
long long FAC(int num);
long long Combinatoria(int n, int r);
void MostrarResultado(int n, int r, long long C);

int main() {
    int n, r;
    char opcion;
    do {
        LeerDatos(n, r);
        long long C = Combinatoria(n, r);
        MostrarResultado(n, r, C);

        cout << "\n¿Desea calcular otro combinatorio? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    return 0;
}

void LeerDatos(int &n, int &r) {
    do {
        cout << "Ingrese n (entero no negativo): ";
        cin >> n;
        if (n < 0){
            cout << "n debe ser >= 0.\n";
        }
    } while (n < 0);

    do {
        cout << "Ingrese r (0 <= r <= " << n << "): ";
        cin >> r;
        if (r < 0 || r > n){
            cout << "r debe estar entre 0 y " << n << ".\n";
        }
    } while (r < 0 || r > n);
}

long long FAC(int num) {
    if (num == 0 || num == 1) return 1;
    long long fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

long long Combinatoria(int n, int r) {
    return FAC(n) / (FAC(r) * FAC(n - r));
}

void MostrarResultado(int n, int r, long long C) {
    cout << "\nCombinatoria (" << n << " sobre " << r << ") = " << C << endl;
}
