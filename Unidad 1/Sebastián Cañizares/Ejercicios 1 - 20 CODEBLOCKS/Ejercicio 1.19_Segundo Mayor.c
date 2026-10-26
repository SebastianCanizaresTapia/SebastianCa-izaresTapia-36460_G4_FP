#include <stdio.h>

int main() {
    int num, mayor = 0, segundo = 0, contador = 0;

    printf("Ingrese un numero entero positivo (0 para terminar): ");
    scanf("%d", &num);

    while (num != 0) {
        contador++;

        if (num > mayor) {
            segundo = mayor;
            mayor = num;
        } else if (num >= segundo) {
            segundo = num;
        }

        printf("Ingrese otro numero entero positivo (0 para terminar): ");
        scanf("%d", &num);
    }

    if (contador < 2) {
        printf("Error: Debe ingresar al menos dos numeros.\n");
    } else {
        printf("El mayor es: %d\n", mayor);
        printf("El segundo mayor es: %d\n", segundo);
    }

    return 0;
}
