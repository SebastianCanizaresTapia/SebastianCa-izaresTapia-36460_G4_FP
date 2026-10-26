//Ejercicio19
//Segundo mayor de una secuencia
//Sebastián Cañizares / Samanta Simba / Jhostyn Adriano Paca Pérez
//NRC:36460

#include<stdio.h>
int main(){
    int num, mayor, segundo;

    mayor=0;
    segundo=0;

    printf("Ingrese n cantidad de numeros (escriba 0 para terminar el programa)\n");


    do{
        scanf("%d",&num);

        if(num>0){

            if(num>mayor){
                segundo = mayor;
                mayor = num;
            }
            else{
                if( num<mayor && num>segundo ){
                    segundo=num;
                }
            }
        }

    }
    while(num!=0);

    if(mayor==0){
        printf("No se ingresaron valores validos\n");
    }
    else{
        printf("El numero mayor es %d\n",mayor);

        if(segundo==0){
            printf("No existe un segundo valor distinto\n");
        }
            else
            {
                printf("El segundo mayor es %d",segundo);
            }
        }

    return 0;
}
