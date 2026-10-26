//Ejercicio2
//Valor absoluto de un numero al cubo
//Sebastián Cañizares / Samanta Simba / Jhostyn Adriano Paca Pérez
//NRC:36460


#include<stdio.h>
int main(){

    float a,b;

    printf("Ingrese el valor para sacar su valor absoluto y elevarlo al cubo\n");
    scanf("%f",&a);


    if(a<0){
        b=(-1)*(a*a*a);
    }
    else{
        b= a*a*a;
    }

    printf("El valor del valor absoluto de %.2f al cubo es: %.2f",a,b);

    return 0;

}
