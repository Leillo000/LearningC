#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    /*
    Semilla generada a partir de 1970 del 1ero de enero
    Al numero es de 1 + el residuo de dividirlo a 100, asi que si el resultado es 
    divisible entre 100, el residuo sera 0, y se le sumara 1 como el minimo.
    Para determinar el dividendo debemos de usar la formula ran_max - ran_min + 1
    ran_max para ver si es divisible, se le resta ran_min para neutralizar la diferencia
    con el min que se le suma desde el principio y + 1 para que empiece desde 1
    */
    char u = 163;
    srand((unsigned int) time(NULL));
    int secret_num = 1 + rand() % 100;
    int contador = 0;
    int num = -1;

    while (num != secret_num){
        printf("Introduce el n%cmero que pienses que sea\n", u);
        scanf("%d", &num);
        if(num > secret_num){
            printf("El n%cmero es menor\n", u);
        } else if(num < secret_num){
            printf("El n%cmero es mayor\n", u);
        }
    }
    printf("Correcto! El n%cmero era %d", u, secret_num);
    return 0;
}