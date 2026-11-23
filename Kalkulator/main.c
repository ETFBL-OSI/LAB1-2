#include <stdio.h>
#include "operacije.h"

int main()
{
    printf("Kalkulator\n");

    double a,b;
    scanf("%lf %lf", &a, &b);
    printf("%lf\n %lf\n %lf\n %lf\n", saberi(a,b), oduzmi(a,b), pomnozi(a,b), podijeli(a,b));

    return 0;
}
