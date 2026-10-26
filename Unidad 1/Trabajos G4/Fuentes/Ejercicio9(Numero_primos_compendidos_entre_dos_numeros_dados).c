//Ejercicio9
//Numeros primos comprendidos entre dos numeros dados
//Sebastián Cañizares / Samanta Simba / Jhostyn Adriano Paca Pérez
//NRC:36460


#include<stdio.h>
int main(){

    int n, x, i, j, dom1, dom2;

    printf("Ingrese desde donde empezaran a contarse los numeros primos\n");
    scanf("%d", &dom1);

    printf("Ingrese donde terminara el intervalo\n");
    scanf("%d", &dom2);

    n=0;

    while(dom1 < 0 || dom2 < dom1){

        printf("ERROR\n");
        printf("Ingrese desde donde empezaran a contarse los numeros primos\n");
        scanf("%d", &dom1);

        printf("Ingrese donde terminara el intervalo\n");
        scanf("%d", &dom2);
    }

    printf("Los numeros primos encontrados en ese intervalo son: ");

    for( i=dom1 ; i<=dom2 ; i++){
        x=0;

        for( j=1 ; j<=i ; j++){

            if(i%j==0){

                x++;
            }
        }
        if (x==2){

            n=n+1;

            printf("%d ", i);
        }

    }
    printf("\nExisten %d numeros primos en el dominio de %d hasta %d\n", n, dom1, dom2);

    return 0;
}
