//Ejercicio4
//Intervalo
//Sebastián Cañizares / Samanta Simba / Jhostyn Adriano Paca Pérez
//NRC:36460


#include<stdio.h>
int main(){

    int a;
    printf("Ingrese un numero que se encuentre en el intervalo de [0,10]\n");

    scanf("%d",&a);

    while (a<0 || a>10){

        printf("ERROR: Ingrese un numero en el intervalo de [0,10]\n");
        scanf("%d",&a);
    }

    printf("%d Existe en el intervalo de [0,10]",a);


    return 0;

}
