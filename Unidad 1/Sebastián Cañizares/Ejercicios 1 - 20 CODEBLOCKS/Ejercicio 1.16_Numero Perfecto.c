#include <stdio.h>

int main() {
    int n, d, suma_div = 0;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    for (d = 1; d < n; d++) {
        if (n % d == 0) {
            suma_div += d;
        }
    }

    if (suma_div == n) {
        printf("El numero %d es perfecto.\n", n);
    } else {
        printf("El numero %d NO es perfecto.\n", n);
    }

    return 0;
}
