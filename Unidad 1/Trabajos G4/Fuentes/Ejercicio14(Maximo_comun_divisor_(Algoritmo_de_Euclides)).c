//Ejercicio14
//Maximo comun divisor (Algoritmo de Euclides)
//Sebastián Cañizares / Samanta Simba / Jhostyn Adriano Paca Pérez
//NRC:36460

#include<stdio.h>
int main(){

    int a, b, r;

    printf("Ingrese el primer numero\n");
    scanf("%d",&a);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&b);

     while (a <= 0 || b <= 0) {
        printf("ERROR: Ingrese numeros enteros positivos\n");
        scanf("%d", &a);
        scanf("%d", &b);
     }
    int originalA = a, originalB = b;

    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }

    printf("El MCD entre %d y %d es: %d\n", originalA, originalB, a);

    return 0;
}

