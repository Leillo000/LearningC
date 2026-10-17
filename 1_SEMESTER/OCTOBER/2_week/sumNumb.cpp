/*
08/10/26
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int n = 270;
    int odds = 0;
    int evens = 0;
    int num;
    // float o double
    for (int i = 0; i < n; i++){
        num = rand() % 51;
        if (num % 2 == 0)
            evens+= num;
        else
            odds+= num;
    }
    evens /= n;
    printf("Suma de n%cmeros impares: %d\n", 163, odds);
    printf("Promedio de n%cmeros pares: %d\n", 163, evens);
}