#include <stdio.h>

int main(){
    // Obtener el valor mayor y el valor menor a partir de una lista de numeros dados por el usuario
    int totNum = 0, num = 0, numMenor, numMayor;
    // Limpiamos nuestra variable para que no exista nada de caché en ella (basura)
    printf("Total de numeros en la lista\n");
    scanf("%d", &totNum);
   
    for(int i = 0; i < totNum; i++){
        printf("Ingresa el numero %d", i +1);
        scanf("%d", &num);
        if(i == 0){
            numMayor = num;
            numMenor = num;
        }
        if(numMayor < num)
            numMayor = num;
        if(numMenor > num)
            numMenor = num;
    }
    printf("El numero menor es: %d \n", numMenor);
    printf("El numero mayor es: %d \n", numMayor);

    
    
}