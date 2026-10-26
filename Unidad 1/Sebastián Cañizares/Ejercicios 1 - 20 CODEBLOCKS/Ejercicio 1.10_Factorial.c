#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;

    printf("Ingrese un numero entero no negativo n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: El factorial no esta definido para numeros negativos.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("El factorial de %d es: %lld\n", n, fact);
    }

    return 0;
}
