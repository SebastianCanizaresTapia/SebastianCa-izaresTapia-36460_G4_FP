
#include <stdio.h>

// Menu2
// Jhostyn Adriano Paca Perez
//36460
void vector();
void matriz();

int main() {
    int opcion;

    do {
        printf("\n========================================\n");
        printf("          GRUPO 4 - MENU PRINCIPAL\n");
        printf("========================================\n");
        printf("1. Ejecutar Vector\n");
        printf("2. Ejecutar Matriz\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                vector();
                break;

            case 2:
                matriz();
                break;

            case 3:
                printf("\nSaliendo del programa...\n");
                break;

            default:
                printf("\nOpcion no valida.\n");
        }

    } while (opcion != 3);

    return 0;
}

// Funcion para ejecutar el vector
void vector() {
    int n, i;

    printf("\n========== EJECUTAR VECTOR ==========\n");

    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("Error: Ingrese un numero mayor que 0: ");
        scanf("%d", &n);
    }

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Ingrese el valor entero para a[%d]: ", i + 1);
        scanf("%d", &a[i]);

        while (a[i] <= 0) {
            printf("Error: El valor debe ser mayor que 0: ");
            scanf("%d", &a[i]);
        }
    }

    printf("\nLos elementos del vector son:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
}

// Funcion para ejecutar la matriz
void matriz() {
    int filas, columnas, i, j;

    printf("\n========== EJECUTAR MATRIZ ==========\n");

    printf("Ingrese la cantidad de filas: ");
    scanf("%d", &filas);

    while (filas <= 0) {
        printf("Error: Ingrese filas mayores que 0: ");
        scanf("%d", &filas);
    }

    printf("Ingrese la cantidad de columnas: ");
    scanf("%d", &columnas);

    while (columnas <= 0) {
        printf("Error: Ingrese columnas mayores que 0: ");
        scanf("%d", &columnas);
    }

    float a[filas][columnas];

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Ingrese el valor flotante de a[%d][%d]: ",
                   i + 1, j + 1);

            scanf("%f", &a[i][j]);

            while (a[i][j] <= 0) {
                printf("Error: El valor debe ser mayor que 0: ");
                scanf("%f", &a[i][j]);
            }
        }
    }

    printf("\nLa matriz resultante es:\n");

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf(" %.2f ", a[i][j]);
        }
        printf("\n");
    }
}

