#include <iostream>
#include <iomanip>
using namespace std;

void LeerCantidades (int &ham, int &hamqueso, int &papas, int &soda);
void totales (int ham, int hamqueso, int papas, int soda, float &totalham, float &totalhamqueso, float &totalpapas, float &totalsoda, float &total);

int main () {
    int ham, hamqueso, papas, soda;
    LeerCantidades (ham, hamqueso, papas, soda);
    float totalham, totalhamqueso, totalpapas, totalsoda, total;
    totales (ham, hamqueso, papas, soda, totalham, totalhamqueso, totalpapas, totalsoda, total);
    cout << fixed << setprecision(2);
    cout << "\nITEM\t\t\tPRECIO (Bs.)\tCANTIDAD\tTOTAL PARCIAL (Bs.)\n";
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "Hamburguesa\t\tBs.3\t\t" << ham << "\t\t" << totalham << endl;
    cout << "Hamburguesa c/queso\tBs.5\t\t" << hamqueso << "\t\t" << totalhamqueso << endl;
    cout << "Papas Fritas\t\tBs.2\t\t" << papas << "\t\t" << totalpapas << endl;
    cout << "Soda\t\t\tBs.2.5\t\t" << soda << "\t\t" << totalsoda << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "TOTAL\t\t\t\t\t\t\t" << total << endl;
}

void LeerCantidades (int &ham, int &hamqueso, int &papas, int &soda) {
    cout << "Pedido\nHamburguesas: ";
    cin >> ham;
    cout << "Hamburguesas con queso: ";
    cin >> hamqueso;
    cout << "Papas fritas: ";
    cin >> papas;
    cout << "Soda: ";
    cin >> soda;
}

void totales (int ham, int hamqueso, int papas, int soda, float &totalham, float &totalhamqueso, float &totalpapas, float &totalsoda, float &total) {
    totalham = ham * 3;
    totalhamqueso = hamqueso * 5;
    totalpapas = papas * 2;
    totalsoda = soda * 2.5;
    total = totalham + totalhamqueso + totalsoda + totalpapas;
}
