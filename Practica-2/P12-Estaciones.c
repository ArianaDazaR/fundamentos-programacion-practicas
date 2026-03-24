#include <stdio.h>

int main () {

    int DD, MM;

    printf ("Estacion del Año según Fecha (Hemisferio Sur)\n");

    printf ("\nIngrese una fecha (DD MM):\n(Ej: enero=01, febrero=02, marzo=03...)\n>");
    scanf ("%d %d", &DD, &MM);

    if (MM<1 || MM>12 || DD<1 || DD>31) {
        printf("\nERROR: Fecha invalida\n");
        return 1;
    }

    if ((MM==12 && DD>=21) || MM==1 || MM==2 || (MM==3 && DD<=20)) {
        printf ("\nEn esta fecha, es Verano\n");
    } else {
       if ((MM==3 && DD>=21) || MM==4 || MM==5 || (MM==6 && DD<=20)) {
        printf ("\nEn esta fecha, es Otono\n");
        } else {
            if ((MM==6 && DD>=21) || MM==7 || MM==8 || (MM==9 && DD<=20)) {
            printf ("\nEn esta fecha, es Invierno\n");
            } else {
                printf ("\nEn esta fecha, es Primavera\n");
            }
        }
    }

return 0;
}
