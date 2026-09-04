#include <stdio.h>

int main(){
    int boxes;
    float pricePerBox;
    float area;
    const float AREA_BOX = 2.26;
    char a = 134;
    printf("Ingresa el %crea a cubrir:\n", a);
    scanf("%f", &area);
    printf("Ingresa el precio por caja:\n");
    scanf("%f", &pricePerBox);
    boxes = area / AREA_BOX;
    printf("Cantidad de cajas a comprar: \t%d\n", boxes);
    printf("Precio total: \t\t\t$%f", boxes * pricePerBox);
}