#include <iostream>
#include <iomanip>
using namespace std;

void LeerNotas (int &p1, int &p2, int &prac, int &f, int &faltas);
void PonderadoFinal (int p1, int p2, int prac, int f, float &NF);
void CondicionAprobado (float NF);

int main () {
    int p1, p2, prac, f, faltas;
    float NF;
    int Estudiante = 0;
    char continuar;
    cout << "Sistema de Notas\n";
    do{
        Estudiante ++;
        cout << "\nPerfil del Estudiante " << Estudiante << endl;
        LeerNotas (p1, p2, prac, f, faltas);
        PonderadoFinal (p1, p2, prac, f, NF);
        cout << fixed << setprecision(0);
        cout << "\nESTUDIANTE\tFALTAS\t\tPARCIAL 1\tPARCIAL 2\tNOTA PRACTICA\tEXAM FINAL\tNOTA FINAL" << endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << Estudiante << "\t\t" << faltas << "\t\t" << p1 << "\t\t" << p2 << "\t\t" << prac << "\t\t" << f << "\t\t" << NF << endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        CondicionAprobado (NF);
        cout << "\nSiguiente estudiante? (s/n): ";
        cin >> continuar;
    } while (continuar == 's');
    cout << "\nRegistro terminado" << endl;
    return 0;
}

void LeerNotas (int &p1, int &p2, int &prac, int &f, int &faltas) {
    cout << "Faltas en el semestre: ";
    cin >> faltas;
    while (faltas < 0 || faltas > 48) {
        cout << "Verifique el numero ingresado. Intente de nuevo: ";
        cin >> faltas;
    }
    cout << "Nota Primer Parcial: ";
    cin >> p1;
    while (p1 < 0 || p1 > 100) {
        cout << "Verifique el numero ingresado. Intente de nuevo: ";
        cin >> p1;
    }
    cout << "Nota Segundo Parcial: ";
    cin >> p2;
    while (p2 < 0 || p2 > 100) {
        cout << "Verifique el numero ingresado. Intente de nuevo: ";
        cin >> p2;
    }
    cout << "Nota Practica: ";
    cin >> prac;
    while (prac < 0 || prac > 100) {
        cout << "Verifique el numero ingresado. Intente de nuevo: ";
        cin >> prac;
    }
    cout << "Nota Examen Final: ";
    cin >> f;
    while (f < 0 || f > 100) {
        cout << "Verifique el numero ingresado. Intente de nuevo: ";
        cin >> f;
    }
    if (faltas > 48*0.2) {
        f = 0;
    }
}

void PonderadoFinal (int p1, int p2, int prac, int f, float &NF) {
    NF = p1 * 0.2 + p2 * 0.2 + prac * 0.2 + f * 0.4;
}

void CondicionAprobado (float NF) {
    if (NF < 51) {
        cout << "Estudiante reprobado." << endl;
    } else {
        cout << "Estudiante aprobado." << endl;
    }
}
