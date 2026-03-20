#include <stdio.h>

int main () {

    float parcial1, parcial2, examf, proyecto, par1pond, par2pond, examfpond, proyepond, notafinal;

    printf ("Sistema de Notas\n");

    printf ("Nota del primer parcial:");
    scanf ("%f", &parcial1);

    printf ("Nota del segundo parcial:");
    scanf ("%f", &parcial2);

    printf ("Nota del examen final:");
    scanf ("%f", &examf);

    printf ("Nota del proyecto integrador:");
    scanf ("%f", &proyecto);

    par1pond=parcial1*0.25;
    par2pond=parcial2*0.25;
    examfpond=examf*0.3;
    proyepond=proyecto*0.2;
    notafinal= par1pond + par2pond + examfpond + proyepond;


    printf ("\n1er PARCIAL\t2do PARCIAL\tEXAMEN FINAL\tPROYECTO INT.\tNOTA FINAL\n");
    printf ("---------------------------------------------------------------------------\n");
    printf ("%.2f\t\t\%.2f\t\t\%.2f\t\t\%.2f\t\t\%.2f\t\t\n", par1pond, par2pond, examfpond, proyepond, notafinal);
    printf ("---------------------------------------------------------------------------\n");

    if (notafinal>=51){
        printf ("\nEstudiante aprobado\n");
    } else {
        printf("\nEstudiante reprobado\n");
    }

return 0;
}
