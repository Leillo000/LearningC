#include <stdio.h>

int main(){
    int num1;       
    int num2;       
    int res = 0;
    char u = 163;
    char sign = 168;
    char ene = 164;
    char afirmacion = 's';
    printf("Ingresa el primer n%cmero\n", u);
    scanf("%d", &num1);
    printf("Ingresa el segundo n%cmero\n", u);
    scanf("%d", &num2);
    res = num1 + num2;

    while(afirmacion != 'n'){
        printf("%cQuieres a%cadir otro n%cmero?\n", sign, ene, u);
        printf(" 's' para si\n");
        printf(" 'n' para no\n");
        scanf(" %c", &afirmacion);
              
        if(afirmacion == 's'){
            printf("Ingresa el n%cmero\n", u);
            scanf("%d", &num1);
            res+=num1;
        }
    }
    printf("El total es: %d", res);
}