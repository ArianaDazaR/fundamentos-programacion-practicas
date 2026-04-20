#include <iostream>
using namespace std;

int main () {

    int numero, digito, transaccion, ServBasico, moneda;
    float cuenta, NumServBasico, identidad;
    int saldo = 100;

    while (saldo > 0) {

        cout << "Montos (en cientos de bolivianos): ";
        cin >> numero;

        int suma = 0;
        int Superior5 = 0;

        while (numero > 0) {
            digito = numero % 10;
            suma = suma + digito;
            if (digito > 5) {
                Superior5++;
            }
            numero = numero / 10;
        }

        cout << "Total Acumulado para la Transaccion: " << suma << "00 bolivianos" << endl;
        cout << "Transacciones superiores a Bs. 500: " << Superior5 << endl;

        cout << "\nSeleccione que operaciones desea realizar:\n";
        cout << "1. Depositos\n";
        cout << "2. Retiros\n";
        cout << "3. Transferencias\n";
        cout << "4. Pago de Servicios Basicos\n";
        cout << "5. Tarjetas de Credito\n";
        cin >> transaccion;

        switch (transaccion) {

        case 1:
            saldo = saldo + suma;
            cout << "\nOperacion exitosa. Saldo disponible: " << saldo << "00\n\n";
            break;

        case 2:
            saldo = saldo - suma;
            if (suma > saldo) {
                cout << "\nOperacion fallida. Saldo insuficiente\n\n";
            } else {
                cout << "\nOperacion exitosa. Saldo disponible: " << saldo << "00\n\n";
            }
            break;

        case 3:
            cout << "\nIngrese la cuenta bancaria a la que desea realizar el traspaso: ";
            cin >> cuenta;
            saldo = saldo - suma;
            if (suma > saldo) {
                cout << "\nOperacion fallida. Saldo insuficiente\n\n";
            } else {
                cout << "\nOperacion exitosa. Saldo disponible: " << saldo << "00\n\n";
            }
            break;

        case 4:
            cout << "\nQue servicio basico desea pagar?:\n";
            cout << "1. Agua\n";
            cout << "2. Luz\n";
            cout << "3. Telefonia\n";
            cout << "4. Impuestos\n";
            cin >> ServBasico;

            switch (ServBasico) {

            case 1:
                cout << "Codigo de Asociado SAGUAPAC: ";
                cin >> NumServBasico;
                saldo = saldo - suma;
                if (suma > saldo) {
                    cout << "\nOperacion fallida. Saldo insuficiente\n\n";
                } else {
                    cout << "\nOperacion exitosa. Saldo disponible: " << saldo << "00\n\n";
                }
                break;

            case 2:
                cout << "Numero de Cliente CRE: ";
                cin >> NumServBasico;
                saldo = saldo - suma;
                if (suma > saldo) {
                    cout << "\nOperacion fallida. Saldo insuficiente\n\n";
                } else {
                    cout << "\nOperacion exitosa. Saldo disponible: " << saldo << "00\n\n";
                }
                break;

            case 3:
                cout << "Numero de Contacto: ";
                cin >> NumServBasico;
                saldo = saldo - suma;
                if (suma > saldo) {
                    cout << "\nOperacion fallida. Saldo insuficiente\n\n";
                } else {
                    cout << "\nOperacion exitosa. Saldo disponible: " << saldo << "00\n\n";
                }
                break;

            case 4:
                cout << "Numero de Tramite: ";
                cin >> NumServBasico;
                cout << "\nNIT o Cedula de Identidad: ";
                cin >> identidad;
                saldo = saldo - suma;
                if (suma > saldo) {
                    cout << "\nOperacion fallida. Saldo insuficiente\n\n";
                } else {
                    cout << "\nOperacion exitosa. Saldo disponible: " << saldo << "00\n\n";
                }
                break;

            }

        case 5:
            cout << "Numero de Tarjeta: ";
            cin >> NumServBasico;
            cout << "\nMoneda:\n";
            cout << "1. Bolivianos\n";
            cout << "2. Dolares (T/C: Bs.6.96)\n";
            cin >> moneda;

            switch (moneda) {

            case 1:
                saldo = saldo - suma;
                if (suma > saldo) {
                    cout << "\nOperacion fallida. Saldo insuficiente\n\n";
                } else {
                    cout << "\nOperacion exitosa. Saldo disponible: " << saldo << "00\n\n";
                }
                break;

            case 2:
                saldo = saldo - suma*6.96;
                if (suma > saldo) {
                    cout << "\nOperacion fallida. Saldo insuficiente\n\n";
                } else {
                    cout << "\nOperacion exitosa. Saldo disponible: " << saldo << "00\n\n";
                }
                break;
            }
        }
    }

return 0;
}
