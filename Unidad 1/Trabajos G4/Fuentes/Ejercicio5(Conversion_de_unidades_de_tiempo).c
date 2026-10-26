//Ejercicio5
//Conversion de unidades de tiempo
//Sebastián Cañizares / Samanta Simba / Jhostyn Adriano Paca Pérez
//NRC:36460


#include<stdio.h>
int main(){

    long int c, d, h, m, s;
    printf("Ingrese el total de segundos en el evento\n");
    scanf("%d",&c);

    while(c<0){

        printf("ERROR: Ingrese un numero positivo\n");
        scanf("%d",&c);

    }

    d=c/86400;
    c=c%86400;

    h=c/3600;
    c=c%3600;

    m=c/60;
    s=c%60;

    printf("El evento tuvo un total de %d dias, %d horas, %d minutos y %d segundos",d, h, m, s);

    return 0;
}
