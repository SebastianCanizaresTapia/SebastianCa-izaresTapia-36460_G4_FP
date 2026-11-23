// Universidad de las Fuerzas Armadas ESPE
// Nombre: Samanta Simba
// Taller
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op = 0;

    do
    {
        printf("\n============================\n");
        printf("           MENU             \n");
        printf("============================\n");
        printf("1. Validar fecha\n");
        printf("2. Desplegar serie letras\n");
        printf("3. Desplegar serie numero\n");
        printf("4. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &op);
        system("cls");

        switch (op)
        {
            case 1:
            {
                // variables para guardar la fecha y el limite de dias

                int anio, mes, dia, diasMax;

                do {
                    printf("Ingrese el anio (1900 - 2015): ");
                    scanf("%d", &anio);
                    if (anio<1900|| anio>2015) {
                        printf("Anio fuera de intervalo, ingrese un nuevo dato \n");
                    }
                } while (anio<1900|| anio>2015);

                // Pido el mes y valido que sea un numero del 1 al 12
                do {
                    printf("Ingrese el mes (1 - 12): ");
                    scanf("%d", &mes);
                    if (mes < 1 || mes > 12) {
                        printf("Mes fuera de intervalo, ingrese un nuevo dato\n");
                    }
                } while (mes < 1 || mes > 12);

                // Restriccion de dias maximos tiene el mes que elegio
                if (mes == 2) {
                    diasMax = 29;
                } else
                    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                    diasMax = 30;
                    } else {
                    diasMax = 31;
                     }

                // verifica que no se pase del maximo permitido
                do {
                    printf("Ingrese el dia (1 - %d): ", diasMax);
                    scanf("%d", &dia);
                    if (dia < 1 || dia > diasMax) {
                        printf("Dia invalido para el mes seleccionado. Intente de nuevo.\n");
                    }
                } while (dia < 1 || dia > diasMax);

                // Guarda los nombres de los meses para mostrar la fecha en texto
                const char *meses[] = {"", "enero", "febrero", "marzo", "abril", "mayo", "junio","julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};

                printf("\n La fecha ingresada es:\n");
                printf("Fecha: %d de %s de %d\n", dia, meses[mes], anio);

                break;
            }
            case 2:
            {
                int n, i;
                char letraSup, letraInf;

                // Valida que la cantidad de terminos sea mayor que cero
                do {
                    printf("Ingrese la cantidad de terminos (mayor que 0): ");
                    scanf("%d", &n);
                    if (n <= 0) {
                        printf("Error: el numero debe ser mayor que cero.\n");
                    }
                } while (n <= 0);

                printf("\nSerie de letras:\n\n");

                // Primera fila: empieza en a y avanza de 2 en 2

                letraSup = 'a';
                for (i = 0; i < n; i++) {
                    if (letraSup <= 'z') {
                        printf(" %c \t", letraSup);
                    } else {
                        // Si ya pasa de la z, deja un espacio vacio para mantener el orden
                        printf("   \t");
                    }
                    letraSup = letraSup + 2;
                }
                printf("\n");

                // Segunda fila: imprime un guion por cada termino para separar visualmente
                for (i = 0; i < n; i++) {
                    printf("---\t");
                }
                printf("\n");

                // Tercera fila: empieza en b y avanza de 2 en 2
                letraInf = 'b';
                for (i = 0; i < n; i++) {
                    if (letraInf <= 'z') {
                        printf(" %c \t", letraInf);
                    } else {
                        // Si ya no corresponde a una letra del alfabeto, deja vacio
                        printf("   \t");
                    }
                    letraInf = letraInf + 2;
                }
                printf("\n");

                break;
            }
            case 3:
            {
                int n, i;
                // Reinicia los valores iniciales en 1 y 5 cada vez que entro a esta opcion
                int sub1 = 1, sub2 = 5;

                do {
                    printf("Ingrese la cantidad de terminos (0 o positivo): ");
                    scanf("%d", &n);
                    if (n < 0) {
                        printf("Error: no se permiten valores negativos.\n");
                    }
                } while (n < 0);

                printf("\nSerie numerica:\n");

                // Calcula cuantas parejas completas va a imprimir (division entera)
                int parejas = n / 2;

                // Imprime las parejas completas avanzando de 2 en 2 en cada subsecuencia
                for (i = 0; i < parejas; i++) {
                    printf("%d, %d", sub1, sub2);
                    sub1 = sub1 + 2;
                    sub2 = sub2 + 2;

                    // Si quedan mas terminos por mostrar se refleja una coma para separar
                    if (i < parejas - 1 || n % 2 != 0) {
                        printf(", ");
                    }
                }

                // Si la cantidad solicitada es impar, imprime un ultimo termino de la primera subsecuencia
                if (n % 2 != 0) {
                    printf("%d", sub1);
                }

                printf("\n");
                break;
            }
            case 4:
                // salida del menu
                printf("\nSalir...\n");
                break;
            default:
                printf("\nOpcion invalida. Por favor, elija una opcion entre 1 y 4.\n");
                break;
        }

    } while (op != 4);

    return 0;
}
