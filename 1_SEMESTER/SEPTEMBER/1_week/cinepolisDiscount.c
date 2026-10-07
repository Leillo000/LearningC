// Cinepolis necesita un programa para calcular el precio de una entrada
// segun la sala elegida y la edad del cliente

#include <stdio.h>
#include <math.h>

int main(){
    int room;
    int age;
    // Asi es como podemos comparar con 0 flotante
    float price = 0.0f;
    char a = 160;
    char e = 130;
    char sign = 168;
    
    printf("Elige la sala\n");
    printf("1: Sala 1 \n");
    printf("2: Sala 2 \n");
    printf("3: Sala 3 \n");
    scanf("%d", &room);
    printf("%cQu%c edad tienes?\n", sign, e);
    scanf("%d", &age);

    switch (room)
    {
    case 1:
        price = 50;
        break;
    
    case 2:
        price = 80.0;
        break;
    
    case 3:
        price = 120.0;
        break;
    
    default:
        printf("Respuesta no v%clida\n", a);
        break;
    }

    if(age > 0 && age < 18 && price != 0.0f){
        price -= 10;
    } else if (age >= 60 && price != 0.0f){
        price -= 15;
    }

    printf("El costo de tu boleto es: $%f", price);
}