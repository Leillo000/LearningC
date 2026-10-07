#include <stdio.h>

int main(){
    int oldSeconds, seconds, minutes, hours;
    char u =     163;
    printf("Ingresa el n%cmero de segundos:\n", u);
    scanf("%d", &seconds);
    oldSeconds = seconds;
    hours = seconds / 3600;
    seconds %= 3600; 
    minutes = seconds / 60;
    seconds %= 60;
    printf("%d segundos son %d horas, %d minutos y %d segundos", oldSeconds, hours, minutes, seconds);
}