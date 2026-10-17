#include <stdio.h>

void cube();
void izq();
void der();
void menu();

int main()
{
    menu();
}

void cube()
{
    int n = 0;
    printf("Ingresa el largo y alto del cubo\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void der(){
    int n = 0;
    printf("Ingresa la altura de tu piramide\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void izq(){
    int n = 0;
    printf("Ingresa la altura de tu piramide\n");
    scanf("%d", &n);
    for (int i = 0; i < n + 1; i++){
        for (int k = 0; k < (n - i); k++)
            printf("  ");
        for(int j = 0; j < i; j++)
            printf("* ");
        printf("\n");
    }
}

void menu()
{
    int opc = 0;
    while (opc != 7)
    {
        printf("======================================\n");
        printf("|            MENU PRINCIPAL          |\n");
        printf("======================================\n");
        printf("|        SELECCIONE UNA OPCION       |\n");
        printf("======================================\n");
        printf("1. Cubo\n");
        printf("2. Izquierda\n");
        printf("3. Derecha\n");
        printf("======================================\n");
        printf("|         PRESIONE 7 PARA SALIR       |\n");
        printf("======================================\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            cube();
            break;
        case 2:
            izq();
            break;
        case 3:
            der();
            break;
        case 7:
            printf("======================================\n");
            printf("|    GRACIAS POR USAR MI PROGRAMA    |\n");
            printf("======================================\n");
            break;
        default:
            printf("======================================\n");
            printf("|        INGRESE OPCION VALIDA       |\n");
            printf("======================================\n");
            break;
        }
    }
}