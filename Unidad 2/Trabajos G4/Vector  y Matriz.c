// Grupo 4
// Integrantes: Jhostyn Paca, Samanta Simba, Sebastian Cañizares
// Menú que ejecuta un vector y una matriz de tipo flotante
#include <stdio.h>

int main() {
    int opcion;

    do {
        // Menú principal
        printf("\n========================================\n");
        printf("            GRUPO 4 - MENU PRINCIPAL       \n");
        printf("========================================\n");
        printf("1. Ejecutar Vector \n");
        printf("2. Ejecutar Matriz \n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");

        if (scanf("%d", &opcion) != 1) {
            printf("\nError: Entrada no valida.\n");
            while (getchar() != '\n'); // Limpiar
            continue;
        }

        switch (opcion) {
            case 1: {
                  int n,i,j;

    printf("Ingrese la cantidad de vectores\n");
    scanf("%d",&n);

    float vector[n];

    for(i=0 ; i<n ; i++){
        printf("Ingrese el vector a[%d]: ", i+1);
        scanf("%f", &vector[i]);
        while(vector[i]<0){
            printf("Ingrese un valor positivo:\n");
            scanf("%f", &vector[i]);
        }
    }

    printf("Los vectores son:\n");
    for(i=0 ; i<n ; i++){
        printf("%.2f ", vector[i]);
    }
    break;
            }
            case 2: {
                int fila, columna, i, j, n, m;

    //El usuario debe ingresar los valores de filas y columnas de la matriz
    printf("Ingrese la cantidad de filas que tendra la matriz\n");
    scanf("%d",&i);
    printf("Ingrese la cantidad de columnas que tendra la matriz\n");
    scanf("%d",&j);

    //Declaramos la matriz
    float matriz[i][j];


    for( fila=0 ; fila<i ; fila++){
        for( columna=0 ; columna <j ; columna++ ){
            printf("Ingrese el valor de a[%d][%d]: ", fila+1, columna+1 );
            scanf("%f", &matriz[fila][columna]);
            printf("\n");
            while(matriz[fila][columna]<0){
                printf("Ingrese un valor positivo:\n");
                scanf("%f", &matriz[fila][columna]);
            }
        }

    }

    for(n=0 ; n<i ; n++){
        for(m=0 ; m<j ; m++){
        printf(" %.2f ", matriz[n][m]);
        }
        printf("\n");
    }
 break;
            }
            case 3:
                printf("\nSaliendo del programa \n");
                break;
            default:
                printf("\nOpción no valida. Por favor, intente de nuevo.\n");
        }

    } while (opcion != 3);

    return 0;
}
