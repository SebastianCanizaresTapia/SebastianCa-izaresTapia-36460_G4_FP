//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.1. Media de dos valores

#include <stdio.h>

int main() {
    int n, i, a, b, siguiente;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    a = 0;
    b = 1;

    printf("Los primeros %d terminos son:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d\n", a);
        siguiente = a + b;
        a = b;
        b = siguiente;
    }

    return 0;
}
