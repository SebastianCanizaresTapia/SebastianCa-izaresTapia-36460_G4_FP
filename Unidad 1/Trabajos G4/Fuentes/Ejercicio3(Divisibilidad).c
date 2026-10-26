//Ejercicio3
//Divisible
//Jhostyn Adriano Paca Pérez
//NRC:36460


#include<stdio.h>

int main(){

    int a,b,c;

    printf("Ingrese primer valor\n");
    scanf("%d",&a);

    printf("Ingres el segundo valor\n");
    scanf("%d",&b);

    c=a%b;
    if(c==0){

        printf("%d es divisible para %d",a,b);
    }
    else{

        printf("%d no es divisible para %d" ,a ,b);

    }

    return 0;
}
