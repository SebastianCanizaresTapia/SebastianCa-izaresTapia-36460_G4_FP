//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.18. Triángulo de asteriscos
//Enunciado:Desarrolla un programa que lea un entero n ≥ 1 y dibuje por pantalla un triángulo rectángulo de n filas, donde la fila i tiene i asteriscos.

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Ingrese un numero entero positivo mayor que 1: ");
    scanf("%d", &n);
    
//la primera estructura for nos ayuda a asignar valores e interpretar las filas 
    for (i = 1; i <= n; i++) {
        
        //la segunda estructura for nos ayuda a imprimir por pantalla los ateriscos
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
