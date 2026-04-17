#include <iostream>

using namespace std;
int main (){

    int n;
    int meta;
    int suma=0;
    int contador=0;

    cout<< "Ingresa la meta : ";
    cin>> meta;

    while (suma<meta){

        cout<< "Ingrese el deposito : ";
        cin>> n;

        suma=suma+n;
        contador=contador +1;


    }
    cout<<"================================"<<endl;
    cout<<"Total acumulado : "<<suma<< endl;
    cout<< "Cantidad de positos : "<< contador<<endl;
    return 0;
}
