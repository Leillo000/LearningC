#include <stdio.h>

int main(){
    const float PI = 3.141592;
    float radians;
    int degrees;
    int minutes;   
    float seconds;
    char simbol1 = 167;
    printf("Dame los radianes a convertir: \n");
    scanf("%f", &radians);
    
    degrees = radians * (180 / PI);
    minutes = ((radians * (180 / PI)) - degrees) * 60;
    seconds = ((((radians * (180 / PI)) - degrees) * 60) - minutes) * 60;

    printf("%c%d %d' %f''", simbol1, degrees, minutes, seconds);
}