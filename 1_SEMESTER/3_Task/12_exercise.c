#include <stdio.h>

int main(){
    int num;
    int counter = 2;
    int isPrime = 1;
    char u = 163;
    char e = 130;

    printf("Dame un n%cmero entero y te dir%c si es primo o no\n", u, e);
    scanf("%d", &num);

    while(counter < (num / 2) && isPrime != 0){
        if (num % counter == 0){
            isPrime = 0;
        }
        counter++;
    }
    if(isPrime == 1)
        printf("Es primo");
    else 
        printf("No es primo");
}