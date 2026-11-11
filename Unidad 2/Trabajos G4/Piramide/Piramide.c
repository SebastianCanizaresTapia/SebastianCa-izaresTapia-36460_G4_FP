//Jhostyn Adriano Paca Perez
//NRC:36460
#include<stdio.h>
int main (){
	int i, j, k, n;

	do{
		printf("Ingrese la cantidad de lineas del triangulos");
		scanf("%d",&n);
	}while(n<=0);

	for(i=1 ; i<=n ; i++){

        for(k=1 ; k<=n-i ; k++){
            printf(" ");
        }

		for(j=1 ; j<=i ; j++){
			printf(" *");
		}

		printf("\n");


	}

	return 0;
}
