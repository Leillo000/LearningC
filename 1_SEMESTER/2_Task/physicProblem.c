#include <stdio.h>
#include <math.h>

int main(){
    const float GRAVITY = 9.81;
    const int TIME = 3.0;
    float height;
    float speedFinal;
    
    height = (1.0 / 2.0) * GRAVITY * pow(TIME, 2); // Siempre debes de forzar el tipo de dato en C
    speedFinal = GRAVITY * TIME;

    printf("Velocidad final: %fm/s\n", speedFinal);
    printf("Altura: %fm", height);
}