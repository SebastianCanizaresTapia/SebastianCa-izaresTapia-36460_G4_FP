//Ejercicio16
//Numero perfecto
//Jhostyn Adriano Paca Pérez
//NRC:36460

#include<stdio.h>
int main(){

    int n, i, s;

    printf("Ingrese un numero positivo\n");
    scanf("%d", &n);

    while(n<=0){
        printf("ERROR: Ingrese un numero positivo\n");
        scanf("%d",&n);
    }

    s=0;

    for( i=1 ; i<=n-1 ; i++ ){

        if(n%i==0){
            s=s+i;
        }
    }

    if(s==n){
        printf("El numero %d es perfecto", n);
    }
    else{
        printf("El numero %d no es perfecto",n);
    }

    return 0;
}
