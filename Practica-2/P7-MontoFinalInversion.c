#include <stdio.h>
#include <math.h.>

int main () {

    float C, T, N, M, G;

    printf ("Calculadora de Monto Total pora Inversiones\n");

    printf ("Ingrese su capital inicial: ");
    scanf ("%f", &C);

    printf ("Ingrese la tasa de interes (mensual): ");
    scanf ("%f%%", &T);

    printf ("Ingrese su plazo (años): ");
    scanf ("%f", &N);

    T/= 100;
    M = C * pow (1 + T/12,N*12);
    G = M - C;

    printf ("\n------------------------------------------------\n");
    printf ("Monto Total de Capital Futuro: %.2f\n", M);
    printf ("Ganancia Neta: %.2f", G);
    printf ("\n------------------------------------------------\n");

return 0;
}
