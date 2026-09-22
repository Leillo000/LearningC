#include <stdio.h>

int main(){
    int age;
    char a = 160;
    char n = 164;
    printf("Cu%cl es tu edad?\n", a);
    scanf("%d", &age);

    for(int i = 0; i < age; i++){
        if(i != 0)
        printf("Has cumplido %d a%cos\n", i + 1, n);
        else 
        printf("Has cumplido %d a%co\n", i + 1, n);
    }
}