#include <stdio.h>

int main(){
    float unitPrice;
    int productAmount;
    printf("Dame el precio unitario del producto: \n");
    scanf("%f", &unitPrice);
    printf("Dame la cantidad del producto: \n");
    scanf("%d", &productAmount);
    printf("Precio del producto: $%f\n", (unitPrice * productAmount));
    printf("IVA: $%f\n", (unitPrice * productAmount * 0.16));
    printf("=========================\n");
    printf("Total: $%f", (unitPrice * productAmount * 1.16));
    return 0;
}