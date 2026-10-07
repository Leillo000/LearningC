#include <stdio.h>

int main(){
    int a;
    int b;
    int i = 0;
    int sum = 0;
    printf("Ingrese el num. 1\n");
    scanf("%d", &a);
    printf("Ingrese el num. 2\n");
    scanf("%d", &b);

    while(i < a){
        sum+=b;
        i++;
    }

    printf("La respuesta de la suma es %d", sum);
}