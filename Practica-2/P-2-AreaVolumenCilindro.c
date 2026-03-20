#include <stdio.h>
#include <math.h>

int main () {

    float R, H, areat, arealat, volumen;
    const float PI=3.14159265;

    printf ("Calculadora de Area y Volumen de Cilindros\n");

    printf ("Ingrese valor de la altura: ");
    scanf ("%f", &H);

    printf ("Ingrese valor del radio: ");
    scanf ("%f", &R);

    if (H <= 0 || R <= 0){
        printf ("ERROR: Ingrese valores positivos\n");
    }
    else {
    arealat = 2*R*H*PI;
    areat = 2*PI*R*(R+H);
    volumen = PI*pow(R,2)*H;

    printf ("\nResultados:\n");
    printf ("Area Lateral:  %.2f unidades cuadradas\n", arealat);
    printf ("Area Total:  %.2f unidades cuadradas\n", areat);
    printf ("Volumen:   %.2f unidades cubicas\n", volumen);
    }

return 0;
}
