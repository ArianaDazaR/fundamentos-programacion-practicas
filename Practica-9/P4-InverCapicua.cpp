#include <iostream>
#include <string>
using namespace std;

int main() {
    string original, invertida = "";
    cout << "Ingrese una palabra: ";
    cin >> original;

    for (int i = original.length() - 1; i >= 0; i--) {
        invertida = invertida + original[i];
    }

    cout << "Invertida: " << invertida << endl;
    if (original == invertida)
        cout << "\nEs capicua" << endl;
    else
        cout << "\nNo es capicua" << endl;

    return 0;
}
