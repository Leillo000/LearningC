#include <stdio.h>
#include <stdlib.h> // funciones random srdan(), rand()
#include <time.h> // Acceder al tiempo global de la computadora

/*
06/10/26
MENU DE OPCIONES
1. PROTOTIPO
2. LLAMADA
3. IMPLEMENTACION

VOID - tipo de función que no recibe ni retorna valores

*/

/*
    Carga en memoria la función por si se usa más adelante, todos los compiladores funcionan de esa manera
    en la que primero tienen que ser cargados en memoria para después ser usados.
    Para optimizar el código debemos de declarar las funciones después de main();
*/

void menu();
void aleatorio();
void dividirNum();
void abecedario();

int opc = 0;

int main()
{
    srand(time(NULL));
    menu();    
    printf("Gracias por usar mi programa");
}

void menu()
{
    do
    {
        printf("============================\n");
        printf("|\tMENU PRINCIPAL \t    |\n");
        printf("============================\n");
        printf("Aleatorio..............\t1\n");
        printf("Dividir num............\t2\n");
        printf("Abecedario.............\t3\n");
        printf("Salir..................\t4\n");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            aleatorio();
            break;
        case 2:
            dividirNum();
            break;
        case 3:
            abecedario();
            break;
        case 4:
            break;
        default:
            printf("Ingrese una opcion valida\n");
            break;
        }

    } while (opc != 4);
}

void aleatorio(){
    /*
        Capturar el total de numeros a generar
    */
   int total = 0;
   int num = 0;
   printf("Total de numeros a generar: \n");
   scanf("%d", &total);

   for(int i = 0; i < total; i++){
        num = rand() % (50 + 1); // Toma la semilla generada por el reloj. Se puede usar indefinidamente
        // numero = min + rand() - (max - min + 1)
        printf("%d\t", num);
   }
   printf("\n");
}

void dividirNum(){
    int acum = 0; 
    int digito = 0;
    printf("Dame el numero a dividir: \n");
    scanf("%d", &digito);
    if(digito > 0){
        while(digito > 0){
            acum = digito % 10;
            digito/= 10;
            printf("%d\n", acum);
        }
    } else {
        printf("0 Si el numero es menor o igual a 0, el valor siempre sera 0\n");
    }
}

void abecedario(){
    char i;
    for(i = 'a'; i <= 'z'; i++){
        printf("%c\n", i);
    }
}