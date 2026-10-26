//Ejercicio12
//Suma de digitos
//Jhostyn Adriano Paca Pérez
//NRC:36460

#include<stdio.h>
int main(){

    int n, d, s;

    printf("Ingrese un numero entero positivo\n");
    scanf("%d",&n);

    s=0;

    while (n!=0){
        d=n%10;
        s=s+d;
        n=n/10;
    }

    printf("La suma de los digitos es: %d", s);

    return 0;
}
