//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.6. Máximo, mínimo y media de alturas
#include <stdio.h>

int main() {
    float At, suma = 0, max, min, media;
    int conta = 0;

    printf("Ingrese la altura, si desea terminar ingrese un numero negativo: ");
    scanf("%f", &At);

    if (At >= 0) {
        max = At;
        min = At;

        while (At >= 0) {
            suma = suma + At;
            conta = conta + 1;

            if (At > max) {
                max = At;
            }
            if (At < min) {
                min = At;
            }

            printf("Ingrese otra altura: ");
            scanf("%f", &At);
        }

        if (conta > 0) {
            media = suma / conta;
            printf("La media es: %.2f\n", media);
            printf("La altura maxima es: %.2f\n", max);
            printf("La altura minima es: %.2f\n", min);
        }
    } else {
        printf("No es valida la altura ingresada\n");
    }

    return 0;
}
