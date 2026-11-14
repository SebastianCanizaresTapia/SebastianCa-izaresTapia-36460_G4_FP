//Universidad de las fuerzas Armadas Espe 
//Nombre: Samanta Simba 
//Taller 1 de la unidad 2_ MENÚ
#include <stdio.h>
#include <stdlib.h> // Librería necesaria para utilizar system("cls")

int main()
{
    int op = 0;
    int fil = 0;
    int n = 0;
    int i = 0;
    int j = 0;

    // Ciclo principal del menú que se repite hasta que el usuario elija la opción de salir (3)
    do
    {
        // Muestra el menú principal de opciones en la consola
        printf("\n============================\n");
        printf("           MENU             \n");
        printf("============================\n");
        printf("1. Figura (Marco)\n");
        printf("2. Serie de Fibonacci\n");
        printf("3. Salir\n");
        printf("Elija una opcion: ");

        // Lee la opción ingresada por el usuario
        scanf("%d", &op);

        // Estructura de control para direccionar la ejecución según la opción seleccionada
        switch (op)
        {
            case 1:
            {
                // Valida que el número de filas sea mayor a cero mediante un bucle do-while
                do
                {
                    printf("Ingrese numero de filas (> 0): ");
                    scanf("%d", &fil);

                    if (fil <= 0)
                    {
                        printf("Error: El numero de filas debe ser mayor a cero.\n");
                    }
                }
                while (fil <= 0);

                // Bucles anidados para recorrer las filas y columnas y dibujar el marco exterior con asteriscos
                for (i = 0; i < fil; i++)
                {
                    for (j = 0; j < fil; j++)
                    {
                        // Imprime asteriscos en los bordes de la matriz y espacios en blanco en el interior
                        if ((i == 0) || (i == fil - 1) || (j == 0) || (j == fil - 1))
                        {
                            printf("* ");
                        }
                        else
                        {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }

                // Pausa la ejecución para que el usuario pueda ver la figura antes de limpiar la pantalla
                printf("\nPresione Enter para volver al menu...");
                while (getchar() != '\n'); // Limpia el buffer de entrada
                getchar(); // Espera a que el usuario presione una tecla
                break;
            }

            case 2:
            {
                // Solicita la cantidad de términos asegurando que sea un número positivo
                do
                {
                    printf("Ingrese numero de terminos (> 0): ");
                    scanf("%d", &n);
                    if (n <= 0)
                    {
                        printf("Error: Ingrese un numero positivo de terminos.\n");
                    }
                }
                while (n <= 0);

                int a = 0;
                int b = 1;
                int c = 0;

                printf("Serie: ");

                // Bucle iterativo para calcular y mostrar cada término de la serie de Fibonacci
                for (i = 1; i <= n; i++)
                {
                    if (i == 1)
                    {
                        c = 0;
                    }
                    else if (i == 2)
                    {
                        c = 1;
                    }
                    else
                    {
                        c = a + b;
                        a = b;
                        b = c;
                    }

                    // Imprime los números separados por comas, evitando la coma en el último término
                    if (i == n)
                    {
                        printf("%d", c);
                    }
                    else
                    {
                        printf("%d, ", c);
                    }
                }
                printf("\n");

                // Pausa la ejecución para que el usuario pueda visualizar la serie generada
                printf("\nPresione Enter para volver al menu...");
                while (getchar() != '\n'); // Limpia el buffer de entrada
                getchar(); // Espera a que el usuario presione una tecla
                break;
            }

            case 3:
            {
                // Mensaje de despedida antes de finalizar el programa
                printf("Gracias por entrar. ¡Hasta luego!\n");
                break;
            }

            default:
            {
                // Maneja los casos donde el usuario ingresa un número de opción no válido
                printf("Opcion invalida. Intente de nuevo.\n");
                break;
            }
        }

        // Limpia la pantalla de la consola cada vez que termina un proceso o se repite el ciclo del menú
        system("cls");

    } while (op != 3);

    return 0;
}
