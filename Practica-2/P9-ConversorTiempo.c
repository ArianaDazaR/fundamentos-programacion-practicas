#include <stdio.h>

int main () {

    int minutos, dias, hrs, mins;

    printf ("Conversor de Tiempo: Minutos a Dias, horas y minutos\n");

    printf ("Ingrese cantidad de minutos:");
    scanf ("%d", &minutos);

    dias = minutos/1440;
    hrs = (minutos%1440)/60;
    mins = ((minutos%1440)%60)%60;

    printf ("\nResultado: %d dias, %d horas y %d minutos\n", dias, hrs, mins);

return 0;
}
