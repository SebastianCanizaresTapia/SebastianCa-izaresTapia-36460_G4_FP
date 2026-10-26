//Ejercicio8
// Numero primo
//Jhostyn Adriano Paca Pérez
//NRC:36460

#include<stdio.h>
int main(){

    int x, n=0, i;
    printf("Ingrese un numero para veificar si es primo o no\n");
    scanf("%d",&x);

    while (x<=0){

        printf("ERROR: Ingrese un valor positivo mayor a 0\n");
        scanf("%d",&x);
    }

    for ( i=1 ; i<=x ; i++ ){

        if (x%i==0){
        n++;
        }
    }

    if(n==2){
        printf("El numero %d es primo",x);
    }
    else{
        printf("El numero %d no es primo",x);
    }

    return 0;
}
