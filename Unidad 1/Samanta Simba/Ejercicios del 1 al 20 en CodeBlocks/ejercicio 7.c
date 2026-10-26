//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.7. Raíz cuadrada entera
#include <stdio.h>

int main() {
    int N, i, R;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &N);

    i = 1;
    while ((i * i) <= N) {
        i = i + 1;
    }

    R = i - 1;
    printf("La raiz cuadrada entera es: %d\n", R);

    return 0;
}
