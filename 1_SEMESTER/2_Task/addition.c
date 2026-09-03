#include <stdio.h> 

int main(){
    int n;
    int sum; // La suma de los enteros siempre sera resultara en un entero
    char u = 163;
    printf("Dame un n%cmero entero positivo a partir de 1\n", u);
    scanf("%d", &n);
    sum = (n * (n + 1) / 2);
    printf("\nEl resultado de la suma de 1 a %d es: %d", n, sum);
    return 0;
}