#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

float AreaCuadrado (float lado);
float AreaCirculo (float radio);
float AreaTriangulo (float base, float altura);

int main () {
    int figura;
    float area, lado, radio, base, altura;
    cout << "Calculadora de Area"<< endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Circulo" << endl;
    cout << "3. Triangulo" << endl;
    cout << "Seleccione una figura: ";
    cin >> figura;
    cout << fixed << setprecision(2) << endl;
    switch (figura) {
        case 1:
            cout << "Lado: ";
            cin >> lado;
            area=AreaCuadrado (lado);
            cout << "\nEl area de la figura es " << area << endl;
            break;
        case 2:
            cout << "Radio: ";
            cin >> radio;
            area=AreaCirculo (radio);
            cout << "\nEl area de la figura es " << area << endl;
            break;
        case 3:
            cout << "Base: ";
            cin >> base;
            cout << "Altura: ";
            cin >> altura;
            area=AreaTriangulo (base, altura);
            cout << "\nEl area de la figura es " << area << endl;
            break;
    }
}

float AreaCuadrado (float lado) {
    return lado*lado;
}

float AreaCirculo (float radio){
    return M_PI*pow(radio,2);
}

float AreaTriangulo (float base, float altura) {
    return (base + altura)/2;
}
