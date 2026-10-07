#include <stdio.h>
#include <math.h>

int main(){
    /*
    Introducir un numero e indicar si el numero es par o impar, la suma de sus digitos y el numero invertido
    */
    int num = 0, suma = 0;

    printf("Introduce el numero:\n");
    scanf("%d", &num);

    if(num == 0){
        printf("0\n");
        printf("");
        return 0;
    } else {
        printf("Numero invertido:\t");
        while(num != 0){
            suma += num % 10;
            printf("%d", num % 10);
            num /= 10;
        }
        printf("\nSuma de los digitos:\t%d\n", suma);
        if(suma % 2 == 0)
            printf("\nLa suma es par\n");
        else
            printf("\nLa suma es impar\n");
    }
}