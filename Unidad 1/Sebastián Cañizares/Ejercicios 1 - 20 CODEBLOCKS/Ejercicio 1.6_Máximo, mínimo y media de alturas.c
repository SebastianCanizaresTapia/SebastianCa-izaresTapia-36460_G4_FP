#include <stdio.h>

int main() {
    float h, suma = 0, max = 0, min = 0, media;
    int contador = 0;

    printf("Ingrese una altura (o numero negativo para salir): ");
    scanf("%f", &h);

    while (h >= 0) {
        suma += h;
        contador++;

        if (contador == 1) {
            max = h;
            min = h;
        } else {
            if (h > max) max = h;
            if (h < min) min = h;
        }

        printf("Ingrese otra altura (o numero negativo para salir): ");
        scanf("%f", &h);
    }

    if (contador > 0) {
        media = suma / contador;
        printf("Media de alturas: %.2f\n", media);
        printf("Altura maxima: %.2f\n", max);
        printf("Altura minima: %.2f\n", min);
    } else {
        printf("No se ingresaron alturas validas.\n");
    }

    return 0;
}
