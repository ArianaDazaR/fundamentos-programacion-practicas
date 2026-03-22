#include <stdio.h>

int main () {

    float kwh, totaltarifa, totalpagar;
    const float servicio=8;

    printf ("Calculadora de Pago por Consumo de Electricidad\n");

    printf ("\nIngrese kWh consumidos este mes: ");
    scanf ("%f", &kwh);

    if (kwh<0){
        printf ("\nERROR: Por favor ingrese un valor positivo\n");
        return 1;
    } else {
        if (0==kwh){
            printf ("\nSIN CONSUMO REGISTRADO\n");
        } else {
            if (0<kwh && kwh<=100) {
                totaltarifa=kwh*0.3;
                printf ("\nUsted pertenece a la Categoria Basica\n");
                printf ("\nTotal a pagar segun tarifa: %.2f bolivianos\n", totaltarifa);
            } else {
                if (100<kwh && kwh<=300) {
                    totaltarifa=kwh*0.5;
                    printf ("\nUsted pertenece a la Categoria Media\n");
                    printf ("\nTotal a pagar segun tarifa: %.2f bolivianos\n", totaltarifa);
                    } else {
                        if (300<kwh && kwh<=600) {
                        totaltarifa=kwh*0.75;
                        printf ("\nUsted pertenece a la Categoria Alta\n");
                        printf ("\nTotal a pagar segun tarifa: %.2f bolivianos\n", totaltarifa);
                        } else {
                            totaltarifa=kwh*1.1;
                            printf ("\nUsted pertenece a la Categoria Industrial\n");
                            printf ("\nTotal a pagar segun tarifa: %.2f bolivianos\n", totaltarifa);
                    }
                }
            }
        }
    }

    totalpagar = totaltarifa+servicio;
    printf ("Total a pagar + cargo fijo por servicio: %.2f bolivianos\n", totalpagar);

return 0;
}
