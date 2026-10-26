//Ejercicio1
//Media de dos valores
//Sebastián Cañizares / Samanta Simba / Jhostyn Adriano Paca Pérez
//NRC:36460


#include<stdio.h>
int main(){

    float a,b,c;

    printf("Ingrese el valor del primer numero\n");
    scanf("%f",&a);


    while(a<0 || a>20){

        printf("Ingrese un valor positivo en el rango de 0 a 20\n");
        scanf("%f",&a);

    }

    printf("Ingrese el valor del segundo numero\n");
    scanf("%f",&b);


    while(b<0 || b>20){

        printf("Ingrese un valor positivo en el rango de 0 a 20\n");
        scanf("%f",&b);
    }


    c=(a+b)/2;
    printf("La media de ambos numeros es: %f",c);
    return 0;

}
