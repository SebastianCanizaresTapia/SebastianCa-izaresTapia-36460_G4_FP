//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.19. Segundo mayor de una secuencia
#include <stdio.h>

int main() {
    int num, mayor, segundo, contador;

    mayor = 0;
    segundo = 0;
    contador = 0;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);

    while (num != 0) {
        contador = contador + 1;

        if (contador == 1) {
            mayor = num;
        } else {
            if (num >= mayor) {
                segundo = mayor;
                mayor = num;
            } else {
                if (contador == 2 || num > segundo) {
                    segundo = num;
                }
            }
        }

        printf("Ingrese otro numero (0 para terminar): ");
        scanf("%d", &num);
    }

    if (contador < 2) {
        printf("error\n");
    } else {
        printf("El numero mayor es: %d\n", mayor);
        printf("El numero menor es: %d\n", segundo); // Nota: respeta el texto original del pseudocódigo
    }

    return 0;
}
