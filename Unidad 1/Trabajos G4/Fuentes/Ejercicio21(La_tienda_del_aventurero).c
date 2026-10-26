//Ejercicio21
//La tienda del aventurero
//Sebastián Cañizares / Samanta Simba / Jhostyn Adriano Paca Pérez
//NRC:36460

#include <stdio.h>

int main() {
    float precio, monedas, debe, vuelto;

    precio = 50;

    printf("Ingrese el numero de monedas: ");
    scanf("%f", &monedas);

    if (monedas >= precio) {
        vuelto = monedas - precio;

        printf("Obtuviste la espada\n");
        printf("Tu vuelto es de: %.2f monedas\n", vuelto);
    } else {
        debe = precio - monedas;

        printf("No obtuviste la espada\n");
        printf("Te faltan: %.2f monedas\n", debe);
    }

    return 0;
}
