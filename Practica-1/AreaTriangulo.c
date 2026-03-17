#include <stdio.h>

int main () {

    float base, altura, area;

    printf ("Calculadora de Area de Triangulo\n");

    printf ("Ingrese la base: ");
    scanf ("%f", &base);

    printf ("Ingrese la altura: ");
    scanf ("%f", &altura);

    area = (base*altura)/2;

    printf ("\nEl area total es: %.2f unidades cuadradas", area);

return 0;
}
