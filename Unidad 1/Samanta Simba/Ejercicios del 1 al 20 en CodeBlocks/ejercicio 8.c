//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.8. Número primo

#include <stdio.h>

int main() {
    int num, i;
    int primo = 1;

    printf("Ingrese un numero entero mayor que 1: ");
    scanf("%d", &num);

    primo = 1;
    i = 2;

    while (i < num && primo == 1) {
        if (num % i == 0) {
            primo = 0;
        }
        i = i + 1;
    }

    if (primo == 1) {
        printf("Si es primo\n");
    } else {
        printf("No es primo\n");
    }

    return 0;
}
