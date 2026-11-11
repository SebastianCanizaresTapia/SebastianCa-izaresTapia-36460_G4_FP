//Ejercio 1.11
//Elaborado por Sebastián Cañizares
//NRC: 36460
//Triangulo de asteriscos

#include <stdio.h>
void main ()
{


  int i,j,n;
  do
  {
    printf("Ingrese lineas de triangulos: ");
    scanf("%d, &n");
  }while(n<=0);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
  }
}
