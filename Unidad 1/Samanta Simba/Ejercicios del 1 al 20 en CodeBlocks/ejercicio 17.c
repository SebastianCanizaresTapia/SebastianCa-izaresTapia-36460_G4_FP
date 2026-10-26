//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.17. Conversión de decimal a binario
#include <stdio.h>

int main() {
    int n, resto, pos;
    long binario; // Usamos long para que soporte números binarios grandes

    printf("Ingrese un numero en base 10: ");
    scanf("%d", &n);

    binario = 0;
    pos = 1;

    while (n > 0) {
        resto = n % 2;
        binario = binario + (resto * pos);
        n = n / 2;
        pos = pos * 10;
    }

    printf("La representacion en binario es: %ld\n", binario);

    return 0;
}
