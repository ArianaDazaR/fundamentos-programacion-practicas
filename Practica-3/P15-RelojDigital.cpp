#include <iostream>
using namespace std;

int main() {
    int h = 0, m = 0, s = 0;

    while (true) {

        cout << (h < 10 ? "0" : "") << h << ":"
             << (m < 10 ? "0" : "") << m << ":"
             << (s < 10 ? "0" : "") << s;

        s++;
        if (s == 60) {
            s = 0;
            m++;
            if (m == 60) {
                m = 0;
                h++;
                if (h == 24) {
                    h = 0;
                }
            }
        }

        for (long long i = 0; i < 3900000000; i++);

        cout << "\r";
    }

    return 0;
}
