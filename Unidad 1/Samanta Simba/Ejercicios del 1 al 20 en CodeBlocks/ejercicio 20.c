//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.20. Adivina el número
#include <stdio.h>

int main() {
    int secreto, intento, inte;

    secreto = 55;
    inte = 0;

    do {
        printf("Adivina el numero: ");
        scanf("%d", &intento);

        inte = inte + 1;

        if (intento > secreto) {
            printf("Mas bajo\n");
        } else {
            if (intento < secreto) {
                printf("Mas alto\n");
            } else {
                printf("Acertaste\n");
            }
        }
    } while (intento != secreto);

    printf("Numero de intentos: %d\n", inte);

    return 0;
}
