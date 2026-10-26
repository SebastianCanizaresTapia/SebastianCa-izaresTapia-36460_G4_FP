#include <stdio.h>

int main() {
    int num, i = 2, es_primo = 1;

    printf("Ingrese un numero entero mayor que 1: ");
    scanf("%d", &num);

    while (i * i <= num && es_primo) {
        if (num % i == 0) {
            es_primo = 0;
        } else {
            i++;
        }
    }

    if (es_primo && num > 1) {
        printf("%d es un numero primo.\n", num);
    } else {
        printf("%d NO es un numero primo.\n", num);
    }

    return 0;
}
