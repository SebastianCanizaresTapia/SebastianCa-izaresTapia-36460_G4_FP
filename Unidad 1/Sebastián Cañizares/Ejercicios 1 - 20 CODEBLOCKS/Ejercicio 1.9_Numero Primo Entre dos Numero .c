#include <stdio.h>

int main() {
    int a, b, inicio, fin, num, i, es_primo;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    inicio = (a <= b) ? a : b;
    fin = (a <= b) ? b : a;

    printf("Numeros primos en el rango [%d, %d]:\n", inicio, fin);

    for (num = inicio; num <= fin; num++) {
        if (num > 1) {
            es_primo = 1;
            i = 2;
            while (i * i <= num && es_primo) {
                if (num % i == 0) {
                    es_primo = 0;
                } else {
                    i++;
                }
            }
            if (es_primo) {
                printf("%d\n", num);
            }
        }
    }

    return 0;
}
