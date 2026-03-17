#include <stdio.h>

int main () {

    float horas, pagohora, salario;

    printf ("Sistema de Salarios\n");

    printf ("Ingrese horas trabajadas: ");
    scanf ("%f", &horas);

    printf ("Ingrese pago por hora: ");
    scanf ("%f", &pagohora);

    if (horas>40) {
        salario = horas*pagohora*1.1;
        printf ("\nSalario total: %.2f", salario);
    }
    else {
        salario = horas*pagohora;
        printf ("\nSalario total: %.2f", salario);
    }

return 0;
}
