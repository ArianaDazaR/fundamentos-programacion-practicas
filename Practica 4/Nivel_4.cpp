#include <iostream>
using namespace std;

int main() {
    int opcion;
    double total = 0, precio;
    int cantidadProductos = 0;
    char continuar;

    do {
        cout << "\n--- MENU PRINCIPAL ---\n";
        cout << "1. Comprar producto\n";
        cout << "2. Ver total acumulado\n";
        cout << "3. Salir\n";
        cout << "Elija una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << "\nProductos disponibles:\n";
                for (int i = 1; i <= 5; i++) {
                    cout << i << ". Producto " << i << " - Precio: " << (i * 20) << " Bs\n";
                }
                int seleccion;
                cout << "Seleccione el numero del producto: ";
                cin >> seleccion;

                if (seleccion >= 1 && seleccion <= 5) {
                    precio = seleccion * 20.0;
                    total += precio;
                    cantidadProductos++;
                    cout << "Producto agregado. Subtotal actual: " << total << " Bs\n";
                } else {
                    cout << "Seleccion invalida.\n";
                }
                break;
            }
            case 2: {
                double totalConDescuento = total;
                if (total > 100) {
                    totalConDescuento *= 0.9;
                    cout << "Descuento del 10% aplicado por superar 100 Bs.\n";
                }
                if (cantidadProductos >= 5) {
                    totalConDescuento -= 5;
                    cout << "Bono de 5 Bs aplicado por comprar 5 o mas productos.\n";
                }
                cout << "Total a pagar: " << totalConDescuento << " Bs\n";
                cout << "(Total sin descuentos ni bonos: " << total << " Bs)\n";
                break;
            }
            case 3:
                cout << "Gracias por usar el sistema. ¡Hasta luego!\n";
                break;
            default:
                cout << "Opcion no valida.\n";
        }

        if (opcion != 3) {
            cout << "\n¿Desea continuar? (s/n): ";
            cin >> continuar;
            if (continuar == 'n' || continuar == 'N')
                opcion = 3;
        }

    } while (opcion != 3);

    return 0;
}
