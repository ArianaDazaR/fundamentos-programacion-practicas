#include <iostream>
#include <string>
using namespace std;

int main() {
    string cad1, cad2;
    cout << "Cadena 1: ";
    cin >> cad1;
    cout << "Cadena 2: ";
    cin >> cad2;

    string union1 = cad1 + cad2;
    cout << "Union con + : " << union1 << endl;


    string union2 = cad1;
    union2.append(cad2);
    cout << "Union con append: " << union2 << endl;

    return 0;
}
