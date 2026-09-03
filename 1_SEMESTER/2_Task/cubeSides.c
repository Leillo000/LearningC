#include <stdio.h>
#include <math.h>

int main(){
    double side; // Lado del cubo
    double perimeter;
    double volume;
    char i = 161;
    printf("Dame el valor de uno de los lados del cubo\n");
    scanf("%lf", &side); // & indica la direccion de memoria donde guardar el valor
    volume = pow(side, 3);
    perimeter = side * 12;
    printf("Volumen del c%crculo: %lf\n", i, volume, i);
    printf("Per%cmetro del c%crculo: %lf\n", i, i, perimeter);
    return 0;
}