#include <stdio.h>

int main () {

    float nota1, nota2, nota3, promedio;
    char nombre[50];

    printf ("Sistema de Registro de Notas\n");

    printf ("Nombre del Estudiante: ");
    scanf ("%s", &nombre);

    printf ("Primer nota: ");
    scanf ("%f", &nota1);

    printf ("Segunda nota: ");
    scanf ("%f", &nota2);

    printf ("Tercer nota: ");
    scanf ("%f", &nota3);

    promedio = (nota1+nota2+nota3)/3;

    printf ("\nNOMBRE\t\tNOTA 1\tNOTA2\tNOTA3\tPROMEDIO\n");
    printf ("---------------------------------------------------\n");
    printf ("%s\t\t%.2f\t%.2f\t%.2f\t%.2f\n", nombre, nota1, nota2, nota3, promedio);

return 0;
}
