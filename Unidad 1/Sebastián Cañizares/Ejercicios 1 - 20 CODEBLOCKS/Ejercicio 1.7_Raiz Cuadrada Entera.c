#include <stdio.h>

int main() {
    int N, i = 1, R;

    printf("Ingrese un numero entero positivo N: ");
    scanf("%d", &N);

    while (i * i <= N) {
        i++;
    }

    R = i - 1;

    printf("La raiz cuadrada entera por defecto de %d es: %d\n", N, R);
    return 0;
}
