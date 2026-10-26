//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.4. Intervalo

#include <stdio.h>

int main() {
    float x;

    printf("Ingrese un valor: ");
    scanf("%f", &x);

    if (x >= 0 && x <= 10) {
        printf("El numero %.2f si pertenece al intervalo\n", x);
    } else {
        printf("El numero ingresado no pertenece al intervalo\n");
    }

    return 0;
}
