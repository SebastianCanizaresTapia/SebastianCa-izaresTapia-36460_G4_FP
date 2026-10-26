//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.16. Número perfecto

#include <stdio.h>

int main() {
    int n, i, suma;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    suma = 0;
    for (i = 1; i <= n - 1; i++) {
        if (n % i == 0) {
            suma = suma + i;
        }
    }

    if (suma == n) {
        printf("El numero es perfecto\n");
    } else {
        printf("No es perfecto\n");
    }

    return 0;
}
