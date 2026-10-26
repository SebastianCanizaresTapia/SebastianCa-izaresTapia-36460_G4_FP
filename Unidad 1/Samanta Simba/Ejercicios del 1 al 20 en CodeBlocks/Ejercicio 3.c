//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.3. Divisible

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);

    printf("Ingrese otro numero excepto el cero: ");
    scanf("%d", &num2);

    if (num2 != 0 && num1 % num2 == 0) {
        printf("El numero %d sí es divisible para %d\n", num1, num2);
    } else {
        printf("El numero %d no es divisible para %d\n", num1, num2);
    }

    return 0;
}
