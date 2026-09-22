#include <stdio.h>

int main(){
    int num;
    char u = 163;
    char a = 160;
    printf("Dame un n%cmero entero para transformarlo en un tri%cngulo\n", u, a);
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}   