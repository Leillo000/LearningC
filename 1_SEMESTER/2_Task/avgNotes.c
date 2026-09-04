#include <stdio.h>

int main(){
    float notes[4];
    float sum = 0;
    for (int i = 0; i<=3;i++){
        printf("Dame el valor de la nota %d\n", i + 1);
        scanf("%f", &notes[i]);
        sum+=notes[i];
    }
    sum/=4;
    printf("La nota definitiva del estudiante es %f", sum);
}