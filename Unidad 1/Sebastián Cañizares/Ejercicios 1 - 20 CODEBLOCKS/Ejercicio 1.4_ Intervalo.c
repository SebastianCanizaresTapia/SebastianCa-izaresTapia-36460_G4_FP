#include <stdio.h>

int main() {
    float x;
    printf("Ingrese un numero: ");
    scanf("%f", &x);

    if (x >= 0.0f && x <= 10.0f) {
        printf("El numero %.2f pertenece al intervalo [0, 10]\n", x);
    } else {
        printf("El numero %.2f NO pertenece al intervalo [0, 10]\n", x);
    }
    return 0;
}
