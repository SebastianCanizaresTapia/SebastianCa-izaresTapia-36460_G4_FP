#include <stdio.h>
#include <stdlib.h >

//Prototipos
void  mostrarMenu(void);
float leerMonto(void);
int   quiereIngresar(void);
int   validarSaldo(float *saldo);
void  registrarCompra(float *saldo);
void  registrarVenta(float *saldo);
void  ingresarDinero(float *saldo);
void  mostrarSaldo(float saldo);

// main: solo coordina
int main() {
    float saldo;
    int opcion;

    printf("Cuanto dinero dispone por el momento?\n");
    scanf("%f", &saldo);

    // Si no tiene dinero, se le ofrece ingresar. Si no quiere, termina el programa
    if (validarSaldo(&saldo) == 0) {
        return 0;
    }

    printf("Que es lo que has hecho el dia de hoy?\n");

    do {
        mostrarMenu();
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: registrarCompra(&saldo); break;
            case 2: registrarVenta(&saldo);  break;
            case 3: ingresarDinero(&saldo);  break;
            case 4: mostrarSaldo(saldo);     break;
            case 5: printf("Adios\n");       break;
            default: printf("Elige una opcion valida porfa :c\n");
        }

        // Si se quedo sin dinero, no avanza hasta ingresar o decidir salir
        if (opcion != 5 && validarSaldo(&saldo) == 0) {
            opcion = 5;   //no quiso ingresar: se termina el ciclo
        }
    } while (opcion != 5);

    return 0;
}

//Devuelve 1 si el saldo quedo positivo y 0 si el usuario decidio no ingresar dinero.
//Recibe la DIRECCION del saldo porque puede modificarlo.
int validarSaldo(float *saldo) {
    while (*saldo <= 0) {
        printf("Lo siento, debes tener algo de dinero para seguir con el programa\n");
        if (quiereIngresar() == 1) {
            ingresarDinero(saldo);   //saldo ya es una direccion: sin &
        } else {
            printf("Adios :v\n");
            return 0;
        }
    }

    return 1;
}

//Funciones

void mostrarMenu(void) {
    printf("\nELIGE UNA OPCION\n");
    printf("1: He comprado....\n");
    printf("2: He vendido.....\n");
    printf("3: Quiero ingresar dinero\n");
    printf("4: Cuanto dinero tengo por el momento?\n");
    printf("5: Salir\n\n");
}

//Lee un monto y repite mientras no sea mayor que 0
float leerMonto(void) {
    float monto;
    do {
        scanf("%f", &monto);
        if (monto <= 0) {
            printf("El monto debe ser mayor que 0. Intenta de nuevo: ");
        }
    } while (monto <= 0);
    return monto;
}

//Devuelve 1 si el usuario quiere ingresar dinero y 0 si no
int quiereIngresar(void) {
    int opcion;
    printf("Quieres ingresar dinero?\n");
    printf("1: Si\n2: No\n");
    scanf("%d", &opcion);
    return opcion == 1;
}

//Recibe la DIRECCION del saldo para poder modificarlo
void registrarCompra(float *saldo) {
    char producto[50];
    float gasto;

    printf("Que has comprado?\n");
    scanf("%49s", producto);
    printf("Cuanto te costo el/la %s?\n", producto);
    gasto = leerMonto();
    *saldo = *saldo - gasto;
}

void registrarVenta(float *saldo) {
    char producto[50];
    float ingreso;

    printf("Que has vendido?\n");
    scanf("%49s", producto);
    printf("A cuanto has vendido tu %s?\n", producto);
    ingreso = leerMonto();
    *saldo = *saldo + ingreso;
}

void ingresarDinero(float *saldo) {
    printf("Cuanto dinero quieres ingresar?\n");
    *saldo = *saldo + leerMonto();
}

//Solo muestra el saldo: no lo modifica, asi que basta una copia
void mostrarSaldo(float saldo) {
    printf("Tu saldo actual es de %.2f\n", saldo);
}
