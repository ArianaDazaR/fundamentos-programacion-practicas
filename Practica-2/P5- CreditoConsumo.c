#include <stdio.h>
#include <math.h>

int main () {

    float C, T, N, cuotamensual, montototal, interes;

    printf ("Calculadora de Monto Total por Credito de Consumo\n");

    printf ("Ingrese capital prestado:");
    scanf ("%f", &C);

    printf ("Ingrese la tasa de interes (mensual):");
    scanf ("%f", &T);

    printf ("Ingrese cantidad de cuotas:");
    scanf ("%f", &N);

    cuotamensual = (C * (T * pow(1+T,N))) / (pow(1+T,N) - 1);
    montototal = cuotamensual * N;
    interes = montototal - C;

    printf ("\n------------------------------------------------\n");
    printf ("Monto Total a pagar: %.2f\n", montototal);
    printf ("Intereses a pagar: %.2f", interes);
    printf ("\n------------------------------------------------\n");

return 0;
}
