#include <stdio.h>

int main(){
    int num;
    int odds;
    char u = 163;
    char a = 160;
    printf("Dame un n%cmero entero para transformarlo en un tri%cngulo\n", u, a);
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        odds = ((i + 1) * 2) - 1;
        for(int j = 0; j <= i; j++){
            printf("%d\t", odds);
            odds -= 2;
        }
        printf("\n");
    }

}