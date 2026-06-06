#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const int MAX_PROYECTOS = 10;
const int MAX_ANIOS = 10;


void mostrarMenu();
void agregarProyecto(string nombres[], double flujos[], int &numProyectos, int aniosAnalisis);
void mostrarProyectos(const string nombres[], int numProyectos);
void calcularPayback(const double flujosProyecto[], int aniosAnalisis, double tasa, int &anios, int &meses, int &dias);
void evaluarProyecto(const string nombres[], const double flujos[], int numProyectos, int aniosAnalisis, double tasa);

int main() {
    string nombres[MAX_PROYECTOS];
    double flujos[MAX_PROYECTOS * (MAX_ANIOS + 1)];
    int numProyectos = 0;
    int aniosAnalisis = 0;
    double tasa = 0.0;
    char opcion;

    do {
        mostrarMenu();
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();

        switch(opcion) {
            case '1': {
                cout << "Cuantos anos desea evaluar (max " << MAX_ANIOS << ")? ";
                cin >> aniosAnalisis;
                if (aniosAnalisis < 1) {
                    aniosAnalisis = 1;
                }
                if (aniosAnalisis > MAX_ANIOS) {
                    aniosAnalisis = MAX_ANIOS;
                }
                cout << "Plazo de evaluacion establecido: " << aniosAnalisis << " anos.\n";
                break;
            }
            case '2': {
                cout << "Tasa de descuento (ej: 0.07 para 7%): ";
                cin >> tasa;
                cout << "Tasa establecida: " << tasa * 100 << "%\n";
                break;
            }
            case '3': {
                if (aniosAnalisis == 0) {
                    cout << "ERROR: Primero debe establecer el plazo de evaluacion (opcion 1).\n";
                }
                else {
                    agregarProyecto(nombres, flujos, numProyectos, aniosAnalisis);
                }
                break;
            }
            case '4': {
                if (numProyectos == 0) {
                    cout << "ERROR: No hay proyectos agregados.\n";
                }
                else if (tasa == 0.0) {
                    cout << "ERROR: Primero debe establecer la tasa de descuento (opcion 2).\n";
                }
                else if (aniosAnalisis == 0) {
                    cout << "ERROR: Primero debe establecer el plazo de evaluacion (opcion 1).\n";
                }
                else {
                    evaluarProyecto(nombres, flujos, numProyectos, aniosAnalisis, tasa);
                }
                break;
            }
            case '5': {
                cout << "Saliendo del sistema...\n";
                break;
            }
            default: {
                cout << "Opcion no valida. Intente de nuevo.\n";
                break;
            }
        }
    } while (opcion != '5');

    return 0;
}

void mostrarMenu() {
    cout << "\n=== SISTEMA DE PLAZO DE RECUPERACION DESCONTADO ===\n";
    cout << "1. Establecer plazo de evaluacion (anos a analizar)\n";
    cout << "2. Establecer tasa de descuento (i)\n";
    cout << "3. Agregar proyecto (max " << MAX_PROYECTOS << ")\n";
    cout << "4. Evaluar un proyecto\n";
    cout << "5. Salir\n";
}

void agregarProyecto(string nombres[], double flujos[], int &numProyectos, int aniosAnalisis) {
    if (numProyectos >= MAX_PROYECTOS) {
        cout << "Limite de " << MAX_PROYECTOS << " proyectos alcanzado.\n";
        return;
    }

    cout << "Nombre del proyecto: ";
    getline(cin, nombres[numProyectos]);

    int base = numProyectos * (aniosAnalisis + 1);

    cout << "Inversion inicial (valor negativo): ";
    cin >> flujos[base + 0];

    for (int i = 1; i <= aniosAnalisis; i++) {
        cout << "Flujo neto del ano " << i << ": ";
        cin >> flujos[base + i];
    }
    cin.ignore();

    numProyectos++;
    cout << "Proyecto agregado exitosamente.\n";
}

void mostrarProyectos(const string nombres[], int numProyectos) {
    cout << "\n--- Proyectos registrados ---\n";
    for (int i = 0; i < numProyectos; i++) {
        cout << i+1 << ". " << nombres[i] << endl;
    }
}

void calcularPayback(const double flujosProyecto[], int aniosAnalisis, double tasa, int &anios, int &meses, int &dias) {
    double flujoDesc[MAX_ANIOS+1];
    double saldo[MAX_ANIOS+1];

    flujoDesc[0] = flujosProyecto[0];
    saldo[0] = flujoDesc[0];

    for (int n = 1; n <= aniosAnalisis; n++) {
        flujoDesc[n] = flujosProyecto[n] / pow(1 + tasa, n);
        saldo[n] = saldo[n-1] + flujoDesc[n];
    }

    int anoRecuperacion = -1;
    for (int n = 1; n <= aniosAnalisis; n++) {
        if (saldo[n] >= 0) {
            anoRecuperacion = n;
            break;
        }
    }

    if (anoRecuperacion == -1) {
        anios = -1;
        meses = 0;
        dias = 0;
        return;
    }

    if (saldo[anoRecuperacion] == 0.0) {
        anios = anoRecuperacion;
        meses = 0;
        dias = 0;
        return;
    }

    double saldoAnterior = saldo[anoRecuperacion - 1];
    double flujoDescEsteAno = flujoDesc[anoRecuperacion];
    double fraccion = -saldoAnterior / flujoDescEsteAno;
    double mesesTotales = fraccion * 12;
    anios = anoRecuperacion - 1;
    meses = (int)mesesTotales;          // cambio
    double restoDias = (mesesTotales - meses) * 30;
    dias = (int)(restoDias + 0.5);      // cambio
}

void evaluarProyecto(const string nombres[], const double flujos[], int numProyectos, int aniosAnalisis, double tasa) {
    mostrarProyectos(nombres, numProyectos);
    int idx;
    cout << "Seleccione el numero de proyecto a evaluar: ";
    cin >> idx;

    if (idx < 1 || idx > numProyectos) {
        cout << "Numero invalido.\n";
        return;
    }

    idx--; // convertir a indice 0

    int base = idx * (aniosAnalisis + 1);
    double proyectoFlujos[MAX_ANIOS+1];
    for (int i = 0; i <= aniosAnalisis; i++) {
        proyectoFlujos[i] = flujos[base + i];
    }

    cout << "\n=== Evaluacion del proyecto: " << nombres[idx] << " ===\n";
    cout << "Tasa de descuento: " << tasa * 100 << "%\n";
    cout << "Plazo evaluado: " << aniosAnalisis << " anos\n";
    cout << "\nAno\tFlujo Nominal\tFlujo Descontado\tSaldo Acumulado\n";

    double flujoDesc[MAX_ANIOS+1];
    double saldo[MAX_ANIOS+1];
    flujoDesc[0] = proyectoFlujos[0];
    saldo[0] = proyectoFlujos[0];
    cout << "0\t" << proyectoFlujos[0] << "\t\t" << flujoDesc[0] << "\t\t\t" << saldo[0] << endl;

    for (int n = 1; n <= aniosAnalisis; n++) {
        flujoDesc[n] = proyectoFlujos[n] / pow(1 + tasa, n);
        saldo[n] = saldo[n-1] + flujoDesc[n];
        cout << n << "\t" << proyectoFlujos[n] << "\t\t" << flujoDesc[n] << "\t\t\t" << saldo[n] << endl;
    }

    int anios, meses, dias;
    calcularPayback(proyectoFlujos, aniosAnalisis, tasa, anios, meses, dias);

    if (anios == -1) {
        cout << "\nEl proyecto NO se recupera en " << aniosAnalisis << " anos.\n";
    }
    else {
        cout << "\nPlazo de recuperacion descontado: " << anios << " anos, " << meses << " meses y " << dias << " dias.\n";
    }
}
