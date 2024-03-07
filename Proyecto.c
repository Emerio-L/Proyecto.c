#include <stdio.h>

// Definición de tasas de cambio
#define GTQ_TO_USD 0.13
#define GTQ_TO_EUR 0.11
#define USD_TO_GTQ 7.71
#define EUR_TO_GTQ 8.96

int main() {
    int opcion;
    float cantidad;

    printf("Bienvenido al convertidor de monedas\n");
    printf("Seleccione la moneda de origen:\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dólares estadounidenses (USD)\n");
    printf("3. Euros (EUR)\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    switch (opcion) {
        case 1: // Convertir desde quetzales (GTQ)
            printf("%.2f GTQ equivale a:\n", cantidad);
            printf("%.2f USD\n", cantidad * GTQ_TO_USD);
            printf("%.2f EUR\n", cantidad * GTQ_TO_EUR);
            break;
        case 2: // Convertir desde dólares estadounidenses (USD)
            printf("%.2f USD equivale a:\n", cantidad);
            printf("%.2f GTQ\n", cantidad * USD_TO_GTQ);
            printf("%.2f EUR\n", cantidad * USD_TO_GTQ * GTQ_TO_EUR);
            break;
        case 3: // Convertir desde euros (EUR)
            printf("%.2f EUR equivale a:\n", cantidad);
            printf("%.2f GTQ\n", cantidad * EUR_TO_GTQ);
            printf("%.2f USD\n", cantidad * EUR_TO_GTQ * GTQ_TO_USD);
            break;
        default:
            printf("Opción no válida\n");
            break;
    }

    return 0;
}
