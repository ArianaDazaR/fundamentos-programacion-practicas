#include <stdio.h>

int main () {

    int num;

    printf ("Identificador de Numero Par e Impar\n");

    printf ("Ingrese un numero: ");
    scanf ("%d", &num);

    if (num%2 == 0) {
        printf ("\nEl numero es par");
    }
    else {
        printf ("\nEl numero es impar");
    }

return 0;
}
