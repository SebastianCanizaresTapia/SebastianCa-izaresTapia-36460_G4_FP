//Ejercicio20
//Adivina el número
//Sebastián Cañizares / Samanta Simba / Jhostyn Adriano Paca Pérez
//NRC:36460

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int secreto, intento, contador = 0;

    srand(time(NULL));
    secreto = rand() % 100 + 1;

    printf("He pensado un numero entre 1 y 100.\n");
    printf("Intenta adivinarlo:\n");

    do {
        scanf("%d", &intento);
        contador++;

        if (intento < secreto) {
            printf("Mas alto!\n");
        } else if (intento > secreto) {
            printf("Mas bajo!\n");
        } else {
            printf("¡Acertaste!\n");
        }

    } while (intento != secreto);

    printf("Usaste %d intentos.\n", contador);

    return 0;
}
