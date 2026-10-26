//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.12. Suma de dígitos

#include <stdio.h>

int main() {
    int numero, num, digito, suma;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);

    num = numero;
    suma = 0;

    while (num > 0) {
        digito = num % 10;
        suma = suma + digito;
        num = num / 10;
    }

    printf("La suma de los digitos es %d\n", suma);

    return 0;
}
