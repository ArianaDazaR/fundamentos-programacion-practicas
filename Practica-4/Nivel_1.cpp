#include <iostream>
using namespace std;

int main() {
    int N, i;
    int DMasDe5 = 0;
    double horas, total = 0, promedio;

    cout << "Ingrese la cantidad de dias a registrar: ";
    cin >> N;

    for (i = 1; i <= N; i++) {
        cout << "Horas de uso del dia " << i << ": ";
        cin >> horas;
        total = total + horas;
        if (horas > 5) {
            DMasDe5++;
        }
    }

    promedio = total / N;

    cout << "\nRESULTADOS\n";
    cout << "Total de horas: " << total << endl;
    cout << "Promedio diario: " << promedio << " horas" << endl;
    cout << "Dias con mas de 5 horas: " << DMasDe5 << endl;

    return 0;
}
