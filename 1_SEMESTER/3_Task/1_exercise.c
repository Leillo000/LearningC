#include <stdio.h>

int main(){
    int total = 0;
    int num;
    char u = 163;

    do{
        printf("Introduzca un n%cmero\n", u);
        scanf("%d", &num);
        total+=num;
    } while(total <= 50);

    printf("El total es: %d", total);
}