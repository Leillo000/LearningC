#include <stdio.h>

int main(){
    float pricePerMeter;
    float squaredMeters;
    float total;
    float comision;
    
    char o = 162;

    printf("Dame los metros cuadrados del terreno: \n");
    scanf("%f", &squaredMeters);
    printf("Dame el precio por metro cuadrado: \n");
    scanf("%f", &pricePerMeter );
    total = squaredMeters * pricePerMeter;
    comision = total * 0.02;
    printf("Precio del terreno: \t$%f\n", total);
    printf("Comisi%cn: \t\t$%f\n", o, comision);
    printf("========================================\n");
    printf("Precio total: \t\t$%f", (total + comision));
    return 0;
}