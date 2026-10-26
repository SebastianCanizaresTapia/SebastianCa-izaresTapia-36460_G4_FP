#include <stdio.h>

int main() {
    int a, b, resto;

    printf("Ingrese el primer numero positivo a: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero positivo b: ");
    scanf("%d", &b);

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    printf("El Maximo Comun Divisor (MCD) es: %d\n", a);
    return 0;
}
