#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, discriminante, raizdisc, x1, x2, partereal, parteimag;

    printf("Calculadora de Raíces de Ecuacion Cuadratica\n");
    printf("Forma: ax^2 + bx + c = 0\n");

    printf("\nIngrese coeficientes\n");
    printf("a:");
    scanf("%lf",&a);
    printf("b:");
    scanf("%lf",&b);
    printf("c:");
    scanf("%lf",&c);

    if (a==0) {
        if (b==0) {
            if (c==0){
                printf("\nLa ecuacion es una identidad (infinitas soluciones)\n");
            } else {
                printf("\nLa ecuacion no tiene solucion (contradiccion)\n");
            }
        } else {
            x1 = -c/b;
            printf("\nResultado\nUna solucion:\n x= %.2f\n", x1);
        }
    } else {
        discriminante = b*b - 4*a*c;
        if (discriminante>0) {
            raizdisc = sqrt(discriminante);
            x1 = (-b+raizdisc)/(2*a);
            x2 = (-b-raizdisc)/(2*a);
            printf("\nResultado\nDos raices reales distintas:\n");
            printf("x1= %.2f\n", x1);
            printf("x2= %.2f\n", x2);
        } else {
            if (discriminante==0) {
            x1 = -b/(2*a);
            printf("\nResultado\nRaiz real doble:\nx = %.2f\n", x1);
            } else {
                partereal = -b/(2*a);
                parteimag = sqrt(-discriminante)/(2*a);
                printf("\nResultado\nRaices complejas conjugadas:\n");
                printf("x1 = %.2f + %.2fi\n", partereal, parteimag);
                printf("x2 = %.2f - %.2fi\n", partereal, parteimag);
            }
        }
    }

    return 0;
}
