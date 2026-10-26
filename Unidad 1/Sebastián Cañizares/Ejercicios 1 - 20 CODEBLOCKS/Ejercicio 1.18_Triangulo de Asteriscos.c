#include <stdio.h>

int main() {
    int n, i, j;

    printf("Ingrese un numero entero n (n >= 1): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Error: El numero debe ser mayor o igual a 1.\n");
    } else {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
