//Ejercicio7
//Raiz cuadrada entera
//Jhostyn Adriano Paca Pérez
//NRC:36460


#include<stdio.h>
int main(){

    int a,b,c;

    printf("Ingrese un numero para sacar su raiz cuadrada entera\n");
    scanf("%d",&a);

    while(a<=0){
        printf("ERROR: Ingrese un numero mayor a 0\n");
        scanf("%d",&a);
    }

    b=0;
    while(b*b<=a){
        b++;

    }
    b--;

    printf("La raiz cuadrada entera de %d es %d", a,b);

   return 0;

}
