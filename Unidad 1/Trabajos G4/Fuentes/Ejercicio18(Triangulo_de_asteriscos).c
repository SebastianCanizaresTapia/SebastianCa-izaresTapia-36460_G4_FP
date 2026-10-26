//Ejercicio18
//Triangulo de asteriscos
//Jhostyn Adriano Paca Pérez
//NRC:36460

#include<stdio.h>
int main(){

    int i, j, k, n;

    printf("Dar un valor para la piramide\n");
    scanf("%d",&n);

    while(n<1){
        printf("ERROR: Dar un valor mayor o igial a 1\n");
        scanf("%d",&n);
    }

    for(i=1; i<=n ; i++){

        for(k=1 ; k<=n-i ; k++){

        printf(" ");
        }

        for(j=1 ; j<=2*i-1; j++ ){
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
