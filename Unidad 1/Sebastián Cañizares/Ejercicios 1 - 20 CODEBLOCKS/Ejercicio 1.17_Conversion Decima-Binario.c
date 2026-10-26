#include <stdio.h>

int main() {
    int n, temp, resto;
    long long binario = 0, posicion = 1;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        resto = temp % 2;
        binario += (resto * posicion);
        posicion *= 10;
        temp /= 2;
    }

    printf("El numero %d en binario es: %lld\n", n, binario);
    return 0;
}
