#include <iostream>
using namespace std;

int main() {
    const int contrasenacorrecta = 1234;
    int entrada;
    int intentos = 0;
    bool acceso = false;

    do {
        cout << "Ingrese la contrasena (4 digitos): ";
        cin >> entrada;
        intentos++;

        if (entrada == contrasenacorrecta) {
            acceso = true;
            break;
        } else {
            cout << "Contrasena incorrecta. Intento " << intentos << " de 3.\n";
        }
    } while (intentos < 3);

    if (acceso) {
        cout << "\nAcceso concedido. Bienvenido.\n";
    } else {
        cout << "\nAcceso bloqueado. Demasiados intentos fallidos.\n";
    }

    return 0;
}
