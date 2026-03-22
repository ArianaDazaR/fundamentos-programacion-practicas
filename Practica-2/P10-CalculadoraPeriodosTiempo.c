#include <stdio.h>

int main () {

    int dia1, mes1,dia2, mes2, diadif, mesdif;

    printf ("Calculadora de Periodos de Tiempo Dentro del Mismo Año\n");

    printf ("\nIngrese los datos\n");
    printf ("Ej: enero=01, febrero=02, marzo=03...\n");
    printf ("*Asume meses de 30 dias.\n");
    printf ("\nFecha inicial\n");
    printf ("DD MM:");
    scanf ("%d %d", &dia1, &mes1);

    printf ("\nFecha final\n");
    printf ("DD MM:");
    scanf ("%d %d", &dia2, &mes2);

    if (1<dia1 && dia1<30 && 1<dia2 && dia2<30 && 1<mes1 && mes1<12 && 1<mes2 && mes2<12 ){
        if (((mes2*30)+dia2)<((mes1*30)+dia1)) {
            printf ("\nERROR: Por favor ingrese las fechas en orden cronologico\n");
            return 1;
        } else {
            mesdif= (((mes2*30)+dia2)-((mes1*30)+dia1))/30;
            diadif= (((mes2*30)+dia2)-((mes1*30)+dia1))%30;
            printf ("\nResultado: %d meses y %d dias\n", mesdif, diadif);
        }
    } else {
        printf ("\nERROR: Por favor revise los datos\n");
        return 1;
    }

return 0;
}
