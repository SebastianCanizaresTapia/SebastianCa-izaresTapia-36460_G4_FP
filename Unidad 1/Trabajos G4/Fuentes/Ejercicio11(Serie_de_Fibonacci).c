//Ejercicio11
//Serie de Fibonacci
//Jhostyn Adriano Paca Pérez
//NRC:36460

#include<stdio.h>
int main(){
    int n, a, b, c, i;

    printf("Ingrese la cantidad de numeros para la serie e Fibonacci\n");
    scanf("%d", &n);

    while (n<=0){
        printf("Ingrese una cantidad positiva");
        scanf("%d",&n);
    }

    a=0;
    b=1;

    printf("%d %d", a, b);

    for(i=3 ; i<=n ; i++){
        c=a+b;
        printf(" %d ",c);
        a=b;
        b=c;
    }

    return 0;
}
