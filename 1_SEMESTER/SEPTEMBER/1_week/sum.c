#include <stdio.h>

int main(){
    int edad;
    int alumnos;
    float sum = 0.0f;
    char u = 117;
    printf("Introduzca el n%cmero de alumnos\n", u);
    scanf("%d", &alumnos);
    
    for(int i = 0; i < alumnos; i++){
        printf("Dame la edad %d\n", i + 1);
        scanf("%d", &edad);
        sum+=edad;
    }
    sum /= alumnos;

    printf("La edad promedio es %f", sum);
}
