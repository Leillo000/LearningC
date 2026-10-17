#include <stdio.h>
#include <math.h>

void menu();
void totalNomina();
void totalNominaFor();
void totalZeros();
void expensiveJourney();
void naturalCubes();
void simpleSerie();
void newSalary();
void positivesNums();
void mostBigSmall();
void sales();
void conjeturaUlam();
void powerNumbers();
void fibonacci();
void candidates();
void argentinaRegions();

const char percentage = 37;
const char a = 160;
const char o = 162;
const char i = 161;
const char u = 163;
const char ene = 164;
const char uUpper = 233;
const char oUpper = 224;

int main()
{
    menu();
    return 0;
}

void menu()
{
    int opc = 0;
    while (opc != -1)
    {
        printf("======================================\n");
        printf("|            MEN%c PRINCIPAL          |\n", uUpper);
        printf("======================================\n");
        printf("|        SELECCIONE UNA OPCI%cN       |\n", oUpper);
        printf("======================================\n");
        printf("1. Nomina total\n");
        printf("2. Nomina total con For\n");
        printf("3. Contar los 0's en una serie de n%cmeros\n", u);
        printf("4. Gastos de un viaje\n");
        printf("5. Cubos de los n%cmeros naturales\n", u);
        printf("6. Imprimir serie de n%cmeros\n", u);
        printf("7. Calcular nuevo sueldo de empleados\n", u);
        printf("8. N%cmeros positivos\n", u);
        printf("9. N%cmero m%cs grande y m%cs peque%co\n", u, a, a, ene);
        printf("10. Contar n%cmero de ventas\n", u);
        printf("11. Conjetura ULAM\n");
        printf("12. N%cmeros elevados por s%c mismos\n", u, i);
        printf("13. Serie Fibonacci\n");
        printf("14. Candidatos\n");
        printf("15. Promedio mensual y anual de lluvias\n");
        printf("======================================\n");
        printf("|  PRESIONE OTRO N%cMERO PARA SALIR   |\n", uUpper);
        printf("======================================\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            totalNomina();
            break;
        case 2:
            totalNominaFor();
            break;
        case 3:
            totalZeros();
            break;
        case 4:
            expensiveJourney();
            break;
        case 5:
            naturalCubes();
            break;
        case 6:
            simpleSerie();
            break;
        case 7:
            newSalary();
            break;
        case 8:
            positivesNums();
            break;
        case 9:
            mostBigSmall();
            break;
        case 10:
            sales();
            break;
        case 11:
            conjeturaUlam();
            break;
        case 12:
            powerNumbers();
            break;
        case 13:
            fibonacci();
            break;
        case 14:
            candidates();
            break;
        case 15:
            argentinaRegions();
            break;
        default:
            opc = -1;
            printf("======================================\n");
            printf("|    GRACIAS POR USAR MI PROGRAMA    |\n");
            printf("======================================\n");
            break;
        }
    }
}

void totalNomina()
{
    int empleado1 = 0;
    int empleado2 = 0;
    int empleado3 = 0;
    int empleado4 = 0;
    int empleado5 = 0;
    int empleado6 = 0;
    int empleado7 = 0;
    int empleado8 = 0;
    int empleado9 = 0;
    int empleado10 = 0;
    int nominaTotal = 0;
    printf("Dame el sueldo del primer empleado\n");
    scanf("%d", &empleado1);
    printf("Dame el sueldo del segundo empleado\n");
    scanf("%d", &empleado2);
    printf("Dame el sueldo del tercer empleado\n");
    scanf("%d", &empleado3);
    printf("Dame el sueldo del cuarto empleado\n");
    scanf("%d", &empleado4);
    printf("Dame el sueldo del quinto empleado\n");
    scanf("%d", &empleado5);
    printf("Dame el sueldo del sexto empleado\n");
    scanf("%d", &empleado6);
    printf("Dame el sueldo del septimo empleado\n");
    scanf("%d", &empleado7);
    printf("Dame el sueldo del octavo empleado\n");
    scanf("%d", &empleado8);
    printf("Dame el sueldo del noveno empleado\n");
    scanf("%d", &empleado9);
    printf("Dame el sueldo del decimo empleado\n");
    scanf("%d", &empleado10);
    nominaTotal = empleado1 + empleado2 + empleado3 + empleado4 + empleado5 + empleado6 + empleado7 + empleado8 + empleado9 + empleado10;
    printf("La nomina total de la empresa es: $%d\n", nominaTotal);
}

void totalNominaFor()
{
    int sueldo = 0;
    int nominaTotal = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Dame el sueldo del empleado %d\n", i + 1);
        scanf("%d", &sueldo);
        nominaTotal += sueldo;
    }
    printf("La nomina total de la empresa es: $%d\n", nominaTotal);
}

void totalZeros()
{
    int countZero = 0;
    int n = 0;
    int num = 0;
    printf("Introduzca el numero de numeros:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Introduza el numero %d:\n", i + 1);
        scanf("%d", &num);
        if (num == 0)
            countZero++;
    }
    printf("El numero total de ceros es: %d\n", countZero);
}

void expensiveJourney()
{
    int total = 0;
    int moneySpent = 0;
    int count = 0;
    while (moneySpent >= 0)
    {
        printf("Introduzca el dinero en su gasto %d\n", count + 1);
        printf("-1. Para salir\n");
        scanf("%d", &moneySpent);
        if (moneySpent >= 0)
            total += moneySpent;
        count++;
    }
    printf("El dinero total gastado fue de: $%d\n", total);
}

void naturalCubes()
{
    int num = 0;
    while (num != -1)
    {
        printf("Dame un n%cmero\n", u);
        printf("-1. Para salir\n");
        scanf("%d", &num);
        if (num != -1)
        {
            printf("El cubo de %d es %d\n", num, (num * num * num));
        }
    }
}

void simpleSerie()
{
    int num = 0;
    int sum = 0;
    int i = 0;
    while (sum < 1800)
    {
        if (i % 2 == 1)
            num = 3;
        else
            num = 2;
        sum += num;
        printf("%d\t", sum);
        i++;
        if (i % 9 == 0)
            printf("\n");
    }
    printf("\n");
}

void newSalary()
{
    float salary = 0;
    int i = 0;
    float totalPayRoll = 0;
    while (salary >= 0)
    {
        printf("Ingresa el sueldo del trabajador %d\n", i + 1);
        printf("======================================\n");
        printf("Ingrese un n%cmero negativo para salir\n", u);
        printf("======================================\n");
        scanf("%f", &salary);
        if (salary >= 0)
        {
            if (salary < 1000)
            {
                salary *= 1.15;
            }
            else
            {
                salary *= 1.12;
            }
            printf("Su nuevo salario es de: $%f\n", salary);
            totalPayRoll += salary;
        }
        i++;
    }
    printf("\n======================================\n");
    printf("N%cmina total de la empresa: $%f\n", o, totalPayRoll);
    printf("======================================\n\n");
}

void positivesNums()
{
    int n = 0;
    float num = 0.0;
    float avgNums = 0.0;
    float positiveCount = 0.0;
    printf("Dame el n%cmero de n%cmeros a leer\n", u, u);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Dame el n%cmero %d\n", u, i + 1);
        scanf("%f", &num);
        if (num > 0)
        {
            positiveCount++;
            avgNums += num;
        }
    }
    avgNums = avgNums / positiveCount;
    printf("======================================\n");
    printf("Promedio de n%cmeros positivos: %.2f\n", u, avgNums);
    printf("N%cmero de n%cmeros positivos: %.2f\n", u, u, positiveCount);
    printf("======================================\n");
}

void mostBigSmall()
{
    int n = 0;
    int num = 0;
    int biggest = 0;
    int smallest = 0;
    printf("Ingrese el n%cmero de n%cmeros\n", u, u);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el n%cmero %d\n", u, i + 1);
        scanf("%d", &num);
        if (i == 0)
        {
            biggest = num;
            smallest = num;
        }
        else
        {
            if (num > biggest)
                biggest = num;
            if (num < smallest)
                smallest = num;
        }
    }
    printf("======================================\n");
    printf("El n%cmero m%cs peque%co fue: %d\n", u, a, ene, smallest);
    printf("El n%cmero m%cs grande fue: %d\n", u, a, biggest);
    printf("======================================\n");
}

void sales()
{
    int n = 0;
    float num = 0;
    int big = 0;
    int mid = 0;
    int small = 0;
    printf("Introduce el n%cmero de ventas\n", u);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el monto de la venta n%cmero %d\n$ ", u, i + 1);
        scanf("%d", &num);
        printf("\n");
        if (num <= 200)
            small++;
        else if (num > 200 && num < 400)
            mid++;
        else if (num >= 400)
            big++;
        else
            i--;
    }
    printf("======================================\n");
    printf("N%cmero de ventas peque%as : %d\n", ene, small);
    printf("N%cmero de ventas medianas : %d\n", mid);
    printf("N%cmero de ventas grandes  : %d\n", big);
    printf("======================================\n");
}

void conjeturaUlam()
{
    int num = 0;
    printf("Ingrese un n%cmero positivo\n");
    scanf("%d", &num);
    while (num != 1)
    {
        if (num % 2 == 0)
            num /= num;
        else
            num = num * 3 + 1;
        printf("");
    }
}

void powerNumbers()
{
    int n = 0;
    int num = 0;
    printf("Introduce los n%cmeros que quieres que se eleven por s%c mismos\n", u, i);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i % 5 == 0)
            printf("\n");
        num = i + 1;
        num = pow(num, num);
        printf("%d\t", num);
    }
    printf("\n");
    printf("\n");
}

void fibonacci()
{
    /**
     *
     * NOTA:
     * No se puede representar un número tan grande,
     * en este caso, el número de dígitos máximo que se puede representar son 19 con long long.
     * En cambio, para llegar al término no. 180, se necesitaría de manejar el número con string,
     * pero la lógica ahí está
     *
     */

    long long n1 = 0;
    long long n2 = 1;
    long long n3 = 1;
    for (int i = 0; i < 180; i++)
    {
        if (i % 10 == 0)
            printf("\n");
        printf("%d\t", n1);
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }
}

void candidates()
{
    float candidate1 = 0;
    float candidate2 = 0;
    float candidate3 = 0;
    float candidate4 = 0;
    int opc = -1;
    while (opc != 0)
    {
        printf("Ingrese el voto de un candidato\n");
        printf("0. Para salir\n");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            candidate1 += 1.0;
            break;
        case 2:
            candidate2 += 1.0;
            break;
        case 3:
            candidate3 += 1.0;
            break;
        case 4:
            candidate4 += 1.0;
            break;
        case 0:
            break;
        default:
            printf("======================================\n");
            printf("|       INGRESE UNA OPCION VALIDA    |\n");
            printf("======================================\n");
            break;
        }
    }
    float totalVotes = candidate1 + candidate2 + candidate3 + candidate4;
    float percentage1 = (candidate1 / totalVotes) * 100.0;
    float percentage2 = (candidate2 / totalVotes) * 100.0;
    float percentage3 = (candidate3 / totalVotes) * 100.0;
    float percentage4 = (candidate4 / totalVotes) * 100.0;
    printf("======================================\n");
    printf("                 VOTOS                 \n");
    printf("Candidato 1: %.2f\n\t\t Porcentaje: %.2f %c\n", candidate1, percentage1, percentage);
    printf("Candidato 2: %.2f\n\t\t Porcentaje: %.2f %c\n", candidate2, percentage2, percentage);
    printf("Candidato 3: %.2f\n\t\t Porcentaje: %.2f %c\n", candidate3, percentage3, percentage);
    printf("Candidato 4: %.2f\n\t\t Porcentaje: %.2f %c\n", candidate4, percentage4, percentage);
    printf("VOTOS TOTALES: %.2f\n", totalVotes);
    printf("======================================\n");
}

void argentinaRegions()
{
    float sur = 0.0;
    float norte = 0.0;
    float centro = 0.0;
    float sum = 0.0;
    float leastAnnual = 0.0;
    int month = 0.0;

    for (int i = 0; i < 12; i++)
    {
        printf("Ingrese el promedio mensual del mes %d\n en la zona norte\n", i + 1);
        scanf("%f", &sum);
        norte += sum;
        printf("Ingrese el promedio mensual del mes %d\n en la zona sur\n", i + 1);
        scanf("%f", &sum);
        sur += sum;
        if (i == 0) leastAnnual = sum;
        if (leastAnnual > sum) {
            leastAnnual = sum;
            month = i + 1;
        }
        printf("Ingrese el promedio mensual del mes %d\n en la zona centro\n", i + 1);
        scanf("%f", &sum);
        centro += sum;
    }
    norte /= 12;
    sur /= 12;
    centro /= 12;

    printf("======================================\n");
    printf("Promedio de lluvia anual en la zona norte: %f mm\n", norte);
    printf("Promedio de lluvia anual en la zona sur: %f mm\n", sur);
    printf("Promedio de lluvia anual en la zona centro: %f mm\n\n", centro);
    printf("En el mes %d con %f mm de lluvia fue el peor promedio en la zona sur\n\n", month, leastAnnual);
    if (norte > sur && norte > centro)
        printf("La zona con mayor lluvia anual fue la zona norte\n");
    else if (sur > centro)
        printf("La zona con mayor lluvia anual fue la zona sur\n");
    else
        printf("La zona con mayor lluvia anual fue la zona centro\n");
    
    
    printf("======================================\n");
}

