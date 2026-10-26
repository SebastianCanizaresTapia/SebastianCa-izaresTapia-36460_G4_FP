//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.13. Número capicúa

#include <stdio.h>

int main() {
    int numero, aux, inte, digito;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    aux = numero;
    inte = 0;

    while (aux > 0) {
        digito = aux % 10;
        inte = (inte * 10) + digito;
        aux = aux / 10;
    }

    if (numero == inte) {
        printf("Es capicua\n");
    } else {
        printf("No es capicua\n");
    }

    return 0;
}
