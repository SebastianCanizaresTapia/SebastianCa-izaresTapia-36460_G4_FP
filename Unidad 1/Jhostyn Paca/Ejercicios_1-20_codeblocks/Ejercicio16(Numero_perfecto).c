//Ejercicio16
//Numero perfecto
//Jhostyn Adriano Paca Pérez
//NRC:36460

#include<stdio.h>
int main(){

    int n, i, s;

    // Solicitar un numero positivo
    printf("Ingrese un numero positivo\n");
    scanf("%d", &n);

    // Validar que el numero sea positivo
    while(n<=0){
        printf("ERROR: Ingrese un numero positivo\n");
        scanf("%d",&n);
    }

    s=0;
    
    // Calcular la suma de los divisores propios
    for( i=1 ; i<=n-1 ; i++ ){
        if(n%i==0){
            s=s+i;
        }
    }

    // Determinar si el numero es perfecto
    if(s==n){
        printf("El numero %d es perfecto", n);
    }
    else{
        printf("El numero %d no es perfecto",n);
    }

    return 0;
}
