#include <iostream>
using namespace std;

int main() {
    int dias, d;
    double redes, juegos, totalDia, promedioDiario;
    double totalgral = 0;
    double mayorUso = 0;
    int diaMayor = 0;
    int diasExcesivos = 0;

    cout << "Cuantos dias desea analizar? ";
    cin >> dias;

    for (d = 1; d <= dias; d++) {
        cout << "\nDia " << d << "\n";

        cout << "Horas en redes sociales: ";
        cin >> redes;
        while (redes < 0) {
            cout << "Las horas no pueden ser negativas. Ingrese nuevamente: ";
            cin >> redes;
        }

        cout << "Horas en videojuegos: ";
        cin >> juegos;
        while (juegos < 0) {
            cout << "Las horas no pueden ser negativas. Ingrese nuevamente: ";
            cin >> juegos;
        }

        totalDia = redes + juegos;
        totalgral = totalgral + totalDia;

        if (totalDia > 6) {
            diasExcesivos++;
            cout << "Uso excesivo (>6h) en el dia " << d << "\n";
        }

        if (totalDia > mayorUso) {
            mayorUso = totalDia;
            diaMayor = d;
        }
    }

    promedioDiario = totalgral / dias;

    cout << "\nINFORME FINAL\n";
    cout << "Promedio diario de uso: " << promedioDiario << " horas\n";
    cout << "Dias con uso excesivo (>6h): " << diasExcesivos << "\n";
    cout << "Dia con mayor uso: Dia " << diaMayor << " (" << mayorUso << " horas)\n";

    return 0;
}
