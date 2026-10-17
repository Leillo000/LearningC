#include  <stdio.h>
#include  <time.h>
/*
13/10/2026
Programa para marcar la hora
*/

const int TOTMIN = 60;
const int TOTSEG = 60;

void reloj();

int main(){
    reloj();
}

void reloj(){
    int min = 0, seg = 0;
    for (int i = 0; i < TOTMIN; i++){
        for (int j = 0; j < TOTSEG; j++){
            printf("%d-%d\n", i + 1, j + 1);
        }
        printf("\n");
    }
}