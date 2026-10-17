#include <stdio.h>

int main(){
    int president = 0;
    float pre1 = 0, pre2 = 0, pre3 = 0, pre4 = 0;
    float total = 0;
    float per1, per2, per3, per4;
        do{ 
        printf("Teclee el candidato votado\n");
        scanf("%d", &president);
        switch (president)
        {
        case 1:
            pre1++;
            break;
        case 2:
            pre2++;
            break;
        case 3:
            pre3++;
            break;
        case 4:
            pre4++;
            break;
        default:
        total--;
        printf("Ingrese un valor valido\n");
            break;
        }
        total++;
    } while (president != 0);
    per1 = (pre1 / total) * 100;
    per2 = (pre2 / total) * 100;
    per3 = (pre3 / total) * 100;
    per4 = (pre4 / total) * 100;
    printf("Porcentaje del presidente 1: %f%\n", per1);
    printf("Porcentaje del presidente 2: %f%\n", per2);
    printf("Porcentaje del presidente 3: %f%\n", per3);
    printf("Porcentaje del presidente 4: %f%\n", per4);
}