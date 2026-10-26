//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.14. Máximo común divisor (algoritmo de Euclides)

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
