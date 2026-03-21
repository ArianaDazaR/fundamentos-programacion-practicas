#include <stdio.h>

int main () {

    double A, B, C, D, E, F, detx, dety, det, x, y;
    const double tolneg=-0.0000000009, tolpos=0.0000000009;

    printf ("Resolvedor de ecuaciones por Regla de Cramer (2x2)\nAx + By = C\nDx + Ey = F\n");

    printf ("\nIngrese los coeficientes:\n");
    printf ("A:");
    scanf ("%lf", &A);
    printf ("B:");
    scanf ("%lf", &B);
    printf ("C:");
    scanf ("%lf", &C);
    printf ("D:");
    scanf ("%lf", &D);
    printf ("E:");
    scanf ("%lf", &E);
    printf ("F:");
    scanf ("%lf", &F);

    det=A*E-B*D;
    detx=B*F-E*C;
    dety=A*F-C*D;

    if (tolneg<det && det<tolpos){
        if (tolneg<detx && detx<tolpos && tolneg<dety && dety<tolpos) {
            printf ("\nSistema indeterminado: Soluciones infinitas (0/0)\n");
        } else {
            printf ("\nSistema inconsistente: Sin solución (x,y/0)\n");
        }
    } else {
        x=detx/det;
        y=dety/det;
        printf ("\nResultados:\n");
        printf ("Valor x: %.4f\n", x);
        printf ("Valor y: %.4f\n", y);
    }

return 0;
}
