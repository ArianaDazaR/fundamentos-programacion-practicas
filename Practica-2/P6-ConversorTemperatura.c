#include <stdio.h>

int main () {

    float C, F, K, Ra;
    char escala;

    printf("Conversor de Temperatura: Celsius a Fahrenheit/Kelvin/Rankine\n");

    printf ("Grados Celsius (C):");
    scanf ("%f", &C);

    printf ("\na\n\n- Faharenheit (F)\n- Kelvin (K)\n- Rankine (R)\n");

    printf ("Seleccione una escala:");
    scanf (" %c", &escala);

    if (escala == 'F'){
        F = (C * 9/5) + 32;
        printf ("\nGrados Faharenheit (F): %.2f\n", F);
    } else {
        if (escala == 'K'){
            K = C + 273.15;
            printf ("\nGrados Kelvin (K): %.2f\n", K);
        } else {
            if (escala == 'R') {
                Ra = (C + 273.15) * 9/5;
                printf ("\nGrados Rankine (Ra): %.2f\n", Ra);
            } else {
                printf ("\nERROR - Por favor ingrese: F / K / R\n");
                return 1;
            }
        }
    }

return 0;

}
