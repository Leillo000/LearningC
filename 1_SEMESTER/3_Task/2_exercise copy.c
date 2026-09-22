#include <stdio.h>

int main(){
    int num = 0;
    int res = 0;
    char u = 163;
    while(num <= 42){
        printf("Introduce un n%cmero: \n", u);
        scanf("%d", &num);
        res += num;
    }

    printf("El resultado de la sumatoria de todos los n%cmeros que introdujiste fue de %d", u, res);
}