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
                int anio, mes, dia, diasMax;

                do {
                    printf("Ingrese el anio (1900 - 2015): ");
                    scanf("%d", &anio);
                    if (anio < 1900 || anio > 2015) {
                        printf("Anio fuera de intervalo, ingrese un nuevo dato \n");
                    }
                } while (anio < 1900 || anio > 2015);

                do {
                    printf("Ingrese el mes (1 - 12): ");
                    scanf("%d", &mes);
                    if (mes < 1 || mes > 12) {
                        printf("Mes fuera de intervalo, ingrese un nuevo dato\n");
                    }
                } while (mes < 1 || mes > 12);
                if (mes == 2) {
                    diasMax = 29;
                } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                    diasMax = 30;
                } else {
                    diasMax = 31;
                }


                do {
                    printf("Ingrese el dia (1 - %d): ", diasMax);
                    scanf("%d", &dia);
                    if (dia < 1 || dia > diasMax) {
                        printf("Dia invalido para el mes seleccionado. Intente de nuevo.\n");
                    }
                } while (dia < 1 || dia > diasMax);

                const char *meses[] = {"", "enero", "febrero", "marzo", "abril", "mayo", "junio","julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};

                printf("\n La fecha ingresada es:\n");
                printf("Fecha: %d de %s de %d\n", dia, meses[mes], anio);


                break;
            }
            case 2:
            {
                break;
            }
            case 3:
            {
                break;

            }
            case 4:
                printf("\nSaliendo del programa. ¡Hasta luego!\n");
                break;
            default:
                printf("\nOpcion invalida. Por favor, elija una opcion entre 1 y 4.\n");

                break;
        }

    } while (op != 4);

    return 0;
}
