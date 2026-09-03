#include <stdio.h>
#include <math.h>

int main(){
    double severancePay; // Censatías
    double interestSPay; // Intereses de censatías 
    double prima; // Prima
    int vacationsDays;
    double wage;
    double daysWorked;
    int yearsWorked;

    char i = 161;

    printf("Introduce la cantidad de d%cas trabajados:\n", i);
    scanf("%lf", &daysWorked);
    printf("Introduce tu salario:\n");
    scanf("%lf", &wage);
    yearsWorked = daysWorked / 365;
    severancePay = wage * 30 * yearsWorked * 0.0315;
    interestSPay = severancePay * pow(1.05, yearsWorked); // es un 5 % anual compuesto 
    
        vacationsDays = 12; // Por defecto los trabajadores tienen 12 dias de vacaciones

        if (yearsWorked >= 2 && yearsWorked <=5){
            vacationsDays += (yearsWorked - 1) * 2;
        }  else if (yearsWorked >= 6 && yearsWorked <= 10){
            vacationsDays = 22;
        } else if (yearsWorked >= 11 && yearsWorked <= 15){
            vacationsDays = 24;
        } else if (yearsWorked >= 16 && yearsWorked <= 20){
            vacationsDays = 26;
        } else if (yearsWorked >= 21 && yearsWorked <= 25){
            vacationsDays = 28;
        } else if (yearsWorked >= 26 && yearsWorked <= 30){
            vacationsDays = 30;
        } else if (yearsWorked >= 31){
            vacationsDays = 32;
        }

    prima = wage * vacationsDays * 0.25;

    printf("Censat%cas: $%lf\n", i, severancePay);
    printf("Intereses de censat%cas: $%lf\n", i, interestSPay);
    printf("Prima: $%lf\n", prima);
    printf("D%cas de vacaciones: %d\n", i, vacationsDays);
    return 0;
}