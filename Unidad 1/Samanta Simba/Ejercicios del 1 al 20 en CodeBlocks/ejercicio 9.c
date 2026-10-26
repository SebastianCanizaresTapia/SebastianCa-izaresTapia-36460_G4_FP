//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.9. Números primos comprendidos entre dos números dados

#include <stdio.h>

int main() {
    int inicio_r, fin_r, i, j;
    int primo;

    printf("Ingrese el numero inicial: ");
    scanf("%d", &inicio_r);

    printf("Ingrese el numero final: ");
    scanf("%d", &fin_r);

    for (i = inicio_r; i <= fin_r; i++) {
        if (i > 1) {
            primo = 1;


            for (j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    primo = 0;
                }
            }

            if (primo == 1) {
                printf("Los numeros comprendidos primos son: %d\n", i);
            }
        }
    }

    return 0;
}
