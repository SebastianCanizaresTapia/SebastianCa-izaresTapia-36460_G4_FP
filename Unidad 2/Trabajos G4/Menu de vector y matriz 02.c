// Grupo 4
// Integrantes: Jhostyn Paca, Samanta Simba, Sebastian Cañizares
// Menú que ejecuta un vector y una matriz de tipo flotante

#include <stdio.h>

int main() {
    int opcion;

    // Bucle principal para mantener el menú activo hasta que el usuario decida salir
    do {
        // Menú principal
        printf("\n========================================\n");
        printf("            GRUPO 4 - MENU PRINCIPAL       \n");
        printf("========================================\n");
        printf("1. Ejecutar Vector \n");
        printf("2. Ejecutar Matriz \n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");

        int op_val;
        char op_c;
        if (scanf("%d%c", &op_val, &op_c) != 2 || op_c != '\n' || op_val < 1 || op_val > 3) {
            printf("\nError: Entrada no valida. Debe ingresar una opcion entre 1 y 3.\n");
            if (op_c != '\n') {
                while (getchar() != '\n'); // Limpiar búfer
            }
            continue;
        }
        opcion = op_val;

        switch (opcion) {
            case 1: {
                int n, i;

                // RESTRICCIÓN: Validar que el tamaño del vector sea un entero válido y mayor que 0
                do {
                    printf("Ingrese la cantidad de elementos del vector (entero mayor que 0): ");
                    int temp_n;
                    char temp_c;
                    if (scanf("%d%c", &temp_n, &temp_c) != 2 || temp_c != '\n') {
                        printf("Error: Debe ingresar un numero entero valido (sin decimales ni letras).\n");
                        if (temp_c != '\n') {
                            while (getchar() != '\n'); // Limpiar
                        }
                        n = 0;
                    } else if (temp_n <= 0) {
                        printf("Error: La cantidad debe ser mayor que 0.\n");
                        n = 0;
                    } else {
                        n = temp_n;
                    }
                } while (n <= 0);

                int vector[n];

                // Llenado y validación de los elementos del vector (enteros y mayores que 0)
                for (i = 0; i < n; i++) {
                    int val;
                    char c;
                    do {
                        printf("Ingrese el valor entero para el vector a[%d]: ", i + 1);
                        if (scanf("%d%c", &val, &c) != 2 || c != '\n') {
                            printf("Error: Debe ingresar un numero entero valido (sin decimales).\n");
                            if (c != '\n') {
                                while (getchar() != '\n'); // Limpiar búfer si ingresó decimales o letras
                            }
                            val = -1; // Forzar repetición
                        } else if (val <= 0) {
                            printf("Error: El valor debe ser mayor que 0.\n");
                        }
                    } while (val <= 0);
                    vector[i] = val;
                }

                // Mostrar los elementos enteros del vector
                printf("\nLos elementos del vector son:\n");
                for (i = 0; i < n; i++) {
                    printf("%d ", vector[i]);
                }
                printf("\n");
                break;
            }

            case 2: {
                int filas, columnas, fila, columna, n, m;

                // RESTRICCIÓN: Validar que las filas sean un entero mayor que 0
                do {
                    printf("Ingrese la cantidad de filas de la matriz (entero mayor que 0): ");
                    int temp_f;
                    char temp_c;
                    if (scanf("%d%c", &temp_f, &temp_c) != 2 || temp_c != '\n') {
                        printf("Error: Debe ingresar un numero entero valido.\n");
                        if (temp_c != '\n') {
                            while (getchar() != '\n');
                        }
                        filas = 0;
                    } else if (temp_f <= 0) {
                        printf("Error: La cantidad de filas debe ser mayor que 0.\n");
                        filas = 0;
                    } else {
                        filas = temp_f;
                    }
                } while (filas <= 0);

                // RESTRICCIÓN: Validar que las columnas sean un entero mayor que 0
                do {
                    printf("Ingrese la cantidad de columnas de la matriz (entero mayor que 0): ");
                    int temp_col;
                    char temp_c;
                    if (scanf("%d%c", &temp_col, &temp_c) != 2 || temp_c != '\n') {
                        printf("Error: Debe ingresar un numero entero valido.\n");
                        if (temp_c != '\n') {
                            while (getchar() != '\n');
                        }
                        columnas = 0;
                    } else if (temp_col <= 0) {
                        printf("Error: La cantidad de columnas debe ser mayor que 0.\n");
                        columnas = 0;
                    } else {
                        columnas = temp_col;
                    }
                } while (columnas <= 0);

                // Declaración de la matriz con elementos flotantes
                float matriz[filas][columnas];

                // Llenado y validación de los elementos flotantes de la matriz (mayores que 0)
                for (fila = 0; fila < filas; fila++) {
                    for (columna = 0; columna < columnas; columna++) {
                        printf("Ingrese el valor flotante de a[%d][%d]: ", fila + 1, columna + 1);
                        if (scanf("%f", &matriz[fila][columna]) != 1) {
                            printf("Error: Entrada no valida.\n");
                            while (getchar() != '\n');
                            matriz[fila][columna] = -1; // Forzar repetición
                        }

                        while (matriz[fila][columna] <= 0) {
                            printf("Error: El valor debe ser mayor que 0. Reingrese a[%d][%d]: ", fila + 1, columna + 1);
                            scanf("%f", &matriz[fila][columna]);
                        }
                    }
                }

                // Mostrar la matriz en formato tabular
                printf("\nLa matriz resultante es:\n");
                for (n = 0; n < filas; n++) {
                    for (m = 0; m < columnas; m++) {
                        printf(" %.2f ", matriz[n][m]);
                    }
                    printf("\n");
                }
                break;
            }

            case 3:
                printf("\nSaliendo del programa...\n");
                break;

            default:
                printf("\nOpción no valida. Por favor, intente de nuevo.\n");
        }

    } while (opcion != 3);

    return 0;
}
