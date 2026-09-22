#include <stdio.h>
#include <string.h>

int main(){
    char password[20] = "HolaMundo";
    char response[20] = " ";
    char n = 164;

    // strcmp devolvera 0 si las 2 cadenas son iguales
    while(strcmp(password, response) != 0){
        printf("Introduce la contrase%ca menor o igual de 20 caracteres sin espacios\n", n);
        scanf(" %s", response);
        if(strcmp(password, response) != 0){
            printf("Intentalo de nuevo !\n");
        }
    }
    printf("Bienvenido/a de nuevo !");
}
