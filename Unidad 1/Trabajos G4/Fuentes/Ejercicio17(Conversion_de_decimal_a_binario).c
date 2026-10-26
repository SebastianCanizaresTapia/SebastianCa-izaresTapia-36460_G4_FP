//Ejercicio17
//Conversion de decimal a binario
//Jhostyn Adriano Paca Pérez
//NRC:36460

#include<stdio.h>
int main(){

    int n, r, binario=0, base=1, original;

    printf("Ingrese un numero para sacar su equivalente en binario\n");
    scanf("%d",&n);

    while(n<0){
            printf("ERROR: Ingrese un numero positivo\n");
            scanf("%d",&n);
    }

    original=n;

    while(n>0){
        r = n % 2;
        binario = r * base + binario;
        base = base* 10;
        n = n / 2;
    }

    printf("El equivalente al numero %d en binario es: %ld\n", original, binario);

    return 0;
}
