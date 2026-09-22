#include <stdio.h>

int main(){
    float investment;
    float anualInterest;
    int years;
    char a = 160;
    char e = 130;
    char o = 162;
    char n = 164;

    // El problema no indica si el interes es compuesto o es simple, por lo que tomare el interes como compuesto

    printf("Cu%cl es tu inversi%cn inicial?\n", a, o);
    scanf("%f", &investment);
    printf("Cu%cl es tu inter%cs anual?\n", a, e);
    scanf("%f", &anualInterest);
    printf("Por cu%cntos a%cos has invertido ese monto?\n", a, n);
    scanf("%d", &years);
    for(int i = 0; i < years; i++){
        // Interes compuesto
        investment+= investment * anualInterest * 0.01;
        printf("Capital obtenido en el a%co %d: $%f\n", n, i + 1, investment);
    }

}