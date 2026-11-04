//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.14. Máximo común divisor (algoritmo de Euclides)
//Desarrolla un programa que lea dos enteros positivos a y b y calcule su máximo común divisor con el algoritmo de Euclides: mientras b ≠ 0, reemplaza (a, b) por (b, a % b). Al terminar, a es el MCD.

#include <stdio.h>

int main() {
    int a, b, tem;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    while (b != 0) {
        tem = b;
        b = a % b;
        a = tem;
    }

    printf("El maximo comun divisor es: %d\n", a);

    return 0;
}
