//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.18. Triángulo de asteriscos
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Ingrese un entero n >= 1: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
