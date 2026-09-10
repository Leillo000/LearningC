#include <stdio.h>

int main(){
    int n1, n2, n3;
    printf("Numero 1:\n");
    scanf("%d", &n1);
    printf("Numero 2:\n");
    scanf("%d", &n2);
    printf("Numero 3:\n");
    scanf("%d", &n3);

    if(n1 > n2 && n1 > n3){
        printf("Numero %d es mas grande", n1);
    } else if (n2 > n3){
        printf("Numero %d es mas grande", n2);
    } else {
        printf("Numero %d es mas grande", n3);
    }
}