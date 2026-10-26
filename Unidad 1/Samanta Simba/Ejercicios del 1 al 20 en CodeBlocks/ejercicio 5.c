//Universidad de las Fuerzas Armadas ESPE
//Nombre: Samanta Aracely Simba Oña
//NRC:36460
//Problema 1.5. Conversión de unidades de tiempo
#include <stdio.h>

int main() {
    int C, D, H, min, seg, resto;

    printf("Ingrese los segundos: ");
    scanf("%d", &C);

    D = C / (24 * 60 * 60);
    resto = C % (24 * 60 * 60);

    H = resto / 3600;
    resto = resto % 3600;

    min = resto / 60;
    seg = resto % 60;

    printf("Dias: %d horas: %d minutos: %d segundos: %d\n", D, H, min, seg);

    return 0;
}
