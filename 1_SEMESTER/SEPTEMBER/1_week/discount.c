// Calcular el descuento que se le debe de aplicar a la cuenta de un cliente
// dependiendo del tipo de producto que adquiere
#include <stdio.h> 

int main(){
    char opcion;
    float precio;
    char e = 130;
    char a = 160;
    printf("¿Qu%c tipo de producto es?\n", e);
    printf("E) Electrodom%cstico\n", e);
    printf("V) Videojuegos\n");
    printf("L) Limpieza\n");
    printf("A) Automotriz\n");
    scanf("%c", &opcion);
    printf("¿Cu%cl es su precio?\n", a);
    scanf("%f", &precio);

    switch (opcion)
    {
    case 'E':
        precio*= 0.95;
        break;
    case 'V':
        precio*= 0.98;
        break;
    case 'L':
        precio*= 0.85;
        break;
    case 'A':
        precio*= 0.93;
        break;
    }
    printf("El precio final del producto es: $%f", precio);
}
