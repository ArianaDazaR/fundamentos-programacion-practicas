#include <stdio.h>

int main () {

    int pollo, carne, queso, refresco, agua, cantidadt;
    float subpollo, subcarne, subqueso, subrefresco, subagua, total;

    printf ("Sistema de Compras\n");

    printf ("\nIngrese las cantidades para los siguientes productos:\n");
    printf ("Saltena de pollo: ");
    scanf ("%d", &pollo);
    printf ("Saltena de carne: ");
    scanf ("%d", &carne);
    printf ("Empanada de queso: ");
    scanf ("%d", &queso);
    printf ("Refresco (500ml): ");
    scanf ("%d", &refresco);
    printf ("Agua mineral: ");
    scanf ("%d", &agua);

    subpollo = pollo*3.5;
    subcarne = carne*4;
    subqueso = queso*3;
    subrefresco = refresco*5;
    subagua = agua*3;
    cantidadt = pollo+carne+queso+refresco+agua;
    total= subpollo+subcarne+subqueso+subrefresco+subagua;

    printf ("\nITEM\t\t\tPRECIO (Bs.)\tCANTIDAD\tTOTAL PARCIAL (Bs.)\n");
    printf ("---------------------------------------------------------------------------\n");
    printf ("Saltena de pollo\t3.50\t\t%d\t\t%.2f\n", pollo, subpollo);
    printf ("Saltena de carne\t4.00\t\t%d\t\t%.2f\n", carne, subcarne);
    printf ("Empanada de queso\t3.00\t\t%d\t\t%.2f\n", queso, subqueso);
    printf ("Refresco (500ml)\t5.00\t\t%d\t\t%.2f\n", refresco, subrefresco);
    printf ("Agua mineral\t\t3.00\t\t%d\t\t%.2f\n", agua, subagua);
    printf ("---------------------------------------------------------------------------\n");
    printf ("TOTAL\t\t\t\t\t%d\t\t%.2f\n", cantidadt, total);

return 0;
}
