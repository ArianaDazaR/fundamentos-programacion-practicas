#include <iostream>
using namespace std;

float LeerPeso (float peso);
float DetCosto (float peso);
void MostrarCosto (float peso, float costo);

int main () {

    char respuesta;

    do {

    float peso = LeerPeso (peso);
    float costo = DetCosto (peso);
    MostrarCosto (peso, costo);

    cout << "\nDesea calcular otra carta? (s/n): ";
    cin >> respuesta;

    } while (respuesta == 's');

    cout << "Terminado." << endl;

    return 0;
}

float LeerPeso (float peso) {
    cout << "Ingrese el peso de la carta (gramos): ";
    cin >> peso;
    while (peso <= 0) {
        cout << "\nEl peso es debe ser mayor a cero.\nIntente de nuevo:";
        cin >> peso;
    }
    return peso;
}

float DetCosto (float peso) {
    if (peso <= 50) {
        return 1.50;
    }
    if (peso <= 100) {
        return 4.00;
    }
    if (peso <= 200) {
        return 6.00;
    }
    if (peso <= 350) {
        return 10.50;
    }
    if (peso <= 500) {
        return 15.00;
    }
    return 1;
}

void MostrarCosto (float peso, float costo) {
    if (costo == 1) {
        cout << "\nNO SE PUEDE ENVIAR COMO CARTA\n";
    } else {
        cout << "\nPeso de la carta: " << peso << "\n" << "Costo de envio: " << costo << endl;
    }
}
