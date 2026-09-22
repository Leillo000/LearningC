#include <stdio.h>

int main(){
    int elefants = 1;
    int num;
    char n = 164;
    char i = 161;
    char a = 160;
    char sign = 168;
    printf("%d elefante se balanceaba\n", elefants);
    printf("Sobre la tela de una ara%ca\n", n);
    printf("Como ve%ca que resist%ca\n", i, i);
    printf("Fue a llamar a otro elefante\n");
    while(elefants < 10){
        printf("%cCu%cntos elefantes se balancearan?\n", sign, a);
        scanf("%d", &num);

        if (num != elefants + 1){
            printf("Intet%clo de nuevo ! \n");
        } else {
            elefants++;
            printf("%d elefantes se balanceaban\n", elefants);
            printf("Sobre la tela de una ara%ca\n", n);
            printf("Como ve%can que resist%ca\n", i, i);
            printf("Fueron a llamar a otro elefante\n");
        }
    }
}