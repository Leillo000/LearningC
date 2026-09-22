#include <stdio.h>
int main(){
    char nombre[50];
    char sign = 168;
    char a = 160;
    char option = 's';
    int guests = 1;
    
    printf("%cCu%cl es el nombre del primer invitado?\n", sign, a);
    scanf(" %s", &nombre);
    do{
        printf("%cQuieres invitar a m%cs personas?\n", sign, a);
        printf("s) si\n");
        printf("n) no\n");
        scanf(" %c", &option);
        getchar();

        if(option == 's'){
            printf("%cCu%cl es el nombre del invitado %d?\n", sign, a, guests + 1);
            scanf(" %s", &nombre);
            getchar();
            guests++;
        }
    } while (option != 'n');
    printf("El total de invitados es: %d", guests);
}