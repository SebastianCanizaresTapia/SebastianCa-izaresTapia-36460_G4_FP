//Ejercicio21
//La tienda del aventurero
//Sebastián Cañizares / Samanta Simba / Jhostyn Adriano Paca Pérez
//NRC:36460

#include <stdio.h>

int main() {
    int gemas, suma, cant;

    suma = 0;
    cant = 0;

    printf("Ingrese el numero de gemas que obtuvo\n");
    printf("Si tiene 0 gemas, se termina\n");

    scanf("%d", &gemas);

    while (gemas != 0) {
        suma = suma + gemas;
        cant++;

        printf("Valor de la gema, para terminar ingrese 0: ");
        scanf("%d", &gemas);
    }

    printf("Gemas ingresadas: %d\n", cant);
    printf("La suma de las gemas es de: %d\n", suma);

    return 0;
}
