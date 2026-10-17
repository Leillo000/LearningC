#include <stdio.h>
/*
07/10/26
*/
void factorial(int n);

int main(){
    int n = 0;
    printf("Dame el numero del que quieres calcular su factorial\n");
    scanf("%d", &n);
    factorial(n);
}

void factorial (int n){
    int res = 1;
    for (int i = n; i >= 1; i--){
        res *= i;
    }
    printf("El resultado es: %d", res);
}
