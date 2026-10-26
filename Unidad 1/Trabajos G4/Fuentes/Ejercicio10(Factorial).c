//Ejercicio10
//Factorial
//Sebastián Cañizares / Samanta Simba / Jhostyn Adriano Paca Pérez
//NRC:36460

#include<stdio.h>
int main(){
    int i, n, nf;

    printf("Ingrese el valor para sacar su factorial\n");
    scanf("%d",&n);

    nf=1;

    for(i=1 ; i<=n ; i++){

        nf=nf*i;
    }

    printf("El factorial de %d es %d", n, nf);

    return 0;
}
