#include <stdio.h>

int main() {
    int num, temp, digito, invertido = 0;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        digito = temp % 10;
        invertido = (invertido * 10) + digito;
        temp /= 10;
    }

    if (num == invertido) {
        printf("El numero %d es capicua.\n", num);
    } else {
        printf("El numero %d NO es capicua.\n", num);
    }

    return 0;
}
