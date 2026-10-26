//Ejercicio15
//Año bisiesto
//Jhostyn Adriano Paca Pérez
//NRC:36460

#include<stdio.h>
int main(){

    int a;

    printf("Ingrese el año para ver si es bisiesto o no:\n");
    scanf("%d",&a);

    while (a<=0){
        printf("Ingrese un año mayor a 0");
        scanf("%d",&a);
    }

    if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0)){
        printf("%d es bisiesto",a);
    }
    else
    {
        printf("%d no es bisiesto",a);
    }

    return 0;
}
