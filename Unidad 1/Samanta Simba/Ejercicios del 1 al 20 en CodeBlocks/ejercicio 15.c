//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.15. Año bisiesto
#include <stdio.h>

int main() {
    int A;

    printf("Ingrese ano: ");
    scanf("%d", &A);

    if ((A % 4 == 0 && A % 100 != 0) || (A % 400 == 0)) {
        printf("Si es bisiesto\n");
    } else {
        printf("No es bisiesto\n");
    }

    return 0;
}
