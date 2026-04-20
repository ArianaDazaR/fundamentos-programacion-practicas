#include <iostream>
using namespace std;

int main () {

    int numero, digito;
    int Supera = 0;
    int ContadorApp = 0;
    float promedio;
    float suma = 0;

    cout << "Ingrese el tiempo dedicado a las distintas apps (digito = hr./app): ";
    cin >> numero;

    while (numero > 0) {
        digito = numero % 10;
        suma = suma + digito;
        ContadorApp++;
        if (digito > 5) {
            Supera++;
        }
        numero = numero / 10;
    }

    promedio = suma / ContadorApp;

    cout << "\nResultados del Analsis\n";
    cout << "Total horas de uso de apps: " << suma << "\n";
    cout << "Cantidad de apps que superan 5 hrs. de uso: " << Supera << "\n";
    cout << "Promedio de tiempo de uso de apps: " << promedio << endl;

return 0;
}
