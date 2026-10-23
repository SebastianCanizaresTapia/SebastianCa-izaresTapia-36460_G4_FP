//Ejercicio7
//Raiz cuadrada entera de un numero
//Jhostyn Adriano Paca Pérez
//NRC:36460
#include<stdio.h>
void main(){
    int a,i,r;
    printf("Seleccione el valor para sacar su raiz entera\n");
    scanf("%d",&a);

    i=0;

    while(i*i<=a){

        i++;

    }
    i=i-1;
    printf("La raiz cuadrada entera de %d es: %d",a,i);

}
