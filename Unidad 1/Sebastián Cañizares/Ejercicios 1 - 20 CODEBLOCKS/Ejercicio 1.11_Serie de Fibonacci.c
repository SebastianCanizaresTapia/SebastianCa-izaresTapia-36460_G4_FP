#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, siguiente;

    printf("Ingrese la cantidad de terminos n (n >= 1): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Error: n debe ser mayor o igual a 1.\n");
    } else {
        printf("Los primeros %d terminos de Fibonacci son:\n", n);
        for (i = 1; i <= n; i++) {
            printf("%lld ", a);
            siguiente = a + b;
            a = b;
            b = siguiente;
        }
        printf("\n");
    }

    return 0;
}
