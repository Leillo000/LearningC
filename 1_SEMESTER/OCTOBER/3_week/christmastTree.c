#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Si el sistema operativo es de windows
#ifdef _WIN32
#include <windows.h>
/**
 * @brief
 * Arbol de navidad que cambia con notas predefinidas
 * @date
 * 20/10/2026
 */

void wait(int miliseconds)
{
    Sleep(miliseconds);
}

void cleanUpScreen()
{
    system("cls");
    // printf("\033[H"); // Colores en ASCII
}

void playNote(int frequency, int durationMiliseconds)
{
    if (frequency > 0)
    {
        Beep(frequency, durationMiliseconds);
    }
    else
    {
        Sleep(durationMiliseconds);
    }
}

#else

void wait(int miliseconds)
{
    usleep(miliseconds * 1000);
}

void cleanUpScreen()
{
    system("clean");
}

void playNote(int frequency, int durationMiliseconds)
{
    if (frequency > 0)
    {
        printf("\a");   // Es sonido
        fflush(stdout); // Es para limpiar el buffer
    }
    else
    {
        usleep(durationMiliseconds * 1000);
    }
}

#endif

// --- CÓDIGOS DE COLORES ANSI ---
#define RESET "\033[0m"
#define VERDE "\033[32m"
#define ROJO "\033[31m"
#define AMARILLO "\033[33m"
#define AZUL "\033[36m"
#define MARRON "\033[33m"
#define BLANCO "\033[37m"

// Definición de notas musicales (en Hz)
#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392

int main()
{
    int dimension = 0;
    int tronco = 0;
    int random = 0;
    int index = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int sphereColor = 0;
    const char invertedSlash = 92;
    // --- MELODÍA EXTENDIDA DE "JINGLE BELLS" ---
    int melodiaNotas[] = {
        NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_G4, NOTE_C4, NOTE_D4, NOTE_E4,
        NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_G4,
        NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_G4, NOTE_C4, NOTE_D4, NOTE_E4,
        NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_D4, NOTE_C4};

    int duraciones[] = {
        200, 200, 400, 200, 200, 400, 200, 200, 300, 100, 600,
        200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 400,
        200, 200, 400, 200, 200, 400, 200, 200, 300, 100, 600,
        200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 800};

    int totalNotes = sizeof(melodiaNotas) / sizeof(melodiaNotas[0]);

    do
    {
        cleanUpScreen();
        printf(RESET);
        printf("Dimension del arbol -valor entre 3 y 30\n");
        scanf("%d", &dimension);
    } while (dimension < 3 || dimension > 20);

    printf("\nArmando el arbol....\n");
    wait(1000);

    while (1)
    {
        if (index == totalNotes)
            index = 0;
        wait(250);
        cleanUpScreen();
        printf("\n\n");

        // Dibujar el arbol
        for (i = 0, j = dimension; i < dimension; i++, j--)
        {
            for (k = 0; k < j; k++)
            {
                printf(" ");
            }
            for (int m = dimension; m >= j; m--)
            {
                random = rand() % 10;
                if (random < 2 && i > 0)
                {
                    sphereColor = rand() % 5;
                    switch (sphereColor)
                    {
                    case 1:
                        printf(ROJO "o");
                        break;
                    case 2:
                        printf(AMARILLO "*");
                        break;
                    case 3:
                        printf(AZUL "o");
                        break;
                    case 4:
                        printf(BLANCO "+");
                        break;
                    default:
                        printf(VERDE);
                        break;
                    }
                }
                else
                {
                    printf(VERDE "/");
                }
                printf(VERDE "%c", invertedSlash);
            }
            printf("\n");
        }
        tronco = (dimension - dimension % 3);
        for (int j = 0; j < tronco; j++)
        {
            for (int k = 1; k < dimension; k++)
                printf(MARRON " ");
            printf("| |\n");
        }
        
        printf("\n");
        playNote(melodiaNotas[index], duraciones[index]);
        printf(RESET "MERRY CHRISTMAS!!\n");
        printf(BLANCO "Presiona ESC para salir");
        wait(200);
        index++;
    }
}