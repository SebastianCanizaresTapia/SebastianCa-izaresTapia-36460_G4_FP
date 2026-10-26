//Ejercicio6
//Maximo, minimo y media de alturas
//Sebastián Cañizares / Samanta Simba / Jhostyn Adriano Paca Pérez
//NRC:36460


#include<stdio.h>
int main(){

    int i, n;
    float a, MAX, MIN, m;

    printf("Ingrese la cantidad de edificios\n");
    scanf("%d",&n);

    while (n<=0){

        printf("ERROR: La cantidad de edificios DEBE ser positiva\n");
        scanf("%d",&n);

    }

    printf("Ingrese la altura del edificio 1:\n");
    scanf("%f", &a);

    MAX=a;
    MIN=a;
    m=a;

    for(i=2 ; i<=n ; i++){

        printf("Ingrese la altura del edificio %d:\n",i );

        scanf("%f",&a);


        if (a > MAX) {
            MAX = a;
        }
        if (a < MIN) {
            MIN = a;
        }

         m=m+a;

    }


    m=m/n;

    printf("La altura maxima de los %d edificios es %.2f, \nla altura minima es %.2f \ny la media de todos los edificios ingresados es %.2f", n, MAX, MIN, m);

    return 0;
}
