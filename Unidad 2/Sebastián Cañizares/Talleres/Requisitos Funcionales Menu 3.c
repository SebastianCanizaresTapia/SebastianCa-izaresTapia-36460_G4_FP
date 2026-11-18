//Ejercicio 1.3: Requisitos Funcionales
//Elaborado por: Sebastián Cañizares
//NRC:36460
//Enunciado: Creacion de un codigo que sea un menu de 4 opciones que cuentan con requisitos fundamentales

#include <stdio.h>
#include <stdlib.h> //Nueva biblioteca que permite usar la funcion de system (cls)

void limpiar() {
    while (getchar() != '\n'); // Funcion que permite limpiar residuos a pantalla
    getchar();                 // funcion que espera a que el usuario presione enter
    system("cls || clear");
}
//Segundo Requisito Fundamental:  validacion de fecha
void validarFecha() {
    int a = 0, m = 0, d = 0, max;
    while (a < 1900 || a > 2015) { printf("Ingrese anio entre (1900-2015): "); scanf("%d", &a); }
    while (m < 1 || m > 12) { printf("Ingrese un mes en numeros (1-12): "); scanf("%d", &m); }
    max = (m == 2) ? 29 : ((m == 4 || m == 6 || m == 9 || m == 11) ? 30 : 31);
    while (d < 1 || d > max) { printf("Dia (1-%d): ", max); scanf("%d", &d); }

    char *meses[] = {"", "enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
    printf("\nLa fecha ingresada es: %d de %s de %d\n", d, meses[m], a);
}

int main() { //Es la función principal del programa que maneja el flujo de ejecución
    int op;
    do {
        printf("Menu Principal\n1.Validar fecha\n2.Serie letras\n3.Serie numero\n4.Salir\nOpcion numerica: "); //ciclo do while continuo hasta validar una opcion igual a la 4
        if (scanf("%d", &op) != 1) { printf("\nOpcion no valida\n"); limpiar(); continue; }
        if (op >= 1 && op <= 3) {
            if (op == 1) validarFecha();
            else printf("\nOpcion %d en desarrollo\n", op);
            printf("\nPresione Enter para regresar");
            limpiar();
        } else if (op != 4) {
            printf("\nOpcion no valida\n");
            limpiar();
        }
    } while (op != 4);
    return 0;
}
