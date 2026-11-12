// Ejercicio en clase: Piramide
//Nombre: Samanta Simba
//NRC: 36460
#include <stdio.h>
int main() {
    int n, i, j;
do{

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
}while(n<=0);
    for (i = 1; i <= n; i++) {

        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
