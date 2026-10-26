//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//EJERCICIO 1- Media de dos valores
//Desarrolla un programa que ingrese dos números por teclado e imprima su media.Realiza y completa la tabla de objetos del problema 1.1:


#include <stdio.h>

int main()
{
    int num_1, num_2;
    double media;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num_1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num_2);

    media = (num_1 + num_2) / 2.0;

    printf("La media de los dos valores ingresados es: %.2f\n", media);

    return 0;
}
