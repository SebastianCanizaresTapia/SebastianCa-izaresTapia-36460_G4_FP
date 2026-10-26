//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.2. Valor absoluto de x al cubo

#include <stdio.h>

int main()
{
    int x, val_abst, r_final;

    printf("Ingrese un número: ");
    scanf("%d", &x);

    if (x < 0) {
        val_abst = -x;
    } else {
        val_abst = x;
    }

    r_final = val_abst * val_abst * val_abst;

    printf("El resultado es: %d\n", r_final);

    return 0;
}
