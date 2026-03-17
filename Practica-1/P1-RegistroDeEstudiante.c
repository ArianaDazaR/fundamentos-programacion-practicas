#include <stdio.h>

int main () {
    char nombre[50], carrera[50];
    int edad, semestre;

    printf("----Sistema de Datos----\n");

    printf("Ingrese su nombre:");
    scanf ("%s", &nombre);

    printf("Ingrese su edad:");
    scanf ("%d", &edad);

    printf("Ingrese su carrera:");
    scanf ("%s", &carrera);

    printf("Ingrese el semestre que cursa:");
    scanf ("%d", &semestre);

    printf("\n--Informacion del estudiante--\n");

    printf("Informacion del estudiante: %s\n", nombre);

    printf("Edad: %d\n", edad);

    printf("Carrera: %s\n", carrera);

    printf("Semestre: %d\n", semestre);

return 0;
}
