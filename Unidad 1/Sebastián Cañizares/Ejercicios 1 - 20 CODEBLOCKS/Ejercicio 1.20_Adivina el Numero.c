#include <stdio.h>

int main() {
    int secreto = 42, intento = 0, intentos = 0;

    printf("=== Juego: Adivina el Numero (1 - 100) ===\n");

    while (intento != secreto) {
        printf("Ingrese su intento: ");
        scanf("%d", &intento);
        intentos++;

        if (intento < secreto) {
            printf("Mas alto\n");
        } else if (intento > secreto) {
            printf("Mas bajo\n");
        } else {
            printf("¡Acertaste!\n");
        }
    }

    printf("Adivinaste el numero en %d intentos.\n", intentos);
    return 0;
}
