//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.10. Factorial

#include <stdio.h>

int main() {
    int n, i;
    double F;

    printf("Ingrese un numero entero n >= 0: ");
    scanf("%d", &n);

    if (n >= 0) {
        F = 1;
        for (i = 1; i <= n; i++) {
            F = F * i;
        }
        printf("%d! = %.0f\n", n, F);
    } else {
        printf("El numero debe ser mayor o igual a 0\n");
    }

    return 0;
}
