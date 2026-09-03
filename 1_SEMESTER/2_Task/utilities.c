#include <stdio.h>

int main(){
    float materia;
    float manPower;
    float utilities;
    printf("Introduzca el monto de materia prima invertido: \n");
    scanf("%f", &materia);
    printf("Introduzca el monto de mano de obra invertida: \n");
    scanf("%f", &manPower);
    utilities = (materia + manPower) * 0.30;
    printf("Total de la venta a pagar: $%f", utilities + manPower + materia);
}