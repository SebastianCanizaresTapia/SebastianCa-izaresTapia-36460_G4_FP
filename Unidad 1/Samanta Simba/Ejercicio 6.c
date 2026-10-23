#include <stdio.h>

void main() {
    float At, suma = 0, max, min, media;
    int conta = 0;

    printf("Ingrese la altura, si desea terminar numero negativo: ");
    scanf("%f", &At);

    if (At >= 0)
    {
        max = At;
        min = At;

        while (At >= 0)
        {
            suma = suma + At;
            conta = conta + 1;

            if (At > max)
            {
                max = At;
            }
            if (At < min)
            {
                min = At;
            }

            printf("Ingrese otra altura: ");
            scanf("%f", &At);
        }

        if (conta > 0)
        {
            media = suma / conta;
            printf("La media es: %.2f\n", media);
            printf("La altura maxima es: %.2f\n", max);
            printf("La altura minima es: %.2f\n", min);
        }
    } else
    {
        printf("No es valido la altura ingresada\n");
    }
}
