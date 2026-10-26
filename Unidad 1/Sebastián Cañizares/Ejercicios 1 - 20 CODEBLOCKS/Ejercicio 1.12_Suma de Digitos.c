#include <stdio.h>

int main() {
    int num, suma = 0, digito;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);

    while (num > 0) {
        digito = num % 10;
        suma += digito;
        num /= 10;
    }

    printf("La suma de los digitos es: %d\n", suma);
    return 0;
}
