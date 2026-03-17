#include <stdio.h>

int main () {

    float notafinal;

    printf ("Sistema de Notas\n");

    printf ("Nota final de estudiante: ");
    scanf ("%f", &notafinal);

    if (notafinal>=51) {
        printf("\nEstudiante aprobado");
    }
    else {
        printf("\nEstudiante reprobado");
    }

return 0;
}
