//Ejercicio13
//Numero capicua
//Jhostyn Adriano Paca Pérez
//NRC:36460

#include<stdio.h>
int main(){

    int n, aux, d, i;

    printf("Ingrese un numero entero positivo\n");
    scanf("%d",&n);

    while(n<0){
        printf("ERROR: Ingrese un numero entero positivo\n");
        scanf("%d",&n);
    }

    aux=n;
    i=0;

    while(n>0){
        d=n%10;
        i=i*10+d;
        n=n/10;
    }

    if(aux==i){
        printf("El numero %d es capicua", aux);
    }
    else
    {
        printf("El numero %d no es capicua",aux);
    }

    return 0;
}
