#include <stdio.h>
#include <stdlib.h>

//Prototipos
int  leerEnRango(int min, int max);
int  diasDelMes(int mes);
void imprimirMes(int mes);
void validarFecha(void);
void serieLetras(void);
void serieNumeros(void);

//main: menú principal
int main() {
    int opcion;

    do {
        printf("1. Validar fecha\n");
        printf("2. Desplegar serie letras\n");
        printf("3. Desplegar serie numero\n");
        printf("4. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: validarFecha();  break;
            case 2: serieLetras();   break;
            case 3: serieNumeros();  break;
            case 4: printf("Salir...\n"); break;
            default: printf("Opcion no valida\n");
        }

        if (opcion != 4) {
            system("pause");
            system("cls");
        }
    } while (opcion != 4);

    return 0;
}

//Funciones

//Imprime el nombre del mes
void imprimirMes(int mes) {
    switch (mes) {
        case 1:  printf("Enero");      break;
        case 2:  printf("Febrero");    break;
        case 3:  printf("Marzo");      break;
        case 4:  printf("Abril");      break;
        case 5:  printf("Mayo");       break;
        case 6:  printf("Junio");      break;
        case 7:  printf("Julio");      break;
        case 8:  printf("Agosto");     break;
        case 9:  printf("Septiembre"); break;
        case 10: printf("Octubre");    break;
        case 11: printf("Noviembre");  break;
        case 12: printf("Diciembre");  break;
    }
}

//Opción 1: validar fecha
void validarFecha() {
    int anio, mes, dia;

    printf("Anio ");
    anio = leerEnRango(1900, 2015);

    printf("Mes ");
    mes = leerEnRango(1, 12);

    printf("Dia ");
    dia = leerEnRango(1, diasDelMes(mes));

    printf("%d de ", dia);
    imprimirMes(mes);
    printf(" de %d\n", anio);
}

// Pide un entero y repite mientras esté fuera de [min, max]
int leerEnRango(int min, int max) {
    int valor;
    do {
        printf("(entre %d y %d): ", min, max);
        scanf("%d", &valor);
    } while (valor < min || valor > max);
    return valor;
}

//Cantidad máxima de días según el mes
int diasDelMes(int mes) {
    switch (mes) {
        case 4: case 6: case 9: case 11:
			return 30;
        case 2:
			return 29;
        default:
			return 31;
    }
}

//Opción 2: serie de letras
void serieLetras(void) {
    int n, i;
    char letra;

    printf("Cantidad de terminos ");
    n = leerEnRango(1, 1000);

    // Fila 1: a, c, e, g... (de 2 en 2)
    letra = 'a';
    for (i = 0; i < n; i++) {
        printf("%c ", letra);
        letra += 2;
    }
    printf("\n");

    // Fila 2: guiones
    for (i = 0; i < n; i++) {
        printf("- ");
    }
    printf("\n");

    // Fila 3: b, d, f, h... (de 2 en 2)
    letra = 'b';
    for (i = 0; i < n; i++) {
        printf("%c ", letra);
        letra += 2;
    }
    printf("\n");
}

//Opción 3: serie de números
void serieNumeros(void) {
    int n, i;
    int a = 1;   /* primera subsecuencia: 1, 3, 5... */
    int b = 5;   /* segunda subsecuencia: 5, 7, 9... */

    printf("Cantidad de terminos ");
    n = leerEnRango(0, 1000);

    //a y b se reinician en 1 y 5 cada vez porque se declaran aquí dentro
    for (i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            printf("%d ", a);
            a += 2;
        } else {
            printf("%d ", b);
            b += 2;
        }
    }
    printf("\n");
}
