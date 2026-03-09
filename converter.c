#include <stdio.h>

int main() {

    int opcion;
    float quetzales, dolares, euros;

    printf("Convertidor de Moneda\n");
    printf("Seleccione una opcion:\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dolares a Quetzales\n");
    printf("4. Euros a Quetzales\n");

    scanf("%d", &opcion);

    switch (opcion) {

        case 1:
            printf("Ingrese cantidad en quetzales: ");
            scanf("%f", &quetzales);
            dolares = quetzales / 7.8;
            printf("Equivalente en dolares: %.2f\n", dolares);
            break;

        case 2:
            printf("Ingrese cantidad en quetzales: ");
            scanf("%f", &quetzales);
            euros = quetzales / 8.5;
            printf("Equivalente en euros: %.2f\n", euros);
            break;

        case 3:
            printf("Ingrese cantidad en dolares: ");
            scanf("%f", &dolares);
            quetzales = dolares * 7.8;
            printf("Equivalente en quetzales: %.2f\n", quetzales);
            break;

        case 4:
            printf("Ingrese cantidad en euros: ");
            scanf("%f", &euros);
            quetzales = euros * 8.5;
            printf("Equivalente en quetzales: %.2f\n", quetzales);
            break;

        default:
            printf("Opcion invalida\n");
    }

    return 0;
}